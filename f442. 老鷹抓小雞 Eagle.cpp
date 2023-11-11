#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int C[N];
    for (int i=0;i<N;++i){scanf("%d", &C[i]);}
    int E,Q;
    scanf("%d %d", &E,&Q);
    int L[Q];
    for (int i=0;i<Q;++i){scanf("%d", &L[i]);}
    for (int i=0;i<Q;++i){
        for (int j=0;j<N;++j){
            if (L[i]==C[j]){
                C[j]=E;
                E=L[i];
                break;
            }
        }
    }
    for (int i=0;i<N;++i){printf("%d ", C[i]);}

    return 0;
}
