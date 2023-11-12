#include <bits/stdc++.h>
using namespace std;

int main (){
    int N,B,res=0,M;
    scanf("%d", &N);
    int R[N];
    for (int i=0;i<N;++i)scanf("%d", &R[i]);
    B=R[N-1];
    for (int i=1;i<=N;++i){
        if (i%B==1){
            res+=R[i-1];
        }
    }
    M=res%N;
    if (M!=0){
        printf("%d %d", M,R[M-1]);
    }
    else{
        printf("%d %d", N,R[N-1]);
    }




    return 0;
}
