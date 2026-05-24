#include<stdio.h>
int main(){
    //program for input and print array element
    int data[5];
    printf("enter five number ");
    for(int i=0;i<5;++i)
    scanf("%d",&data[i]);
    printf("enter numbers are ");
    for(int i=0;i<5;++i)
    printf("%d ",data[i]);
    return 0;

}