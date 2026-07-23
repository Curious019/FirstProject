#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&v){ 
    int n=v.size();
    bool swapped=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){ // Data sorted already. so no swap needed.
            break;
        }
    }       
}



int main(){ 
    
    int n;scanf("%d",&n);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }       
    bubbleSort(v);
    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
return 0;   
}

//