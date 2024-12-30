#include <iostream>
using namespace std;

void square(int n) {
    for (int i = 1; i <= n; i++) {
        int val = i * i;
        cout << val << " ";
    }
}

int main() {
    int n;
    cin >> n;
    square(n);

}

