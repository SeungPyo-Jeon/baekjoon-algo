#include <iostream>
#include <stdio.h>
using namespace std;

void swap( int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort( int arr[] , int Left, int Right){
    if( Right-Left <= 0  ) return ;
    
    int pIndex = Left;
    int pivot = Right;
    int idx = Left;

    for( idx ; idx < Right; idx++){
        if( arr[idx] < arr[pivot]){
            swap( arr[pIndex],arr[idx]);
            if( pivot==pIndex ) pivot++;
            pIndex++;
        }
    }
    swap( arr[pivot], arr[pIndex]);

    quickSort(arr,  Left,pIndex-1);
    quickSort(arr, pIndex+1,Right);
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    int arr[N] ={0};
    
    for( int i = 0; i<N; i++){
        cin >> arr[i];
    }
    
    quickSort( arr, 0, N-1);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << "\n";
    }
}
