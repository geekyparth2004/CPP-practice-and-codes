#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std; 

vector<int> get_digits(int n) {
    vector<int> digits;
    while(n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    return digits;
}

int coins(int n) {
    if (n == 0)  return 0;
    if (n <= 9) return 1; 

    vector<int> digits = get_digits(n);
    int result = INT_MAX;

    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] > 0) {  // Only subtract non-zero digits
            result = min(result, 1 + coins(n - digits[i]));
        }
    }

    return result;
}

int main() {
    int n; 
    cin >> n; 
    cout << coins(n);
}
