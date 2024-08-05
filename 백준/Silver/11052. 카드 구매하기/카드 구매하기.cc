#include <iostream>
using namespace std;

int max( int a, int b){
    if( a > b ){
        return a;
    }
    return b;
}

int main(){
    int N;
    cin >> N;
    int cost[N];
    int d[N+1][N+1] = {0};
    
    for( int i = 1; i < N+1; i ++){
        cin >> cost[i];
    }
    
    for( int x = 1; x < N+1; x++){
        d[x][1] = cost[x];
        for( int y = 2; y <= x; y++){
            
            for( int r = x-1; r >= y-1; r--){
                d[x][y] = max( d[x][y], d[r][y-1]+cost[x-r] );
            }
        }
    }
    int maximum = 0;
    for( int i = 1; i<N+1; i++ ){
        maximum = max( maximum, d[N][i] );
    }
    cout << maximum;
}