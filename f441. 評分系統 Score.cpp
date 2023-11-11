#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,S,res=0;
    scanf("%d%d", &N,&S);
    int A[N];
    for (int i=0;i<N;++i){scanf("%d", &A[i]);}
    int M;
    scanf("%d", &M);
    int X[M][N];
    for (int i=0;i<M;++i){for (int j=0;j<N;++j){scanf("%d", &X[i][j]);}}
    for (int i=0;i<M;++i){
        for (int j=0;j<N;++j){
            if (X[i][j]==A[j]){res+=S;}
        }
        printf("%d\n", res);
        res=0;
    }
    return 0;
}
