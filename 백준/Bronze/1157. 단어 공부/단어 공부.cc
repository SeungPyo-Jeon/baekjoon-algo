#include <iostream>
#include <string>

using namespace std;
int main(){
	int alphabet_count[26] = {};
	string input;
	int index;
	cin >> input;
	
	for( int idx = 0; idx<input.length(); idx++){
		char c = input[idx];
		if( int(c) > 96 )
			index = int(c)-97;
		else index = int(c)-65;
		//cout << c << " "<<index<<endl;
		alphabet_count[index]++; 
	}
	
	int top_count_idx = 0;
	bool is_redundant = false;
	int size = sizeof(alphabet_count) / sizeof(alphabet_count[0]);
	for(int idx=1; idx < size ;idx++){
		//cout << alphabet_count[idx] << " ";
		if( alphabet_count[top_count_idx] == alphabet_count[idx]){
			is_redundant = true;
		}
		else if( alphabet_count[top_count_idx] < alphabet_count[idx]){
			top_count_idx = idx;
			is_redundant = false;
		}
	}
	cout << (is_redundant ? '?':(char)(top_count_idx+65));
	return 0;
}