#include<iostream>
#include<stack>
using namespace std; 
int main()
{
    stack <int> st;

    cout<<st.empty();

    cout<<st.size();

    st.push(23);
    st.push(34); 
    st.push(89); 

    cout<<st.top(); 

    stack<int> val; 

    val.push(65);
    val.push(73); 

    val.swap(st);

    cout<<val.size();


}