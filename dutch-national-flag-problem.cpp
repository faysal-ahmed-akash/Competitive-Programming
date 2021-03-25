#include <bits/stdc++.h>
using namespace std;

void orderOf_n(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;
    
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 2){
            swap(arr[high], arr[mid]);
            high--;
        }else{
            mid++;
        }
    }
}

void orderOf_nlogn(int arr[], int n){
    sort(arr, arr+n);
}

void orderOf_2n(int arr[], int n){
    int z = 0, o = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) z++;
        else if(arr[i] == 1) o++;
    }
    
    for(int i = 0; i < z; i++) arr[i] = 0;
    for(int i = z; i < (z+o); i++) arr[i] = 1;
    for(int i = (z+o); i < n; i++) arr[i] = 2;
}

int main(){
    int arr[] = {0, 1, 2, 0, 1, 2, 0, 1, 1, 0, 2};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    orderOf_n(arr, size);
    // orderOf_2n(arr, size);
    // orderOf_nlogn(arr, size);
    
    for(int i : arr) cout<<i<<" ";
}