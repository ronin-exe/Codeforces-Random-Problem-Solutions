#include <bits/stdc++.h>

int main(){
    int n,t=1,sum=0;
    std::cin>>n;

    for(int i=-1;i>=n*-1;i--){
        if(t==1){
            sum+=i;
            t--;
        }

        else if(t==0){
            sum-=i;
            t++;
        }
    }

    std::cout<<sum;
    return 0;
}