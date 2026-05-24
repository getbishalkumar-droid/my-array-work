//count positive negative and 0 in array
#include<stdio.h>
int main(){
    int array[10]={1,-2,4,6,-8,0,-9,7,5,3},pos=0,neg=0,zero=0;
    for(int i=0;i<10;++i){
        if(array[i]>0)
        pos=pos+1;
        else if(array[i]<0)
        neg=neg+1;
        else
        zero=zero+1;
    }
    printf("positive=%d,negative=%d,zero=%d",pos,neg,zero);
    return 0;
}