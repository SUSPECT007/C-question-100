#include <iostream>
using namespace std;

int main(){
    int i,n,o=0;
    cout<<"enter an long int"<<endl;
    cin>>i;
    while (i){
        n=i%10;i/=10;
        o=o*10+n;

    }

    cout<<o<<endl;
    return 0;
}

