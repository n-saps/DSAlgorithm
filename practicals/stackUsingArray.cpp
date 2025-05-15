#include <iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int val){
        if(top==n-1){
            cout<<"Stack Overflow!!!";
            return;
        }

        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow!!!";
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No elemts in stack!!!";
            return -1;
        }
        return arr[top];
    }

    bool isempty(){
        return top==-1;
    }
};

int main(){
    stack st;
    st.push(3);
    st.push(7);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.isempty()<<endl;

    return 0;
}