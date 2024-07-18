#include <iostream>
using namespace std;

long compare( long a, long b){
    if( a > b ){
        return a;
    }else{
        return b;
    }
}
int main()
{
    int N;
    cin >> N;
    long array[N];
    long sum[N];
    for( int i =0; i< N; i++){
        cin >> array[i];
        sum[i] = array[i];
    }
    
    long maximum = array[0];
    
    for( int i =1; i < N; i++){
        sum[i] = compare( sum[i-1]+array[i], array[i]);
        maximum = compare( maximum, sum[i]);
        //cout<<"i: "<<i<<" max:"<< maximum << " sum: "<<sum[i] <<endl;
    }
    cout << maximum;
    return 0;
}