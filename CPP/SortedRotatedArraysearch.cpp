
#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pif pair<float,float>
#define rep(i,a,b) for(int i =a;i<b;i++)
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
        os << x <<endl; 
    return os;
 }
 
int search(vi &nums, int target){
    int high = nums.size()-1;
    int low =  0;
   while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[mid]>=nums[low]){
            if(nums[mid]>=target and nums[low]<=target)
                high = mid-1;
            else
                low = mid+1;
        }
        else{
            if(nums[mid]<=target and nums[high]>=target)
                low = mid-1;
            else
                high = mid+1;
        }
   }
   return -1;
}
int main(){
    int n;
    cin >>n;
    vi nums(n);
    cin >> nums; // template already made to input vector

        int target;
        cin >> target;
  cout << search(nums,target);

    
    return 0;
}