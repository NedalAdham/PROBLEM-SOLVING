#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
 using namespace std;
 void fillPrefixSum(int arr[], int n, int prefixSum[])
 {
     prefixSum[0] = arr[0];

     // Adding present element
     // with previous element
     for (int i = 1; i < n; i++)
         prefixSum[i] = prefixSum[i-1] + arr[i];
 }
 int main()
 {
     ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
     int n,c,flag=0;
     cin>>n>>c;
     int a[n];

     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int sum=0,current ,min=999999999;
     for(int i=0;i<n;i++)
     {
         current=0;
         sum=0;
         for(int j=i;j<n;j++)
         {
             current++;
             sum+=a[j];
             if(sum>=c)
             {
                 if(current<min)
                 {
                     min=current;
                 }
                 flag++;

             }
         }
     }
     if(flag!=0)cout<<min;
     else{cout<<"-1";}
 }