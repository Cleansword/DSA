#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next,*back;
    ListNode(int data,ListNode* ad1,ListNode* ad2){
        val=data;
        next=ad1;
        back=ad2;
    }
     ListNode(int data){
        val=data;
        next=back=nullptr;
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

//deletion at head
ListNode* DeleteHead(ListNode* head){
    if(head==nullptr || head->next==nullptr && head->back==nullptr) return nullptr;

    ListNode* temp=head;
    head=head->next;
    temp->next=head->back=nullptr;
    free(temp);
    return head;
}

//deletion at Tail

ListNode* DeleteTail(ListNode* head){
    if(head==nullptr || head->next==nullptr && head->back==nullptr) return nullptr;
    ListNode* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    ListNode* prev=temp->back;
    prev->next=temp->back=nullptr;
    delete temp;
    return head;
}

//delete the kth node in doubly linked list
ListNode* deleteKpos(ListNode* head,int k){
    if(head==NULL) return NULL;
    int count=0;
    ListNode* temp=head;
    while(temp){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    ListNode* front=temp->next;
    ListNode* prev=temp->back;

    if(prev==NULL && front==NULL){
      return nullptr;
    }
    else if(prev==NULL){
        return DeleteHead(head);
    }
    else if(front==NULL){
        return DeleteTail(head);
        
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}

//remove the given element from doubly linked list
ListNode* deleteKnum(ListNode* head,int k){
    if(head==NULL) return NULL;
    int count=0;
    ListNode* temp=head;
    while(temp){
        count++;
        if(temp->val==k) break;
        temp=temp->next;
    }
    ListNode* front=temp->next;
    ListNode* prev=temp->back;

    if(prev==NULL && front==NULL){
      return nullptr;
    }
    else if(prev==NULL){
        return DeleteHead(head);
    }
    else if(front==NULL){
        return DeleteTail(head);
        
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}


int main(){
    vector<int>arr={1,5,3,7,9};
    ListNode* head=ArrToList(arr);
    // head=DeleteHead(head);
    // head=DeleteTail(head);
    head=deleteKpos(head,2);
    // head=deleteKnum(head,0);

    print(head);


}