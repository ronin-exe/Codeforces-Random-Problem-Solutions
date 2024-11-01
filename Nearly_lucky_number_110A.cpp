#include <bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;
    int d=0;

    for(;n>0;){
        if(n%10==4 || n%10==7){
           d++;
        }
        n=n/10;
    }

    if(d==4 || d==7){
        std::cout<<"YES";
    }

    else{
        std::cout<<"NO";
    }
    return 0;
}