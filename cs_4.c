/****************************************
Code to find nth Fibonacci number
Efficient code with least time complexity
2115066
*****************************************/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    float a2=(1-pow(5,0.5))/2;
    float a1=(1+pow(5,0.5))/2;
    int a3=(pow(a1,n)-pow(a2,n))/(pow(5,0.5));
    printf("%d",a3);
}
