#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
class Node{
public:
    char value;
    Node* preNode;
    Node( char value){
        this->value = value;
    }
};
class Stack{
public:
    int idx;
    Node* top;
    Node* head;
    Stack(){
        idx = 0;
    }
    int size(){
        return idx;
    }
    void push( char value){
        Node* newNode = new Node( value );
        if( size() > 0 ) newNode->preNode = top;
        else{ 
            newNode->preNode =NULL;
            head = newNode;
        }
        top=newNode;
        idx++;
    }
    char pop( ){
        Node* newNode = top;
        char c = top->value;
        top = newNode->preNode;
        delete newNode;
        idx--;
        return c;
    }
    
};
int main(){
    Stack stL,stR;
    string str;
    cin >> str;
    int N;
    for( int i = 0; i < str.length(); i++){
        stL.push(str[i]);
    } 
    
    cin >> N;
    char c;
    for( int i = 0; i < N; i++){
        //scanf("%c",&c);
        cin >> c;
        if( c == 'L' ){
            if( stL.size() )
                stR.push(stL.pop());
        }else if( c =='D'){
            if( stR.size() )
            stL.push(stR.pop());
        }else if( c=='B'){
            if( stL.size() )
            stL.pop();
        }else if( c=='P'){
            //scanf("%c",&c);
            cin >> c;
            stL.push(c);
        }
    }
    int size = stL.size();
    for( int i = 0; i < size; i++){
        stR.push( stL.pop());
    }
    size = stR.size();
    for( int i = 0; i < size; i++){
        cout << stR.pop()<< "";
    }
    
}









