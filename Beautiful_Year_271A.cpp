#include <bits/stdc++.h>

int main(){
    int y;
    std::cin>>y;
    y++;
    int a[4];
    for(int i=0;i<4;i++){
        a[i]=y%10;
        y=y/10;
    }

    for(;;){
        if(a[0]!=a[1] && a[0]!=a[2]  && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3]){
            break;
        }

        else{
            if(a[0]==a[1]){
                a[0]++;
                if(a[0]==0){
                    a[1]++;
                        if(a[1]==0){
                        a[2]++;
                         if(a[2]==0){
                         a[3]++;
                }
                }
                }
            }

            if(a[0]==a[2]){
                a[0]++;
                if(a[0]==0){
                    a[1]++;
                        if(a[1]==0){
                        a[2]++;
                         if(a[2]==0){
                         a[3]++;
                }
                }
                }
            }

            if(a[0]==a[3]){
                a[0]++;
                if(a[0]==0){
                    a[1]++;
                        if(a[1]==0){
                        a[2]++;
                         if(a[2]==0){
                         a[3]++;
                }
                }
                }
            }

            if(a[1]==a[2]){
                a[1]++;
                if(a[1]==0){
                    a[2]++;
                        if(a[2]==0){
                        a[3]++;
                }
                }
            }

            if(a[1]==a[3]){
                a[1]++;
                if(a[1]==0){
                    a[2]++;
                        if(a[2]==0){
                        a[3]++;
                }
                }
            }

           if(a[2]==a[3]){
                a[2]++;
                if(a[2]==0){
                    a[3]++;
                }
            }
        }
    }

    for(int i=3;i<=0;i++){
        std::cout<<a[i];
    }
    return 0;
}