#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <iomanip>
using namespace std;




int main(){
   double a,b,c,deta,x1,x2;
   cin>>a>>b>>c;
   cout<<setiosflags(ios::fixed)<<setprecision(2);
   if(a==0) {cout<<endl<<"Not quadratic equation"<<endl; return 0;}
   deta=b*b-4*a*c;
   if (deta==0){
       x1=(-b)/(2.0*a);
       cout<<"x1=x2="<<x1<<endl;
   }
    if (deta>0){
        double d=sqrt(deta);
        x1=(-b+d)/(2.0*a);
        x2=(-b-d)/(2.0*a);
        cout<<"x1="<<x1<<"x2="<<x2<<endl;
    }
    if (deta<0){
        double i=sqrt(-deta)/(2*a);
        double r=(-b)/(2.0*a);
        cout<<"x1="<<r<<" +"<<i<<"i "<<"x2="<<r<<" -"<<i<<"i "<<endl;
    }



    return 0;
}

