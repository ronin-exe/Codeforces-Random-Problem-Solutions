#include <bits/stdc++.h>

int main(){
    int n,a;
    std::cin>>n;
    std::string s="Easy";

    for(int i=0;i<n;i++){
        std::cin>>a;
        if(a==1){
            s="Hard";
        }
    }

    std::cout<<s;
    return 0;
}