#include <bits/stdc++.h>

int main(){
    int n,p,q,s=0;
    std::cin>>n;

    for(int i=0;i<n;i++){
        std::cin>>p>>q;

        if(q-p>=2){
            s++;
        }
    }

    std::cout<<s;
    return 0;
}