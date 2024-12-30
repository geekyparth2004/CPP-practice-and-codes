#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> c) {
    for(int i = 0; i < c.size(); i++) {
        for(int j = 0; j < c[i].size(); j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> v;
    vector<int> v1;

    int n1, n2, n3;
    cout << "Enter the number of values you want to enter in first array";
    cin >> n1;

    for(int i = 0; i < n1; i++) {
        int temp1;
        cin >> temp1;
        v1.push_back(temp1);
    }

    vector<int> v2;
    cout << "Enter the number of values you want to enter in second array";
    cin >> n2;

    for(int i = 0; i < n2; i++) {
        int temp2;
        cin >> temp2;
        v2.push_back(temp2);
    }

    vector<int> v3;
    cout << "Enter the number of values you want to enter in third array";
    cin >> n3;

    for(int i = 0; i < n3; i++) {
        int temp3;
        cin >> temp3;
        v3.push_back(temp3);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    display(v);
}