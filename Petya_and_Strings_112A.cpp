#include <bits/stdc++.h>
int main(){
    std::string a,b;
    std::cin>>a>>b;

    int x,y;
    x=a.size();
    y=b.size();
    for(int i=0;i<x;i++){
        a[i]=(char)tolower(a[i]);
    }

    for(int i=0;i<y;i++){
        b[i]=(char)tolower(b[i]);
    }
    if(a<b){
        std::cout<<-1;
    }
    else if(a>b){
        std::cout<<1;
    }
    else if(a==b){
        std::cout<<0;
    }
}