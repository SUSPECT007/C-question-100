#include <iostream>
#include <string>
using namespace std;


int main(){
    char *ch,c;
    string str;
    ch=new char[100];
    int x='A'-'a',n=0;
    while(cin>>c){
        //if(!(c>='A'&&c<='Z')) break;
        cout<<(char)(c+32)<<endl;
        //cin>>c;

        //ch[n++]=c;
        //cin>>ch[n++];

        //if (cin.get()=='\n') break;//********important judge "enter"*****---
    }
//    for (int i=0;i<str.size();i++)
//        if(str[i]!='\n')
//        cout<<(char)(ch[i]+32)<<endl;


    return 0;
}

