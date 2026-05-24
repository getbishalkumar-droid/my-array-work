#include<stdio.h>
//function defination
int adddigelement(int arr[2][2]){
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(i==j)
            sum+=arr[i][j];
        }
    }
    return sum;
}


int main(){
    int arr[2][2]={{2,3},{5,6}},sum;
    sum=adddigelement(arr);//only array name
    printf("sum=%d",sum);

    

    return 0;
}