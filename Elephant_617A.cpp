#include <bits/stdc++.h>

int main(){
    int n,t=0;
    std::cin>>n;
    if(n>=5){
        t+=(n/5);
        n=n%5;
    }

    if(n>=4){
        t+=(n/4);
        n=n%4;
    }

    if(n>=3){
        t+=(n/3);
        n=n%3;
    }

    if(n>=2){
        t+=(n/2);
        n=n%2;
    }

    if(n>=1){
        t+=(n/1);
        n=n%1;
    }

    std::cout<<t;
    return 0;

}