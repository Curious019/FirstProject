#include<bits/stdc++.h>
using namespace std;

int binarySerach_recursive(vector<int>&v,int element,int low,int high){
        if(low>high){
        return -1;
        }
        int mid=low+(high-low)/2;
        if(v[mid]==element){
            return mid;
        }
        else if(v[mid]<element){
            return binarySerach_recursive(v,element,mid+1,high);
        }
        else{
            return binarySerach_recursive(v,element,low,mid-1);
        }       
}

int main(){ 

   int n;scanf("%d",&n);
   vector<int>v(n);
   for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
   }
   int element;scanf("%d",&element);        
   int low=0,high=n-1;
   int idx=binarySerach_recursive(v,element,low,high);
   if(idx==-1){
    printf("Element not found\n");
   }
   else{
    printf("Element found at index %d\n",idx);
   }
return 0;
}