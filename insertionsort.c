#include<stdio.h>
//works
void insertionsort(int arr[],int n);
int main(){
    int a[]={2,45,8,0,6,58,-1};
    int size=sizeof(a)/sizeof(a[0]);
    insertionsort(a,size);
    for (int i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j;
        for(j=i-1;j>=0 && arr[j]>key;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}
