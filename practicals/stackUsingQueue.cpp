#include <bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack(){
        N=0;
    }

    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q2;
        q2=q1;
        q1=temp;

    }
    void pop(){
        q1.pop();
    }
    int peek(){
        return q1.front();
    }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    return 0;
}