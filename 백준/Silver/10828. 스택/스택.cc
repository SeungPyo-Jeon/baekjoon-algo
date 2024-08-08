#include <string>
#include <iostream>
using namespace std;

class Node{
public:
    int idx;
    int value;
    Node* preNode;
    Node( int idx, int value, Node* preNode){
        this->idx = idx;
        this->value = value;
        this->preNode = preNode;
    }
};

class stack{
public:
    Node* curNode;
    
    stack(){
        this->curNode = new Node(-1, -1, NULL);
    }
    int top(){
        if( curNode->idx== -1) return -1; 
        return curNode->value;
    }
    int pop(){
        if( curNode->idx== -1) return -1; 
        Node* node = curNode;
        int a = node->value;
        this->curNode = this->curNode->preNode;
        delete node;
        return a;
    }
    
    void push( int a ){
        Node* node = new Node(this->curNode->idx+1, a, this->curNode );
        this->curNode = node;
    }
    
    int empty(){
        if( curNode->idx == -1 )
            return 1;
        return 0;
    }
    int size(){ return this->curNode->idx+1; }
};

int main(){
    stack stk;
    int N;
    string inst;
    cin >> N;
    for( int i = 0; i < N; i++ ){
        cin >> inst;
        if( inst.compare("push")==0){
            int a;
            cin >> a;
            stk.push(a);
        }else if(inst.compare("pop")==0){
                cout << stk.pop()<<"\n";
        }else if(inst.compare("size")==0){
            cout << stk.size() << "\n";
        }else if(inst.compare("top")==0){
            cout << stk.top() << "\n";
        }else if(inst.compare("empty")==0){
            cout << stk.empty() << "\n";
        }
        
    }
}