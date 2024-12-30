// #include <iostream>
// using namespace std;

// // Recursive function to calculate the sum of the array
// int sumOfArray(int arr[], int n) {
//     // Base case: if array size is 0, sum is 0
//     if (n == 0) 
//         return 0;
//     // Recursive case: add the last element to the sum of the rest
//     return arr[n - 1] + sumOfArray(arr, n - 1);
// }

// // Function to calculate the mean of the array
// double meanOfArray(int arr[], int n) {
//     // Avoid division by zero if array is empty
//     if (n == 0)
//         return 0;
//     // Calculate mean by dividing sum by the number of elements
//     return (double)sumOfArray(arr, n) / n;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Mean of the array is: " << meanOfArray(arr, n) << endl;

//     return 0;
// }


#include<iostream>
using namespace std;
int sumofarray(int arr[] , int n)
{
    if(n==0) return 0; 
    return arr[n-1] + sumofarray(arr,n-1); 
}

int meanofarray(int arr[] , int n)
{
    if(n==0) return 0; 
    return sumofarray(arr,n) / n; 
}
int main()
{
    int arr[] = {1,2,3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<meanofarray(arr,n); 

}