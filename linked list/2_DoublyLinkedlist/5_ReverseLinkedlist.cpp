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
ListNode* ArrToList(vector<int>&arr){
    ListNode* head=new ListNode(arr[0]);
    ListNode*prev=head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i],nullptr,prev);
        prev->next=temp;
        prev=prev->next;
    }
    return head;
}
void print(ListNode* head){
    ListNode* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

//Reverse Doubly Linked List using Stack

// ListNode* reverse(ListNode* head){
//     stack<int>s;
//     ListNode* temp=head;
//     while(temp){
//         s.push(temp->val);
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp){
//         temp->val=s.top();
//         s.pop();
//         temp=temp->next;
//     }
//     return head;

// }

//reverse without using extra space
ListNode* reverse(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* prev=NULL,*curr=head;
    while(curr){
        prev=curr->back;
        curr->back=curr->next;
        curr->next=prev;
        curr=curr->back;

    }
    return prev->back;

}

int main(){
    vector<int>arr={1,5,3,8,0,3};
    ListNode* head=ArrToList(arr);
    print(head);
    cout<<endl;
    head=reverse(head);
    print(head);

}