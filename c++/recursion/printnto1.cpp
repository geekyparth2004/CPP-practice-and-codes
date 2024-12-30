// #include <iostream>
// using namespace std;

// int print(int n)
// {
//    if(n==0){ return 0; }

//    else{

//     int i = print(n-1);

//    return n;

//    }
   
// }

// int main()
// {
//     cout<<print(5);
// }


#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0) {
        return;
    } else {
        cout << n << " ";
        print(n - 1);
    }
}

int main()
{
    print(5);
    return 0;
}