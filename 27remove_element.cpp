#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[c] = nums[i];
                c++;
            }
        }
        nums.resize(c);
        return c;
    }
};

int main()
{
    Solution sol;
    vector<int> nums;
    int n, num, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    cin >> val;
    cout << sol.removeElement(nums, val);
    return 0;
}
