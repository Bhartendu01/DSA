// reverse an array using 2 pointer

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a =0;
    int b = n-1;
    while(a<b){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
    cout<<"Reversed array is: ";
    for(int k =0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}