#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i < nums.size() - 1 && nums[i] == nums[i + 1])
            {
                continue;
            }
            else
            {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};
int main()
{
    vector<int> nums;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    Solution soln;
    cout << soln.removeDuplicates(nums);
}
