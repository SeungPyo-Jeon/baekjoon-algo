#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    bool d[2000001] = {0};
    int a;
    
    for( int i = 0; i < N; i++){
        
        scanf("%d",&a);
        d[a+1000000]= 1;
    }
    
    for( int i = 0; i < 2000001; i++){
        if( d[i]==1 ){
            printf("%d\n",i-1000000);
        }
    }
    
}