#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next,*back;
    ListNode(int data,ListNode* ad1,ListNode*ad2){
        val=data;
        next=ad1;
        back=ad2;
    }
     ListNode(int data){
        val=data;
        next=nullptr;
        back=nullptr;
    }


};
void print(ListNode* head){
    ListNode* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main(){
    ListNode* head=new ListNode(4);
    ListNode * a=new ListNode(5,nullptr,head);
    head->next=a;
    print(head);

}