#include <iostream>
using namespace std;
int min( int a, int b){
	if( a > b) return b;
	return a;
}
int max( int a, int b){
	if( a < b) return b;
	return a;
}

int main(){
	int T;
	cin >> T;
	int arr[T];
	int len[T];
	for( int i = 0; i<T; i++){
		cin >> arr[i];
		len[i] = 1;
	}
	int maximum = 0;
	
	for ( int i =0; i<T; i++){
		for( int j =0; j < i; j++){
			if( arr[i] < arr[j]){
				len[i] = max( len[i], len[j]+1);
			}
		}
		maximum = max( maximum, len[i]);
	}
	cout << maximum;
}