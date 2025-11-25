#include <stdio.h>
int main(){
    int n; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int found=-1;
    for(int i=0;i<n;i++){int cnt=0; for(int j=0;j<n;j++) if(a[j]==a[i]) cnt++; if(cnt>n/2){found=a[i]; break;}}
    printf("%d\n",found);
}
//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
