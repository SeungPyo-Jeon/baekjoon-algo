#include <iostream>
#include <string>
using namespace std;
class Node{
public:
    int value;
    Node* nextNode;
    
    Node(int value, Node* nextNode){
        this->value = value;
        this->nextNode = nextNode;
    }
    
};
class Queue{
public:
    Node* head;
    Node* last;
    int idx;
    
    Queue(){
        this->idx = 0;
    }
    int size(){
        return idx;
    }
    int empty(){
        if( idx==0 ) return 1;
        return 0;
    }
    
    void push( int value ){
        if( idx == 0 ){
            Node* newNode = new Node( value, NULL );
            head = newNode;
            last = newNode;
        } else{
            Node* newNode = new Node( value, NULL );
            last->nextNode = newNode;
            last = newNode;
        }
        idx++;
    }
    int pop(){
        if( empty() ) return -1;
        int value = head->value;
        head = head->nextNode;
        idx--;
        return value;
    }
    int front(){
        if( empty() ) return -1;
        return head->value;
    }
    int back(){
        if( empty() ) return -1;
        return last->value;
    }
    
};

int main(){
    Queue queue;
    int N;
    cin >> N;
    string str;
    for( int i = 0; i < N; i++){
        cin >> str;
        if( str.compare("push")==0){
            int a;
            cin >> a;
            queue.push(a);
        }else if( str.compare("pop")==0){
            cout << queue.pop()<<"\n";
        }else if( str.compare("front")==0){
            cout << queue.front()<<"\n";
        }else if( str.compare("back")==0){
            cout << queue.back()<<"\n";
        }else if( str.compare("size")==0){
            cout << queue.size()<<"\n";
        }else if( str.compare("empty")==0){
            cout << queue.empty()<<"\n";
        }
    }
}