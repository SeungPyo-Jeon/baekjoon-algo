#include <iostream>
using namespace std;
int max( int a, int b){
	if( a > b) return a;
	return b;
}
int main(){
	int T;
	cin >> T;
	long num[T] = {0};
	long arr[T] = {0};
	for( int cases =0; cases < T; cases++){
		cin >> num[cases];
		arr[cases] = num[cases];
	}
	long maximum = 0;
	arr[0] = num[0];
	for ( int i =0; i < T; i++){
		for( int j = 0; j< i; j++){
			if( num[i] > num[j]){
				arr[i] = max( arr[i], arr[j]+num[i]);
			}
		}
		maximum = max( maximum, arr[i]);
	}
	 cout << maximum ;
}