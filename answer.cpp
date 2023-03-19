#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main(){
    int n,m,h;
    cout<<"the number of milk left over :n , the speed of drinking milk(minutes) :h , passing time : m. (n h m)"<<endl;
    cin>>n>>h>>m;
    while (n*h<m){
        cout<<"Time error!! (n*m>h),please enter again"<<endl;
        cin>>n>>h>>m;
    }
    int x=0;
    x=m/h;
    if(x*h<m) ++x;
    x=n-x;
    cout<<"last milk : "<<x<<endl;

    return 0;
}

