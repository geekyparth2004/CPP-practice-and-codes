#include<iostream>
#include<vector>
using namespace std; 

vector<int> stableMountains(vector<int>& height, int threshold) {
    vector<int> v; 

    for(int i = 1; i < height.size(); i++) {
        if(height[i-1] > threshold) {
            v.push_back(i); 
        }
    }
    
    return v;
}

int main() {
    vector<int> input; 
    input.push_back(1);
    input.push_back(2); 
    input.push_back(3);
    input.push_back(4);
    input.push_back(5);
    
    int threshold = 1;

    vector<int> result = stableMountains(input, threshold); 

    for(auto i : result)
    {
        cout<<i<<" "; 
    }
}