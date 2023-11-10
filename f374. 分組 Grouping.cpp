#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,P,res=0,team=0,xu,t,temp,j=1;
    double u;
    scanf("%d%d", &N,&P);
    u=pow(10,N);
    xu=int(u);
    while (P!=0){
        t=P%xu;
        temp=0;
        while (t!=0){
            temp+=t%10;
            t/=10;
        }
        if (temp>=res){
            res=temp;
            team=j;
        }
        j+=1;
        P=P/xu;
    }
    printf("%d %d", team,res);
}
