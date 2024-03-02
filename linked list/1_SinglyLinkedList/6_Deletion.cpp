#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode* next;

        ListNode(int data,ListNode* address){
            val=data;
            next=address;
        }
        ListNode(int data){
            val=data;
            next=nullptr;
        }

};

ListNode* ArrToList(vector<int>&arr){
    ListNode*head=new ListNode(arr[0]);
    ListNode* mover=head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=mover->next;
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
 //deletion at head

 ListNode* DeletionAtHead(ListNode* head){
    ListNode* temp=head;
    head=head->next;
    free(temp);
    return head;
 }

 //deletion at tail
 ListNode* DeletionAtTail(ListNode* head){
    ListNode* temp=head;
    while(temp->next->next) temp=temp->next;
    temp->next=nullptr;
    free(temp->next);
    return head;
 }

 //deletion at given Kth place
 ListNode* DeletionAtKPlace(ListNode* head,int k){
    if(head==NULL || head->next==NULL) return NULL;

    ListNode* temp=head;

    if(k==1){
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=1;
    while(temp){
        cnt++;
        if(cnt==k){
            ListNode* delNode=temp->next;
            temp->next=delNode->next;
            free(delNode);
            break;
        }
        temp=temp->next;
    }
    return head;
 }


int main(){
    vector<int>arr={3,6,9,1};
    ListNode* head=ArrToList(arr);
    head=DeletionAtHead(head);
    head=DeletionAtTail(head);
    head=DeletionAtKPlace(head,2);
     head=DeletionAtKPlace(head,1);
    print(head);


}