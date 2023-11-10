#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,A,F,i,j,k,l;
    scanf("%d", &n);
    for (i=0;i<n;++i){
        scanf("%d%d", &A,&F);
        for (j=0;j<F;++j){
            for (k=1;k<=A;++k){
                for (l=0;l<k;++l){printf("%d", k);}
                printf("\n");
            }
            for (k=A-1;k>=0;--k){
                for (l=0;l<k;++l){printf("%d", k);}
                printf("\n");
            }
        }
    }
}
