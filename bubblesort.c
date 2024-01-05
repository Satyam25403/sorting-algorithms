//works
#include<stdio.h>
void bubble_sort(int arr[],int n);
int main(){
    int a[]={2,45,8,0,6,58,-1};
    bubble_sort(a,7);
    return 0;
}
void bubble_sort(int arr[],int n){
    //n-1 passes required to sort n elements
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}