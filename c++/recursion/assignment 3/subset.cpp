#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &final, vector<int> &nums, vector<int> ans, int idx) {
    if(idx == nums.size()) {
        final.push_back(ans);
        return;
    }

    helper(final, nums, ans, idx+1);
    ans.push_back(nums[idx]);
    helper(final, nums, ans, idx+1);
    ans.pop_back(); 
}

vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> final;
    vector<int> ans;

    helper(final, nums, ans, 0);
    return final;
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    vector<vector<int>> result = subsets(v);

    for(auto subset : result) {
        for(auto num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}