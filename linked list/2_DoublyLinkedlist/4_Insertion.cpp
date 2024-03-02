#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next,*back;
    ListNode(int d,ListNode*ad1,ListNode* ad2){
        val=d;
        next=ad1;
        back=ad2;
    }
     ListNode(int d){
        val=d;
        next=back=nullptr;
    }

};
ListNode* solve(vector<int>&arr){
    ListNode* head=new ListNode(arr[0]);
    ListNode* extra=head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i],nullptr,extra);
        extra->next=temp;
        extra=extra->next;
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

//Insertion before head;
ListNode* InsertionBeforeHead(ListNode* head,int data){
    ListNode* temp=new ListNode(data,head,nullptr);
    head->back=temp;
    head=head->back;
    return head;
}

//Insertion before tail
ListNode* InsertionBeforetail(ListNode* head,int data){
   if(head->next==NULL){
    return InsertionBeforeHead(head,data);
   }
   ListNode* temp=head;
   while(temp->next){
    temp=temp->next;
   }
   ListNode* prev=temp->back;
   ListNode* add=new ListNode(data,temp,prev);
   prev->next=temp->back=add;
   return head;
}

//Insertion before kth Node

ListNode* InsertionBeforeKthNode(ListNode* head,int k,int data){
   if(k==1){
    return InsertionBeforeHead(head,data);
   }
   

   ListNode* temp=head;
   int count=0;
   while(temp){
    count++;
    if(count==k) break;
    temp=temp->next;
   }
   ListNode* prev=temp->back;
   ListNode* add=new ListNode(data,temp,prev);
   prev->next=temp->back=add;
   return head;
}

//Insertion Before given Node

void InsertionBeforeGivenNode(ListNode* node,int data){
    ListNode* prev=node->back;
    ListNode* add=new ListNode(data,node,prev);
    prev->next=node->back=add;

}


int main(){
    vector<int>arr={1,5,7,9};
    ListNode* head=solve(arr);
    head=InsertionBeforeHead(head,22);
    head=InsertionBeforetail(head,345);
    head=InsertionBeforeKthNode(head,4,78);
    InsertionBeforeGivenNode(head->next->next,8789);

    print(head);

}