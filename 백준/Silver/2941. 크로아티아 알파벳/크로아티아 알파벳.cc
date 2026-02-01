#include <iostream>
#include <string>

using namespace std;

int check(char* cur){
	
}

int main(){
	string s;
	
	cin >> s;
	int size = s.length();
	int total_count = 0;
	
	for(int idx = 0; idx < size; idx ++ ){
		const char c = s[idx];
		total_count++;
		
		if( idx < 1) continue;
		const char last = s[idx -1 ];
		switch( c ){
			case '=':
				if( last == 'c' || last == 's'){
					total_count--;
				}else if (last == 'z'){
					total_count--;
					if( idx < 2 ) continue;
					const char second_former = s[idx-2];
					if( second_former=='d'){
						total_count--;
					}
				}
				break;
			case '-':
				if( last == 'c' || last == 'd' ){
					total_count--;
				}
				break;
			case 'j':
				if( last == 'l' || last == 'n'){
					total_count--;
				}
				break;
		}
	} 
	cout << total_count;
}