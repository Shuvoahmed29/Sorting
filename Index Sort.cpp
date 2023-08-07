#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    int arr[n],idx[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        idx[i] = i;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[idx[i]]>arr[idx[j]]){
                swap(idx[i],idx[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[idx[i]] << " ";
    }
    cout << endl;
}