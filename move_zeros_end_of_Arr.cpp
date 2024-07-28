#include <bits/stdc++.h>
using namespace std;

void move_Zeros(int arr[],int n){
  int temp[n];
  int count_zero=0;
  int j=0;
  
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      count_zero++;
    }
    else{
      temp[j]=arr[i];
      j++;
    }
  }
  for(int i=j;i<n;i++){
    temp[i]=0;
  }
  
  for(int i=0;i<n;i++){
    arr[i]=temp[i];
  }
  
}

void move_zeros(int arr[],int n){
  int j=-1;
  
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      j=i;
      break;
    }
  }
  
  if(j==-1) return;
  
  for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
      swap(arr[j],arr[i]);
      j++;
    }
  }
  
  
}

int main() 
{
   int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
   int n=sizeof(arr)/sizeof(arr[0]);
  
  
   move_zeros(arr,n);
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
   
    return 0;
}