#include<iostream>
using namespace std;
int main()
{
    int m,n;

    cout<<"Enter the values of rows and cols"; 

    cin>>m>>n; 

    int arr[m][n];

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        if(i%2==0){

            for(int j = 0 ; j<= n-1 ; j++){

                cout<<arr[i][j]<<" ";
            }
        }
        else{

            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        
    }







}