#include <iostream>
using namespace std;

int main(){
    int N;
    int K;
    cin >> N;
    cin >> K;
    
    long long d[201][201];
    
    for( int i = 1; i < N+1; i++)
        d[i][1] = 1;
    for( int i = 1; i < K+1; i++)
        d[1][i] = i;
        
    for( int y = 2; y < K+1; y++ ){
        for( int x = 2; x < N+1; x++ ){
            d[x][y] =( d[x-1][y] + d[x][y-1])%1000000000;
            //cout << x<<"|y"<< y<<"|d[x-1][y]"<<d[x-1][y]<<"|d[x][y-1]"<<d[x][y-1]<<"|d[x][y]"<< d[x][y] << endl;
        }
    }
    cout << d[N][K];
}