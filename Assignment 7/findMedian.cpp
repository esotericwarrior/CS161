#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;

void sort(int *a,int n){

int m;

for (int i = 0; i < n-1; i++)

{

//Find the minimum element in unsorted array

 m = i;

 for (int j = i+1; j < n; j++)

 if (a[j] < a[m])

 m = j;

 // Swap the found minimum element with the first element

 int temp=a[m];

 a[m]=a[i];

 a[i]=temp;

 }

 }

 float findMedian(int *a,int n){

sort(a,n);

 if(n%2==1){

 return a[n/2];

 }else{

 return (a[(n-1)]+a[(n-2)])/(float)2;

 }

 }

int main(){
 //int a[]={13, 18, 13, 14, 13, 16, 14, 21, 13,13};

int a[]={550, -322, 6, 39};
// printf("Median:- %f",findMedian(a,10));
cout << findMedian(a, 4) << endl;

}
