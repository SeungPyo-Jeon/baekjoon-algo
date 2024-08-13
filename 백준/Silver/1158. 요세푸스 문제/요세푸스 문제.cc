#include <iostream>

using namespace std;
class Node{
public:
    int value;
    Node* right;
    Node(int value){
        this-> value = value;
    }
};

class CircleList{
public:
    int idx;
    Node* head;
    Node* foot;
    CircleList(){
        idx = 0;
    }
    int size(){return idx;}
    
    void push(int value){
        Node* newNode = new Node(value);
        if( size()>0 ){
            newNode->right = foot->right;
            foot->right = newNode;
            foot = newNode;
        }else{
            head = newNode;
            newNode->right = newNode;
            foot = newNode;
        }
        idx++;
    }
    
    int pop(){
        Node* newNode = foot->right;
        
        foot->right = newNode->right;
        
        int i = newNode->value;
        delete newNode;
        idx--;
        return i;
    }
    void next(){
        foot = foot->right;
    }
};
int main(){
    int N,K;
    cin >> N >> K;
    CircleList cir;
    for( int i =0; i<N; i++){
        cir.push(i+1);
    }
    // int size = cir.size();
    // for( int i = 0; i<size; i++){
    //     cout<<cir.pop();
    //     cir.next();
    // }
    cout<<"<";
    while( cir.size() > 0 ){
        
        for( int i = 1; i < K; i++){cir.next();}
        cout<<cir.pop();
        if(cir.size() > 0 ) cout<<", ";
    }
    cout<<">";
}