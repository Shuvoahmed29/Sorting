#include<bits/stdc++.h>
using namespace std;
void heapify(int root,int n,int *arr){
    int mx = root;
    int left = 2*root+1;
    int right = 2*root+2;
    if(left<n && arr[left]>arr[mx]){
        mx = left;
    }
    if(right<n && arr[right]>arr[mx]){
        mx = right;
    }
    if(root != mx){
        swap(arr[root],arr[mx]);
        heapify(mx,n,arr);
    }
}
void deleteData(int n,int *arr){
    swap(arr[0],arr[n-1]);
    for(int i=0;i<n-1;i++){
        heapify(i,n-1,arr);
    }
}
void insertData(int data,int n,int *arr){
    arr[n-1] = data;
    heapify(0,n,arr);
}
void display(int n,int *arr){
    for(int i=0;i<n;i++){
        heapify(i,n,arr);
    }
    if(n<=0){
        cout << "Priority Queue is empty!!\n";
    }
    else{
        cout << "Top element: " << arr[0] << endl;
        cout << "Priority Queue: ";
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n=0,arr[10000];
    while(1){
        system("cls");
        display(n,arr);
        cout << "For push/insert data inter I.\n";
        cout << "For pop/delete data inter D.\n";
        cout << "For display all data inter P.\n";
        cout << "For close program inter any.\n";
        cout << "Enter your choice: ";
        char ch;    cin >> ch;
        if(ch=='p' || ch=='P'){
            display(n,arr);
            // _sleep(1000);
        }
        else if(ch=='d' || ch=='D' && n>0){
            deleteData(n,arr);
            if(n<=0) n=0;
            else n = n-1;
            system("cls");
            display(n,arr);
        }
        else if(ch=='i' || ch=='I'){
            int data;
            cout << "Enter data for insert: ";
            cin >> data;
            n = n+1;
            insertData(data,n,arr);
            system("cls");
            display(n,arr);
        }
        else break;
    }
}