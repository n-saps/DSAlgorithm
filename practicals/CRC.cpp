#include <bits/stdc++.h>
using namespace std;

string XOR(string a, string b){
    string result="";
    for(int i=1; i<b.length(); i++){
        if(a[i]==b[i])
            result+="0";
        else 
            result+="1";
    }
    return result;
}

string CRC(string divident, string divisor){
    int n=divisor.length();
    string d= divident.substr(0, n);

    while(n<divident.length()){
        if(d[0]=='1'){
            d= XOR(divisor, d)+divident[n];
        }
        else{
            d= XOR(string(n, '0'), d)+ divident[n];
        }
        n++;
    }

    if(d[0]=='1'){
        d=XOR(divisor, d);
    }
    else{
        d=XOR(string(n, '0'), d);
    }
    return d;
}

void encodeData(string data, string key){
    int kl=key.length();

    string a=(data+ string(kl-1, '0'));

    string remainder=CRC(a, key);
    string codeword= data+ remainder;
    cout<<"Remainder: "<< remainder<<endl;
    cout<<"Encoded data: "<< codeword<<endl;
}

int main(){
    string data="1101011111";
    string key="10011";

    encodeData(data, key);
    return 0;
}