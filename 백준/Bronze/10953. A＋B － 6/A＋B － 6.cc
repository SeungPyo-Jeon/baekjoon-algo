#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; 
    cin>>n;
    cin.ignore();
  
    for( int i=0; i < n; i++ ){
        string str;
        getline(cin, str);
        size_t pos = str.rfind(',');
        string a = str.substr( 0, pos );
        string b = str.substr( pos+1 );
        int ia = stoi(a);
        int ib = stoi(b);
        cout << ia+ib << endl;
      
    }

  return 0;

}