#include <bits/stdc++.h>

int main(){
    int n,t;
    std::cin>>n>>t;
    std::string s;
    std::cin>>s;

    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }

    std::cout<<s;
}