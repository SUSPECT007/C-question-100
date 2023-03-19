#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Hex_TO_Dec(const string& IHex){
    int n=IHex.size(),ans=0,x;
    for (int i=2;i<n;i++){
        ans*=16;
        if (IHex[i]>='0'&&IHex[i]<='9') ans=ans+IHex[i]-'0';
        else if(IHex[i]>='A'&&IHex[i]<='Z') ans=ans+IHex[i]-'A';
        else if(IHex[i]>='a'&&IHex[i]<='z') ans=ans+IHex[i]-'a';
    }
    return ans;
}
int Oct_TO_Dec(const string& IOct ){
    int n=IOct.size(),ans=0,x;
    for (int i=1;i<n;i++){
        ans*=8;
        ans=ans+IOct[i]-'0';
    }
    return ans;
}
int Dec_TO_Dec(const string& IDec ){
    int n=IDec.size(),ans=0,x;
    for (int i=0;i<n;i++){
        ans*=10;
        ans=ans+IDec[i]-'0';
    }
    return ans;
}

int judge_out(const string& str){
    if(str.size()>1&&str[0]=='0')
        if(str[1]=='X'||str[1]=='x') return Hex_TO_Dec(str);
        else return Oct_TO_Dec(str);
    else return Dec_TO_Dec(str);
    return 0;
}

int main(){
    string a,b;
    int x1,x2,sum=0;
    cout<<"enter first number :"<<endl;
    cin>>a;
    cout<<"enter second number :"<<endl;
    cin>>b;
    x1=judge_out(a);x2=judge_out(b);
    sum=x1+x2;
    cout<<"the sum of ("<<a<<" + "<<"b) = "<<sum<<endl;
    system("pause");


    return 0;
}

