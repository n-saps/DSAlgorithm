#include<iostream>
using namespace std;

void f(int n){
    if(n<2){
        return ;
    }
    if(n%2==0){
        int a=n*n*n;
        f(n-2);
        cout<<a<<" ";
    }
    else{
        n=n-1;
        int a=n*n*n;
        f(n-2);
        cout<<a<<" ";
    }
}

int F(int a, int b){
    if(a<b){
        return 0;
    }else if(b<=a){
        return F(a-b, b)+1;
    }
}

int main(){
    // f(8);
    cout<<F(5861, 7);
}