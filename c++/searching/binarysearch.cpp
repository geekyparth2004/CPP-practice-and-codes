#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; 
}

int main()
{
    vector<int> num;

    num.push_back(2);
    num.push_back(4);
    num.push_back(3);
    num.push_back(5);
    num.push_back(32);
    num.push_back(11);

    int target = 32;

    cout << "Index of " << target << " is: " << binarysearch(num, target) << endl;

}