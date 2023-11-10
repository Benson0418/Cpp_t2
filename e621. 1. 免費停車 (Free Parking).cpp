#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,A,B,C,flag,i,j;
    scanf("%d", &N);
    for (i=0;i<N;++i){
        scanf("%d%d%d", &A,&B,&C);
        flag=true;
        for (j=A+1;j<B;++j){
            if (j%C!=0){
                printf("%d ", j);
                flag=false;
            }
        }
        if (flag){printf("No free parking spaces.");}
        printf("\n");
    }
}
