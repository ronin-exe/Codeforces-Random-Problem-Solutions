#include <bits/stdc++.h>
int main(){
    int a[5][5];
    int x,y,sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cin>>a[i][j];
            if(a[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

    if(x>2){
        sum=sum+(x-2);
    }

    else if(x<2){
        sum=sum+(2-x);
    }

    if(y>2){
        sum=sum+(y-2);
    }
    else if(y<2){
        sum=sum+(2-y);
    }

    std::cout<<sum;
}