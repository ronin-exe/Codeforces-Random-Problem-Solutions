#include <bits/stdc++.h>

int main(){

    double n;
    std::cin>>n;
    double num=100/n;
    double total,temp,a;

    for(int i=0;i<n;i++){
        std::cin>>a;
        temp=(double)(num*a)/100;
        total+=temp;
    }

    std::cout<<total;
    return 0;

}