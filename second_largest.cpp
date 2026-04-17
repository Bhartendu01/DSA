#include <bits/stdc++.h>
using namespace std;

int second_largest_element(vector<int>& arr, int n){
    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    if(second == INT_MIN) return -1; // no second largest
    return second;
}

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = second_largest_element(arr, n);

    if(ans == -1) cout << "No second largest element";
    else cout << "Second largest element is: " << ans;

    return 0;
}