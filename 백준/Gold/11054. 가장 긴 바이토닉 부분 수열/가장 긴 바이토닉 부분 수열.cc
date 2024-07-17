#include <iostream>
using namespace std;
long compare( int a, int b, int c){
    if( a > b ){
        if( a > c) return a;
        else return c;
    }else{  
        if( b > c ) return b;
        else return c;
    }
}
int main()
{
    int N;
    cin >> N;
    long array[N];
    long upcount[N];
    long downcount[N];
    long maximum = 0;
    for( int i =0; i<N; i++ ){
        cin >> array[i];
        downcount[i] = 1;
        upcount[i] = 1;
    }
    for( int i =0; i <N; i++){
        for( int j =0; j < i; j++){
            if( array[i] > array[j]){
                upcount[i] = compare( upcount[i], upcount[j]+1, 0);
            }
            if( array[i] < array[j]){
                downcount[i] = compare( upcount[j]+1, downcount[i], downcount[j]+1 );
            }
        }
        maximum = compare( upcount[i], downcount[i], maximum);
    }
    cout << maximum;
    return 0;
}