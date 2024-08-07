#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class User{
public:
    string name;
    int kor;
    int eng;
    int mth;
    User(string name, int kor,int eng,int mth){
        this->name=name;
        this->kor=kor;
        this->eng=eng;
        this->mth=mth;
    }
    bool operator<(const User& u){
        if( this->kor == u.kor){
            if( this->eng == u.eng ){
                if( this->mth == u.mth ){
                    return this->name < u.name;
                }else return this->mth > u.mth;
            }else return this->eng < u.eng;
        }else return this->kor > u.kor;
    }
};

int main(){
    int N;
    cin >> N;
    
    vector<User> v;
    string name;
    int kor,eng,mth;
    
    for( int i = 0; i<N; i++){
        cin >> name>>kor>>eng>>mth;
        v.push_back( {name, kor, eng, mth} );
    }
    sort(v.begin(), v.end());
    for( auto p: v){
        auto [name,kor,eng,mth] = p;
        cout << name<<"\n";
    }
}