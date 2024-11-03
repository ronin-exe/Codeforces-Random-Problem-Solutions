#include <bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;
    int a,b,max=0,pass=0;

    for(int i=0;i<n;i++){
        std::cin>>a>>b;
        pass=pass-a+b;

        if(pass>max){
            max=pass;
        }
    }

    std::cout<<max;
    return 0;
}