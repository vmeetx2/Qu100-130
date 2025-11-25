//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int deque[n], front=0, rear=-1;

    for(int i=0;i<n;i++){
        while(front<=rear && deque[front]<=i-k) front++;
        while(front<=rear && arr[i]>=arr[deque[rear]]) rear--;
        deque[++rear]=i;
        if(i>=k-1) printf("%d ", arr[deque[front]]);
    }
}
