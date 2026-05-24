//finding maximum product
int maxproduct(int arr[],int size){
    int max1=arr[0],max2=arr[1];
    if(max1<max2){
        int temp=max1;
        max1=max2;
        max2=temp;
    }
    for(int i=2;i<size;i++){
        if(max1<=arr[i]){
            max2=max1;
            max1=arr[i];
        }
    }
   int product=max1*max2;
    return product;
}
#include<stdio.h>
int main(){
    int arr[]={2,4,7,9,1,3,4,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max_product=maxproduct(arr,size);

    printf("maxproduct=%d",max_product);



    return 0;
}