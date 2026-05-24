// //shorting an array using section shorting//never ignor your doubt//assinding order
// #include <stdio.h>
// void shortarr(int arr[],int n){
//     //loop for chainginhg minimum index
//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             //loop for finding minimum element index
//             if(arr[j]<arr[min])
//             min=j;
//         }
//         //swape min element  to min index element
//         if(min!=i){
//             int temp=arr[min];
//             arr[min]=arr[i];
//             arr[min]=temp;
//         }
//     }
// }
// int main(){
//     int arr[]={1,3,5,7,9,2,4,6,8,10,11,13,15,16,17,19,},n=sizeof(arr)/sizeof(arr[0]);
//     shortarr(arr,n);

//     printf("shorted array=");
//     for(int i=0;i<n;++i){
//         printf("%d ",&arr[i]);
//     }
    


//     return 0;
// }//outer for loop run n-1 times and inner loop also n-1 times
// // T(n)=(n-1)(n-1)=omg(n^2)





#include<stdio.h>
int fibo(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    fibo(a);
    for(int i=1;i<a;i++)
    {
        printf("%d",fibo(i));
    }
}