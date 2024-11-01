#include <bits/stdc++.h>

int main(){
    int n,a,t=1,st;
    std::cin>>n;
    std::cin>>a;
    st=a;
    for(int i=1;i<n;i++){
        std::cin>>a;
        if(a!=st){
            t++;
            st=a;
        }
    }
    std::cout<<t;
    return 0;
}