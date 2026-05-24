//find max product in an array
#include<stdio.h>
//function defination
//for returning pointer from function use int*
int* productelemnts(int arr[],int size){
    int n=0,*ptr;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=j){
                *(ptr+n)=arr[i]*arr[j];
            n++;
            }
        }
    }
    return ptr;
}
int maxelement(int arr[],int size){
   int  max=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}
int main(){
   int arr[]={8,3,5,6,7,9};
   int size=sizeof(arr)/sizeof(arr[0]),productarr[size*size-size],*ptr;
   int max;
   //productarr=productelemnts(arr,size);we can not directly assign a pointer to an array
  ptr= productelemnts(arr,size);
   for(int i=0;i<size*size-size;i++){
    productarr[i]=*(ptr+i);
   }
   max=maxelement(productarr,size*size-size);
   printf("maxproduct=%d",max);
    return 0;
}