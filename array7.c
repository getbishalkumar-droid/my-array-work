//finding second largest and second smallest element in array
//finding largest and smallest element first then including a condition for removing largest and smallest element first
#include<stdio.h>
void seclarsecsma(int arr[],int n,int *seclar,int *secsma){
    int lar=arr[0],sma=arr[0];
    *seclar=arr[0],*secsma=arr[0];
    for(int i=0;i<n;++i){
        if(lar<=arr[i])
        lar=arr[i];
        if(sma>=arr[i])
        sma=arr[i];
    }
    for(int i=0;i<n;++i){
        if(*seclar<=arr[i]&&arr[i]!=lar)
        *seclar=arr[i];
        if(*secsma>=arr[i]&&arr[i]!=sma)
        *secsma=arr[i];
    }
}
int main(){
    int arr[]={2,8,7,6,5,3,4,9,1,0,11,12,13,19,16},n=sizeof(arr)/sizeof(arr[0]),seclar,secsma;
    seclarsecsma(arr,n,&seclar,&secsma);
    printf("second largest element =%d\n",seclar);
    printf("second smallest element=%d",secsma);
    return 0;
}