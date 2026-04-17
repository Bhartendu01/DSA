#include <bits/stdc++.h>
using namespace std;


int smallest_element(vector<int>&arr, int n){
    int smallest_element = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest_element)
        smallest_element = arr[i];
    }
    return smallest_element;
}

int main(){
    int n; cin>>n;
    vector<int>array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"The smallest element is: "<< smallest_element(array,n);
    return 0;
}