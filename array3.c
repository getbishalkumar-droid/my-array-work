//find maximum and minimum element in array with the
// help of loop
#include<stdio.h>
int main(){
    int data[]={4,5,6,7,8,9,12,11,16,20},min=data[0];
    int max=data[0];
    for(int i=1;i<10;++i){
        if(max<=data[i])
        max=data[i];
        if(min>=data[i])
        min=data[i];

    }
    printf("minimum= %d and maximum= %d ",min,max);
    return 0;

    
}
