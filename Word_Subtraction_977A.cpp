#include <bits/stdc++.h>

int main(){
    int a,n,t;
    std::cin>>a>>n;
    
    for (int i = 0; i < n; i++)
    {
        t=a%10;
        if(t!=0){
            a--;
        }

        else{
            a/=10;
        }
    }

    std::cout<<a;
    return 0;
    
}