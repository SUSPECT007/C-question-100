#include <iostream>
#include <string>
using namespace std;


int main(){
    int a,n;
    cout<<"you will exit ,if you enter char "<<endl;
    while(cin>>n){
        a=1;
        a<<=n;
        cout<<a<<endl;
    }
    return 0;
}

