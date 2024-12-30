#include<iostream> 
using namespace std; 
int main()
{
    int arr[5] = {2,6,1,11,5};
    int n; 

    for(int l = 0; l < 5 ; l++ )
    cout<<arr[l]<<" ";
    cout<<endl;

    for(int i = 0 ; i < 5 ; i ++ ){

        int j = i ;

        while(j>=1)
        {
            if(arr[j] > arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }

    }

    
    for(int l = 0; l < 5 ; l++ )
    cout<<arr[l]<<" ";
    cout<<endl;
    


}