#include <bits/stdc++.h>


int main(){
    int a,b,i;
    std::cin>>a>>b;

    for(i=0;a<=b;++i){
        a*=3;
        b*=2;
    }

    std::cout<<i;
}