#include <bits/stdc++.h>

int main(){
    int n,h,a,t=0;
    std::cin>>n>>h;

    for(int i=0;i<n;i++){
        std::cin>>a;
        if(a>h){
            t+=2;
        }
        else{
            t++;
        }
    }

    std::cout<<t;
    return 0;
}