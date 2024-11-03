#include <bits/stdc++.h>

int main(){
int s=0,n,c;
std::cin>>n;
int a[3];
for(int i=0;i<n;i++){
    c=0;
    for(int i=0;i<3;i++){
        std::cin>>a[i];
        if(a[i]==1){
            c++;
        }
    }
    if(c>=2){
        s++;
    }

}

std::cout<<s;
}