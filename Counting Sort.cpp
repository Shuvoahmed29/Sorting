#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    int arr[n];
    int output[n];
    int mx = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mx=max(mx,arr[i]);
    }
    int cunt[mx+1];
    for(int i=0; i<mx; i++){
        cunt[i]=0;
    }
    for(int i=0; i<n; i++){
        cunt[arr[i]]++;
    }
    for(int i=1; i<=mx; i++){
        cunt[i]=cunt[i]+cunt[i-1];
    }
    for(int i=0;i<n;i++){
       output[--cunt[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
    for(int i=0;i<n;i++){
       cout << arr[i] << " ";
    }
    cout << endl;
}