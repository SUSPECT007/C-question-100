#include <iostream>
using namespace std;
//题目描述：
//
//问题：计算 BMI 指数（身体质量指数）。BMI 指数（即身体质量指数，简称体质指数又称体重，英文为 Body Mass
//        Index，简称 BMI），是用体重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖瘦程度以及是否健康
//        的一个标准。主要用于统计用途，当我们需要比较及分析一个人的体重对于不同高度的人所带来的健康影响时，BMI 值是
//一个中立而可靠的指标。
//
//输入描述：
//一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔。
//
//输出描述：
//一行，BMI 指数（保留两位小数）。

int main(){
    double h=0,m=0,BMI=0,temp=0;
    cout<<"enter weight(kg) and height(cm) (example 70 180)"<<endl;
    cin>>m>>h;
    h/=100;
    temp =h*h;
    BMI=m/temp;
    printf("BMI is %.2f\n" ,BMI);
    cout<<"BMI is "<<BMI<<endl;
    system("pause");
    return 0;
}

