//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>
int main() {
    int n, arr[100], stack[100], top=-1;
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
          for(int i=0;i<n;i++){
              while(top>=0 && stack[top]<=arr[i]) top--;
              printf("%d ", top==-1?-1:stack[top]);
              stack[++top]=arr[i];
    }
}
