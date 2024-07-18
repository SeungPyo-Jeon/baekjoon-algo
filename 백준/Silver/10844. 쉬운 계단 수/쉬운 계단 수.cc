/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[101][10]{0};
    
    for( int i = 1; i < 10; i++){
        arr[1][i] = 1;
    }
    
    for( int i = 2; i <= n; i ++){
        for( int j = 0; j < 10; j++){
            if( j == 0 ){
                arr[i][j] = arr[i-1][j+1] % 1000000000;
            }else if( j == 9 ){
                arr[i][j] = arr[i-1][j-1] % 1000000000;
            }else{
                arr[i][j] = (arr[i-1][j-1] + arr[i-1][j+1])% 1000000000;
            }
        }
    }
    long long sum = 0;
    for( int i = 0; i < 10; i++){
        sum += arr[n][i];
    }
    cout << sum % 1000000000 << endl;
    return 0;
}