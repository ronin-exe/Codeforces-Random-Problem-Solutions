#include <bits/stdc++.h>
int main(){
    int n,x=0;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::string a;
        std::cin>>a;
        for(int j=0;j<3;j++){
            if(a[j]=='+' && a[j+1]=='+'){
                x++;
            }

            else if(a[j]=='-' && a[j+1]=='-'){
                x--;
            }
        }
    }

    std::cout<<x;
    return 0;
}