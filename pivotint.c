#include <stdio.h>
int main(){
    int n; scanf("%d",&n); int total=n*(n+1)/2,left=0;
    for(int i=1;i<=n;i++){left+=i; if(left==(total-left+i)){printf("%d\n",i); return 0;}}
    printf("-1\n");
}

//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
