#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int largest_element = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest_element)
        largest_element = arr[i];
    }
    cout<<"The largest element is: "<< largest_element;
    return 0;
}