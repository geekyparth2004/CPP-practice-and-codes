#include<iostream>
using namespace std;
int gcd(int a, int b)
{
   int i, hcf =1;

   for (i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    return hcf; 
}

int main() {
    int n1, n2;

    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    cout<<gcd(n1,n2);
}
