#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val,node* address){
        data=val;
        next=address;
    }
    node(int val){
        data=val;
        next=nullptr;
    }
};
int main(){
    vector<int>v={1,2,3,4,7,4,9,2};

    node* head=new node(v[0]);
    node* mover=head;
    for(int i=1;i<v.size();i++){
        node* temp=new node(v[i]);
        mover->next=temp;
        mover=temp;  // mover=mover->next;
    }


    //traversal in singly linked list

    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}