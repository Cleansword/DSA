//stack implementation
#include<bits/stdc++.h>
using namespace std;
class Stack{
   
    public:
    int size;
    int * arr;
    int top;
    Stack(){
        size=1000;
        arr=new int[size];
        top=-1;
    }

    void push(int val){
        top++;
        arr[top]=val;
    }
    int pop(){
        int p=arr[top];
        top--;
        return p;
    }
    int front(){
        return arr[top];
    }
    int Sizeoftack(){
        return top+1;
    }
    void print(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    // s.print();
    int a=s.front();
    cout<<a<<endl;


}