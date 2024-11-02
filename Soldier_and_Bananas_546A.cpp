#include <bits/stdc++.h>

int main(){
    int price,money,banan;
    std::cin>>price>>money>>banan;
    int total=0;

    for(int i=1;i<=banan;i++){
        total+=(i*price);
    }

    if(total<=money){
        std::cout<<0;
    }
    else{
        std::cout<<total-money;
    }
    return 0;
}