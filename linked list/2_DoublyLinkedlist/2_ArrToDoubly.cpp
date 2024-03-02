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
int main(){
    vector<int>arr={3,5,7,9};
    ListNode* head=ArrToList(arr);
    print(head);

}