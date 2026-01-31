#include <iostream>

using namespace std;

int main(){
	char string[101] = {0};
	cin >> string;

	int size = 100;
	bool isPellindrom = 1;
	
	for( int idx = 0 ; idx < size ; idx ++ ){
		if( string[idx] == 0){
			size = idx;
			break;
		}
	}
	//cout << "found out last char "<< *right<<" "<< size<<" th" <<endl;
	
	for( int idx = 0; idx < size / 2; idx ++ ){
		if( string[idx] != string[size-1-idx]){
			isPellindrom = 0;
			break;
		}
	}
	cout << isPellindrom ;
	return 0;
}