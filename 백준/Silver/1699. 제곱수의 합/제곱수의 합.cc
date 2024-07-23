#include <iostream>
#include <cmath>
using namespace std;

int min ( int a, int b){
    if( a > b ){
        return b;
    }
    return a;
}
int main(){
    long N; 
    cin >> N;
    long d[N+1] = {0};
    d[0] = 0;
    for( long i = 1; i < N+1; i++ ){
        d[i] = i;
        for( long j= 1; j <= int(sqrt(i)); j++){
            d[i] = min( d[i], d[i-(j*j)]+1);
        }
    }
    cout << d[N];
    return 0;
}