#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;




int main(){
    char c;
    int A=0,B=0;
    while(cin>>c){

        if (c=='0') break;
        //cin>>c;
        if(c=='A') ++A;
        else if(c=='B') ++B;
        //else cout<<"enter error !!! please enter A OR B!!!"<<endl;
    }
    if(A==B) cout<<endl<<"E"<<endl;
    else if(A>B) cout<<endl<<"A"<<endl;
    else  cout<<endl<<"B"<<endl;



    return 0;
}

