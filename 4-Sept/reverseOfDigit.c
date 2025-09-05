#include<stdio.h>
int main(){
    int n, reverse=0, remainder;
    printf("Enter a number to find its reverse: ");
    scanf("%d", &n);
    while(n!=0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("The reverse of the number is: %d\n", reverse);
    return 0;
}