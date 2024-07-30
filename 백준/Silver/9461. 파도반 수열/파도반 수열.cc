#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long d[101] ={0};
    d[0] = 0;
    d[1] = 1;
    d[2] = 1;
    d[3] = 1;
    d[4] = 2;
    
    int calculrated = 4;
    for( int cases = 0; cases < N; cases++ ){
        int K;
        cin >> K;
        if( d[K] == 0 ){
            for( int i = calculrated+1; i <= K; i++){
                d[i] = d[i-2] + d[i-3];
            }
            if( calculrated < K){
                calculrated = K;
            }
            cout << d[K] <<endl;
        }else{
            cout << d[ K ]<< endl;
        }
    }
}