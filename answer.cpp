#include <iostream>
#include <string>
using namespace std;


int main(){
    int n;
    char c;
    cout<<"enter an number(height of pyramid) : ";
    cin>>n;
    cout<<endl<<"enter a char : ";
    cin>>c;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){cout<<" ";}
        for (int k=0;k<i;k++)
        cout<<c<<" ";
        cout<<endl;
    }




    return 0;
}

