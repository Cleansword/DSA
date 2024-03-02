#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int* arr;
    int start;
    int end;
    Queue(){
        size=1000;
        arr=new int[size];
        start=-1;
        end=-1;
    }
    void push(int val){
        if(start==-1) start++;
        end++;
        arr[end]=val;
    }
    int pop(){
        int x=arr[start];
        start++; 
        return x;
    }
    int Sizeofqueue(){
        return end-start+1;
    }
    void endofQ(){
        cout<<arr[end]<<endl;
    }
    void startofQ(){
        cout<<arr[start]<<endl;
    }
    void print(){
        for(int i=start;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Queue q;
    q.push(2);
    
    q.push(4);
    q.push(45);
    int a;
    a=q.Sizeofqueue();
    cout<<"size of queue  "<<a<<endl;
     q.print();
    q.pop();
       a=q.Sizeofqueue();
       cout<<"size of queue  "<<a<<endl;
    q.startofQ();
    q.push(67);
    q.endofQ();

    q.print();

}