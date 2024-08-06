#include <iostream>
using namespace std;

int FindMiddleWith3Nums( int a, int b, int c){
    int m = a - b;
    int n = a - c;
    if( (m * n) < 0 ){
      return a;
    }else if( m*b > m*c ){
      return b;
    }
    return c;
}
int main()
{
    cout << FindMiddleWith3Nums( 1, 0, 2 );
    cout << FindMiddleWith3Nums( 1, 2, 0 );
    cout << FindMiddleWith3Nums( 0, 1, 2 );
    cout << FindMiddleWith3Nums( 0, 2, 1  );
    cout << FindMiddleWith3Nums( 2, 0, 1  );
    cout << FindMiddleWith3Nums( 2, 1, 0 );
  
    return 0;
}

// m = a - b
// n = a - c
// i) ( a < b < c ) or ( a < c < b )
//   => m < 0 , n < 0 , mn > 0
// ii) ( b < c < a ) or ( c < b < a )
//   => m > 0 , n > 0, mn > 0
// iii) b < a < c
//   => m < 0 , n > 0, mn < 0
// iiii) c < a < b
//   => m > 0 , n < 0, mn < 0
