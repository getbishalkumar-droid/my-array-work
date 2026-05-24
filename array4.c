//count odd and even numbers in array
#include<stdio.h>
int main(){
    int array[10]={1,2,4,6,8,0,9,7,5,3},odd=0,even=0;
    for(int i=0;i<10;++i){
        if(array[i]%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("even=%d odd=%d ",even,odd);
    return 0;
}