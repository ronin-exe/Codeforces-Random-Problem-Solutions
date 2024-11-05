#include <bits/stdc++.h>

int main(){
    std::string a,b;
    std::cin>>a;
    std::cin>>b;

    int n=a.size();
    int t=0;

    for(int i=0,j=n-1;i<n;i++,j--){
        if(a[i]!=b[j]){
            std::cout<<"NO";
            t++;
            break;
        }
    }

    if(t==0){
        std::cout<<"YES";
    }
    return 0;
}