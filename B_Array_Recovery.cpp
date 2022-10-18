#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        vector<int> ans;
        ans.push_back(nums[0]);
        int prev = nums[0];
        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (prev - nums[i] >= 0 && nums[i] != 0)
            {
                flag = 0;
                cout << -1 << endl;
                break;
            }
            ans.push_back(nums[i] + prev);
            prev = nums[i] + prev;
        }
        if (flag)
        {
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
