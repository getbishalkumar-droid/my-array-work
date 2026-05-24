//copy all element from one array to another
#include<stdio.h>
int main(){
    int a1[]={1,2,3,4,5,6,7,8,9,0},cpa1[10];
    for(int i=0;i<10;++i){
        cpa1[i]=a1[i];
    }
    printf("copied array element=");
    for(int i=0;i<10;++i){
        printf("%d  ",cpa1[i]);
    }
    return 0;
}  
