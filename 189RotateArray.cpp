#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
    void reverse(vector<int> &nums, int s, int e)
    {
        while (s <= e)
        {
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
};
int main()
{
    vector<int> nums;
    int n, num, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    cin >> k;
    Solution soln;
    soln.rotate(nums, k);
    for (int i : nums)
    {
        cout << i << " ";
    }
}