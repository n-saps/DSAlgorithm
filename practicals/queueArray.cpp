#include <iostream>
using namespace std;
#define n 20

class queue{
    int* arr;
    int top, front;
    public:
    queue(){
       arr=new int[n];
       top=-1;
       front=-1; 
    }
    
    void push(int val){
        if(top>=n){
            cout<<"Queue overflow";
            return;
        }

        top++;
        arr[top]=val;
        if(front==-1)
            front++;
        
    }
    void pop(){
        if(front==-1 || front>top){
            cout<<"No element to pop"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1){
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1){
            return true;
        }
        return false;
    }

};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    q.pop();

    cout<<q.empty()<<endl;

    return 0;
}