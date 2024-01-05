#include<stdio.h>
//working good
void quicksort(int a[],int low,int high);
int a[10];
int partition(int a[],int low,int high);
int main(){
    int a[10]={2,45,0,8,56,4,4,23,-1,7};
    

   quicksort(a,0,9);
   for(int i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
   

    return 0;
}
void quicksort(int a[],int low,int high){
    int pivot;
    if(high>low){
        pivot=partition(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}
int partition(int a[],int low,int high){
    int pivot=a[low];
    int left=low,right=high;
    while(left<right){
        while(a[left]<=pivot){
            left++;
        }
        while(a[right]>pivot){
            right--;
        }
        if(left<right){
            //swap
            int temp=a[left];
            a[left]=a[right];
            a[right]=temp;
        }
    }
    a[low]=a[right];
    a[right]=pivot;
    return right;

}