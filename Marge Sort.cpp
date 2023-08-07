#include<bits/stdc++.h>
using namespace std;
void marge(int l,int r,int mid,int *arr){
    int size_l=mid-l+1;
    int L[size_l+1];
    for(int i=0;i<size_l;i++){
        L[i] = arr[i+l];
    }
    int size_r=r-mid;
    int R[size_r+1];
    for(int i=0;i<r;i++){
        R[i] = arr[i+mid+1];
    }
    L[size_l] = R[size_r]= INT_MAX;
    int l1=0,r1=0;
    for(int i=l;i<=r;i++){
        if(L[l1]<=R[r1]){
            arr[i] = L[l1];
            l1++;
        }
        else{
            arr[i] = R[r1];
            r1++;
        }
    }
}
void margeSort(int l, int r,int *arr){
    if(l==r) return;
    int mid = (l+r)/2;
    margeSort(l,mid,arr);
    margeSort(mid+1,r,arr);
    marge(l,r,mid,arr);
}
int main(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    margeSort(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}