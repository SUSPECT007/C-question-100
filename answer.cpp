#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main(){
    int score;
    while (1)
    {
        cout<<"enter a score: (if you want out ,enter -1)"<<endl;
        cin>>score;
        if (score==-1) break;
        if(score>=90&& score<=100) cout<<"perfect"<<endl;
        system("pause");

    }

    return 0;
}

