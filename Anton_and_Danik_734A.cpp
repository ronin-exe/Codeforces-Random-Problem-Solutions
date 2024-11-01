#include <bits/stdc++.h>

int main(){
    std::string s;
    int n,a=0,d=0;
    std::cin>>n;
    std::cin>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='D'){
            d++;
        }
    }

    if(a>d){
        std::cout<<"Anton";
    }

    else if(a<d){
        std::cout<<"Danik";
    }

    else if(a==d){
        std::cout<<"Friendship";
    }

    return 0;
}