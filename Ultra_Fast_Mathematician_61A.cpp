#include <bits/stdc++.h>
int main(){

    int n,x1,x2,t1,t2;
    std::vector<int> a;

    std::cin>>x1>>x2;
    if(x1==0 && x2==0){
        std::cout<<x1;
    }

    else{

                for(;x1!=0 && x2!=0;){
                    t1=x1%10;
                    t2=x2%10;
                    x1=x1/10;
                    x2=x2/10;

                    if(t1==t2){
                        a.push_back(0);
                    }

                    
                    else{ a.push_back(1); }
                }

                int s=a.size();

                for(int i =s-1;i>=0;i--){
                    std::cout<<a[i];
                }

   }

   return 0;
}