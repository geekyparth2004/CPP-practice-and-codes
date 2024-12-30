#include<iostream>
using namespace std; 

int main() {
    int arr[] = {2,4,7,8,3,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1; 
    
    while (k <= n) {
        for(int i = 0 ; i <=n-k ; i++) {   
            for(int j = i ; j < i+k ; j++) {
               cout << arr[j]<<",";
            }
            cout << endl;
        }
        k++;
    }

    return 0;
}