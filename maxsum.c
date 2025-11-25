//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int sum=0, max_sum=0;
    for(int i=0;i<k;i++) sum += arr[i];  
    max_sum = sum;

    for(int i=k;i<n;i++){
        sum = sum + arr[i] - arr[i-k];   
        if(sum > max_sum) max_sum = sum;
    }

    printf("%d\n", max_sum);
}
