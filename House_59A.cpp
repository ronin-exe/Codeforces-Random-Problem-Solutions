#include <bits/stdc++.h>

int main(){
    std::string s;
    std::cin>>s;
    int n=s.size();
    int sm=0,cap=0;

    for(int i=0;i<n;i++){
        if((int)s[i]>96){
            sm++;
        }

        else{
            cap++;
        }
    }

    if(cap>sm){
        for(int i=0;i<n;i++){
            std::cout<<(char)toupper(s[i]);
        }
    }

    if(cap<=sm){
        for(int i=0;i<n;i++){
            std::cout<<(char)tolower(s[i]);
        }
    }

    return 0;
}