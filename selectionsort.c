#include<stdio.h>
//works
void selectionsort(int arr[],int n);
int main(){
    int a[]={2,45,8,0,6,58,-1};
    int size=sizeof(a)/sizeof(a[0]);
    selectionsort(a,size);
    for (int i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}
void selectionsort(int a[],int n){
    int i,j,temp,min;
    for(i=0;i<n-1;i++){
        //sorting will be completed in n-1 iterations
        min=i;
        for(j=i+1;j<n;j++){

            if(a[j]<a[min]){
               temp=a[min];a[min]=a[j];a[j]=temp;
            }
        }
        
    }
}