#include <bits/stdc++.h>
int main(){
    int alp[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    std::string a;
    std::cin>>a;
    int n=a.size();
    int x;
    for(int i=0;i<n;i++){
        x=(int)a[i]-97;
        std::cout<<x<<'\n';
        if(alp[x]==0){
            alp[x]++;
        }
    }

    int sum;

    for(int i=0;i<26;i++){
        if(alp[i]!=0){
            sum++;
        }
    }
    if(sum%2==0){
        std::cout<<"CHAT WITH HER!" ;
    }
    else{
        std::cout<<"IGNORE HIM!";
    }
    return 0;
}