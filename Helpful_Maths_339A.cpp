#include <bits/stdc++.h>
int main(){
    std::string a;
    std::cin>>a;
    int x=a.size();
    int n=x;
    if(x!=1){
        x=(x/2)+1;
    
    int b[x];
    int j=0;
    for(int i=0;i<x;i++){
        b[i]=a[j]-'0';
        j=j+2;
    }
    std::sort(b,b+x);
    for(int i=0;i<x;i++){
        std::cout<<b[i];
        if(i!=x-1){
            std::cout<<"+";
        }
    }

    }

    else if(x==1){
        std::cout<<a;
    }
    return 0;
}