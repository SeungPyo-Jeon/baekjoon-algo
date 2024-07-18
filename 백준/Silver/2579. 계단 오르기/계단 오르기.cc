#include <iostream>
using namespace std;
long compare( long a, long b, long c){
    if( a > b ){
        if( a > c ) return a;
        return c;
    }else{
        if( b > c ) return b;
        return c;
    }
}

int main(){
    int N;
    cin >> N;
    long array[N];
    long sum[N]={0};
    for( int i =0; i < N; i++){
        cin >> array[i];
    }
    
    if( N > 0 ) sum[0] = array[0];
    
    if( N > 1 ) sum[1] = compare( array[1], sum[0]+array[1], 0);
    if( N > 2 ) sum[2] = compare( 0, array[1]+array[2], sum[0]+array[2]);
    //cout << " i: 0 " << sum[0]<<endl;
    //cout << " i: 1 " << sum[1]<<endl;
    //cout << " i: 2 " << sum[2]<<endl;
    for( int i = 3; i < N; i++){
        sum[i] = compare( 0, sum[i-2]+array[i], sum[i-3]+array[i-1]+array[i]);
        //cout << " i: "<<i << " "<< sum[i]<<endl;
    }
    cout << sum[N-1];
    return 0;
}