#include <iostream>
#include <string>
using namespace std;


int main(){
    double v,r;
    const double pai=3.1415926;
    cout<<"Radius of a sphere: "<<endl;
    cin>>r;
    v=4.0*r*r*r*pai/3;//ps .'4/3*r*r*r*pai' is wrong!!!!! should (4/3)*r*r*r*pai
    cout<<v<<endl;
    printf("volume of sphere : %.4f\n",v);



    return 0;
}

