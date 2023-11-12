#include <bits/stdc++.h>
using namespace std;

int main (){
    int N,c;
    scanf("%d", &N);
    int S[100]={};
    for (int i=0;i<N;++i){
        scanf("%d", &c);
        c%=1000;
        c/=10;
        ++S[c];
    }
    for (int i=0;i<100;++i){
        if (S[i]>0){
            printf("%d %d", i,S[i]);
            printf("\n");
        };
    }

    return 0;
}

