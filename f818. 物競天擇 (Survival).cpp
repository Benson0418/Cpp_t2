#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,res=2147483647,t=0,temp;
    scanf("%d", &N);
    int H[N],W[N];
    for (int i=0;i<N;++i){scanf("%d", &H[i]);}
    for (int i=0;i<N;++i){scanf("%d", &W[i]);}
    for (int i=0;i<N;++i){
        temp=H[i]*W[i];
        if (temp<res){
            res=temp;
            t=i;
        }
    }
    printf("%d %d\n", H[t],W[t]);
    return 0;
}
