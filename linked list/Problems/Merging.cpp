//Merging two sorted list
#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data,ListNode* ad1){
        val=data;
        next=ad1;
    }
    ListNode(int data){
        val=data;
        next=nullptr;
    }

};
ListNode* solve(vector<int>&arr){
    ListNode* head=new ListNode(arr[0]);
    ListNode* mover=head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(ListNode* head){
    ListNode* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

ListNode* merge(ListNode* l1,ListNode* l2){
    ListNode* head=new ListNode(0);
    ListNode*mover=head;
    

    ListNode* temp1=l1,*temp2=l2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val<=temp2->val){
            mover->next=temp1;
            mover=temp1;
            temp1=temp1->next;
        }
        else{
            mover->next=temp2;
            mover=temp2;
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
        mover->next=temp1;
        mover=temp1;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        mover->next=temp2;
        mover=temp2;
        temp2=temp2->next;
    }
    // mover=NULL;
    return head->next;

}
int main(){
    vector<int>arr={1,4,7,9};
    vector<int>brr={0,5,12,45};
    ListNode* l1=nullptr;
    l1=solve(arr);
    ListNode* l2=nullptr;
    l2=solve(brr);
    print(l1);
    print(l2);
    ListNode* ans=nullptr;
    ans=merge(l1,l2);
    print(ans);


}