#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& v,int element){
    
    int low=0 , high=v.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==element){
            return mid;
        }
        else if(v[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;
}

int main(){
   
    int n;scanf("%d",&n);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int element;scanf("%d",&element);
    int idx=binarySearch(v,element);
    if(idx==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n",idx);
        
    }
return 0;
}