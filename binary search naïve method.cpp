#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int x){
    int size = arr.size();
    sort(arr.begin(), arr.end());
    
    int mid=(size+1)/2;
    for(int i=0; i<mid; i++){
        if(x<mid)
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<binarySearch(arr,x);
}
