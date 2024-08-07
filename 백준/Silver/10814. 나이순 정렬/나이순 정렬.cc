#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class User{
public:
    int idx;
    int age;
    string name;
    User(int idx, int age , string name){
        this->idx = idx;
        this->age = age;
        this->name = name;
    }
    
    bool operator<(const User& u){
        if( this->age == u.age){
            return this->idx < u.idx;
        }else{
            return this->age < u.age;
        }
    }
};

int main(){
    int N;
    cin >> N;
    vector<User> v;
    
    string name;
    int age;
    
    for( int i=0; i<N; i++){
        scanf("%d",&age);
        getline(cin,name);
        v.push_back( {i, age, name});
    }
    sort(v.begin(), v.end());
    for( auto p: v){
        auto [idx, age, name] = p;
        //printf("%d %s\n",&age, &name);
        cout << age<<""<<name<<"\n";
    }
}