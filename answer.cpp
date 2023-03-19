#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//Determine whether three sides from a triangle
//判断三条边是否构成三角形
bool judgeIS(int a,int b, int c){
    if(a+b>c && a+c>b && c+b>a && abs(a-b)<c && abs(a-c)<b && abs(b-c)<a)
        return true;
    cout<<"It is not a triangle , please enter three edge again!"<<endl;
    return false;
}

int main(){
    int a,b,c;
    double circle,area,p;
    do {cin>>a>>b>>c;} while (!judgeIS( a,b,c));
    circle=a+b+c;
    p=0.5*circle;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("circumference=%.2lf area=%.2lf \n",circle,area);

    return 0;
}

