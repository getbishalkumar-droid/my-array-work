#include<stdio.h>
int main(){
    //find the sum of array element
    int bill[5]={56,57,58,59,60},sum=0;
    for(int i=0;i<5;++i){
        sum=sum+bill[i];
    }
    printf("total bill=%d",sum);
    return 0;

}