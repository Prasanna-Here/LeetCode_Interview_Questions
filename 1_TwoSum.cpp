#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end())
            {
                ans.push_back(map[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]] = i;
        }
        return ans;
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

    for (int i : soln.twoSum(nums, k))
    {
        cout << i << " ";
    }
}