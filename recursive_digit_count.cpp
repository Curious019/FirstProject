//Recursive digit count of an integer number n

#include<bits/stdc++.h>
using namespace std;


int Count(int n,int cnt=0){
    if(n==0){
        return cnt;
    }
    cnt++;
    return Count(n/10,cnt);             
}

int main(){
    int n;
    scanf("%d",&n);

    int cnt=0;
    int res=Count(n);
    printf("%d\n",res);
    return 0;

}