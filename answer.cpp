#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int gcd(int a ,int b){
    int temp=a%b;
    while(temp){
        a=b;b=temp;
        temp=a%b;
    }
    return b;

}


int main(){

  cout<<"enter two int a,b "<<endl;
  int a,b,greatest,least;
  cin>>a>>b;
  least=gcd(a,b);
  greatest=a*b/least;
  cout<<"greatest common divisor: "<<greatest<<" least common multiple: "<<least<<endl;

    return 0;
}

