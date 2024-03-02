#include<bits/stdc++.h>
using namespace std;

//creation of linked list
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data, ListNode* address){
        val=data;
        next=address;
    }
    ListNode(int data){
        val=data;
        next=nullptr;
    }

};

//converting array into linked list

ListNode* ArrToList(vector<int>&arr){
    ListNode* head=new ListNode(arr[0]);
    ListNode* mover=head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

//printing linked list

void print(ListNode* head){
    ListNode* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}


//insertion At head

ListNode* InsertAtHead(ListNode* head,int data){
    return new ListNode(data,head);
}

//Insertion at tail
ListNode* InsertAtTail(ListNode*head,int data){
    ListNode* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    ListNode* add=new ListNode(data);
    temp->next=add;
    return head;
}

//Insertion at Kth place

ListNode* InsetionAtKPlace(ListNode*head,int data,int k){
    if(head==NULL){
        if(k==1){
            return new ListNode(data);
        }
    }
    int count=0;
    ListNode* temp=head;
    ListNode* prev=nullptr;
    while(temp){
        count++;
        if(count==k){
            ListNode* add=new ListNode(data,temp);
            prev->next=add;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

//Insertion of elment at previous of given element
ListNode* InsetionPrevK(ListNode*head,int data,int k){
    if(head==NULL){
        return head;
    }
    
    ListNode* temp=head;
    ListNode* prev=nullptr;
    if(temp->val==k){
        return new ListNode(data,temp);
    }
    else
    {
        while(temp){
        if(temp->val==k){
            ListNode* add=new ListNode(data,temp);
            prev->next=add;
            break;
        }
        prev=temp;
        temp=temp->next;
        }
    }
    return head;
}



int main(){
vector<int>arr={3,5,8,1};
ListNode* head=ArrToList(arr);
// head=InsertAtHead(head,18);
// head=InsertAtTail(head,78);
// head=InsetionAtKPlace(head,67,3);
head=InsetionPrevK(head,34,8);
print(head);

}