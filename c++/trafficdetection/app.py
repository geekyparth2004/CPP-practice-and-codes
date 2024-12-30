from flask import Flask, request, jsonify, send_file
import os
from vehicle_detection import detectVehicles  # Import your detection logic

app = Flask(__name__)

UPLOAD_FOLDER = 'uploads'
OUTPUT_FOLDER = 'outputs'
os.makedirs(UPLOAD_FOLDER, exist_ok=True)
os.makedirs(OUTPUT_FOLDER, exist_ok=True)

@app.route('/upload', methods=['POST'])
def upload_file():
    if 'file' not in request.files:
        return jsonify({'error': 'No file uploaded'}), 400

    file = request.files['file']
    if file.filename == '':
        return jsonify({'error': 'No selected file'}), 400

    filepath = os.path.join(UPLOAD_FOLDER, file.filename)
    file.save(filepath)

    # Process the file
    detectVehicles(file.filename)

    output_filepath = os.path.join(OUTPUT_FOLDER, f"output_{file.filename}")
    if os.path.exists(output_filepath):
        return send_file(output_filepath, mimetype='image/jpeg')
    else:
        return jsonify({'error': 'Processing failed'}), 500

if __name__ == '__main__':
    app.run(debug=True)
