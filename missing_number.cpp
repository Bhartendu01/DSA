#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int missing_number(vector<int>&nums){
        int n = nums.size();
        int total = n*(n+1)/2;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return total-sum;
    }
};

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    cout<<"Missing number is: "<<obj.missing_number(arr);
    return 0;
}