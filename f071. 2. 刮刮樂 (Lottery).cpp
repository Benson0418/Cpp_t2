#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,res=0;
    bool flag=false;
    scanf("%d%d%d", &a,&b,&c);
    int A[5],B[5];
    for (int i=0;i<5;++i){scanf("%d", &A[i]);}
    for (int i=0;i<5;++i){scanf("%d", &B[i]);}
    for (int i=0;i<5;++i){
        if (A[i]==a){res+=B[i];}
        if (A[i]==b){res+=B[i];}
        if (A[i]==c){
            flag=true;
            res-=B[i];
        }
    }
    if (!flag){res*=2;}
    if (res<0){res=0;}
    printf("%d", res);

    return 0;
}
