//implementation of linked list using class

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val,Node* address){
        data=val;
        next=address;
    }
    Node(int val){
        data=val;
        next=nullptr;
    }
};
int main(){
    Node * head=new Node(6);
    cout<<head->data;
}