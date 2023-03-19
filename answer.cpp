#include <iostream>
#include <string>
using namespace std;


int main(){
    double a,b,c,ans,p;
    cout<<"enter the score of the student: ";
    cin>>a>>b>>c;
    ans=a+b+c;
    p=ans/3.0;
    printf("%.2f %.2lf",ans,p);
    return 0;
}

