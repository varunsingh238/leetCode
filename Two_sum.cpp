#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define pif pair<float, float>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)
const int INF = 1e9;
template<typename T>
istream& operator >>(istream& in,vector<T> &nums){
       for(auto &x : nums)
         in >> x;
     return in;
    }

template<typename T>
ostream& operator <<(ostream& os,vector<T> &nums){
       for(auto &x : nums)
         os << x << " ";
     return os;
    }

int main()
{   
    int n;
    cin >> n;
    vector<int> nums(n);

    int target;
    cin >> nums >> target;

    cout << nums << endl;

    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if(mp.find(target - nums[i])!=mp.end())
        {
            cout  << mp[target - nums[i]] << " " << i;
            break;
        }
       
        mp[nums[i]] = i;
    }

        return 0;
}