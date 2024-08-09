#include <iostream>
#include <string>

using namespace std;
class Node{
public:
    int value;
    Node* nextNode;
    Node* preNode;
    Node(int value, Node* preNode,Node* nextNode){
        this->value = value;
        this->nextNode = nextNode;
        this->preNode = preNode;
    }
};

class Deque{
public:
    Node* head;
    Node* foot;
    int idx;
    Deque(){
        this->idx = 0;
    }
    int size(){return idx;}
    int empty(){ if( idx ) return 0; return 1;}
    int front(){
        if( empty() ) return -1;
        return head->value;
    }
    int back(){
        if( empty() ) return -1;
        return foot->value;
    }
    
    void push_front( int value ){
        if( empty() ){
            Node* newNode = new Node(value, NULL, NULL);
            head = newNode;
            foot = newNode;
        }else{
            Node* newNode = new Node(value,NULL, head );
            head->preNode = newNode;
            head = newNode;
        }
        idx ++;
    }
    void push_back( int value ){
        if( empty() ){
            Node* newNode = new Node(value, NULL ,NULL);
            head = newNode;
            foot = newNode;
        }else{
            Node* newNode = new Node(value, foot, NULL);
            foot->nextNode = newNode;
            foot = newNode;
        }
        idx ++;
    }
    
    int pop_front(){
        if( empty()) return -1;
        idx--;
        int i = head->value;
        Node* old = head;
        head = head->nextNode;
        delete old;
        return i;
    }
    int pop_back(){
        if( empty()) return -1;
        idx--;
        int i = foot->value;
        Node* old = foot;
        foot = foot->preNode;
        delete old;
        return i;
    }
};
int main(){
    int N;
    cin >> N;
    Deque deque;
    string str;
    int a;
    for( int i = 0; i<N; i++){
        cin >> str;
        //cout << i<<" "<<str<<"\n";
        if( str.compare("push_front")==0){
            cin >> a;
            deque.push_front(a);
        }else if( str.compare("push_back")==0){
            cin >> a;
            deque.push_back(a);
        }else if( str.compare("pop_front")==0){
            cout<<deque.pop_front()<<"\n";
        }else if( str.compare("pop_back")==0){
            cout<<deque.pop_back()<<"\n";
        }else if( str.compare("size")==0){
            cout<<deque.size()<<"\n";
        }else if( str.compare("empty")==0){
            cout<<deque.empty()<<"\n";
        }else if( str.compare("front")==0){
            cout<<deque.front()<<"\n";
        }else if( str.compare("back")==0){
            cout<<deque.back()<<"\n";
        }
    }
}