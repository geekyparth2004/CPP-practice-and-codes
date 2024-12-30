#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "1";  
        if (i > 1) {
            cout << setw(i) << i;  
        }
        cout << endl;
    }
return 0;
}