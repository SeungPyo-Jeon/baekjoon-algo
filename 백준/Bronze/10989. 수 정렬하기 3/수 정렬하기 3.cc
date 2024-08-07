#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;



int main(){

    int N;
    cin >> N;

    int arr[10001]={0}; 
    int a;
    
    for( int i = 0; i<N; i++){
        scanf("%d",&a);
        arr[a]++;
    }
    
    for( int i =1; i <= 10000; i++){
        for( int j = 0; j < arr[i]; j++ )
            printf("%d\n",i);
    }
}