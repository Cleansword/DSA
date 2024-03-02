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
    vector<int>v={1,2,3,4};

    Node* head=new Node(v[0]);
    Node* mover=head;
    for(int i=1;i<v.size();i++){
        Node* temp=new Node(v[i]);
        mover->next=temp;
        mover=temp;  // mover=mover->next;

    }

    cout<<head->data;

}