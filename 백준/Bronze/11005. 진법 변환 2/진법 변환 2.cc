#include <iostream>
#include <string>
using namespace std;

string convert( long i){
	if( i > 9 ){
		string c(1,(char)(i + 55));
	 	return c;
	}
	string c(1,(char)( i + 48));
	return c;
}

int isDivide( string& answer, int target, long long base, int B){
	if( base > (long)target ) return -1;
	long value = isDivide( answer, target, base*B, B);
	if( value >= 0) target = value;
	long temp = target / base;
	answer = answer + convert(temp);
	//cout << target <<" "<< base <<">>"<< convert(temp) << endl;
	//cout << target << "-" << temp <<"*"<<base ;
	target = target - temp*base;
	//cout << "="<<target<<endl;
	return target;
}

int main(){
	int N;
	int B;
	cin >> N ;
	cin >> B;
	
	long base = 1;
	string answer = "";
	long target = isDivide(answer, N, base, B  );
	if( target == -1) answer = "0";
	//cout << target << "  " << answer<<endl ;
	cout << answer;
}