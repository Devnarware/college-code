#include<stdio.h>
void main(){
    int arr[] = {5,3,8,6,2};
    int n = 5, temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}