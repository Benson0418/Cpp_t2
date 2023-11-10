#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,S,CP,IV,i,res=0,u,v=1,k;
    scanf("%d%d", &n,&S);
    for (i=1;i<=n;++i){
        scanf("%d%d", &CP,&IV);
        if (IV>=40){u=100;}
        else if (IV>=30){u=50;}
        else{u=10;}
        k=CP+u*(S/1000);
        if (k>res){
            res=k;
            v=i;
        }
    }
    printf("%d %d", v,res);
return 0;
}
