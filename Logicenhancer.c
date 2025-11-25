#include <stdio.h>
int main(){
    int n,t; scanf("%d",&n); int a[n];  
  
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
          scanf("%d",&t); int first=-1,last=-1;
    for(int i=0;i<n;i++){if(a[i]==t){if(first==-1)first=i; last=i;}}
          printf("%d %d\n",first,last);
}

//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
