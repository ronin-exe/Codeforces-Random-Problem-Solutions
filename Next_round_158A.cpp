#include <bits/stdc++.h>
int main(){
    int n,k,sum=0;
    std::cin>>n>>k;
    int a[n];
    k--;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=a[k] && a[i]>0){
            sum++;
        }
        else{
            break;
        }
    }

    std::cout<<sum;
    return 0;
}