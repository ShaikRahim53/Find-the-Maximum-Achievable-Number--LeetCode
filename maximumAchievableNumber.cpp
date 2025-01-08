#include<iostream>
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2*t;
    }
};
int main()
{
    Solution s;
    int res = s.theMaximumAchievableX(4,1);
    std::cout << res;
}
