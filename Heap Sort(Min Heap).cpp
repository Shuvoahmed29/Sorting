#include<bits/stdc++.h>
using namespace std;
void heapify(int root,int n,int *arr){
    int mini = root;
    int left = 2*root + 1;
    int right = 2*root + 2;
    if(left<n && arr[left]<arr[mini]){
        mini = left;
    }
    if(right<n && arr[right]<arr[mini]){
        mini = right;
    }
    if(root != mini){
        swap(arr[root],arr[mini]);
        heapify(mini,n,arr);
    }
}
void heapSort(int n,int *arr){
    for(int i=0;i<n;i++){
        heapify(i,n,arr);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[i],arr[0]);
        heapify(0,i,arr);
    }
}
int main(){
    int n;  cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    heapSort(n,arr);
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}