#include <bits/stdc++.h>

int main(){

    int n,a;
    std::cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        std::cin>>a;
        arr[a-1]=i+1;
    }

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}