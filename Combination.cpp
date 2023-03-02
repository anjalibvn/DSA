#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans, vector<int> &v, int arr[], int target, int index, int n)
{
    if (index == n)
    {
        if (target == 0)
        {
            ans.push_back(v);
        }
        return;
    }
    if (arr[index] <= target)
    {
        v.push_back(arr[index]);
        solve(ans, v, arr, target - arr[index], index, n);
        v.pop_back();
    }
    solve(ans, v, arr, target, index + 1, n);
}
int main()
{

    vector<int> v;
    vector<vector<int>> ans;
    int arr[] = {2, 3, 6, 7};
    int n = 4;
    int target = 7;
    cout << "hello";
    solve(ans, v, arr, target, 0, n);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); i++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}