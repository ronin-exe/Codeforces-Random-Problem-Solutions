#include <bits/stdc++.h>

int main(){
    int n,t=0;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            t++;
        }
    }
    std::cout<<t;
    return 0;
}