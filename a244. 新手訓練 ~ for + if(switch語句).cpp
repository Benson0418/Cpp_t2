#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,a;
    long long b,c;
    scanf("%d", &N);
    for (int i=0;i<N;i++){
        scanf("%d%lld%lld", &a,&b,&c); //注意型別聲明與輸出 必須一致
        switch (a){
        case 1:
            printf("%lld\n", b+c);
            break;
        case 2:
            printf("%lld\n", b-c);
            break;
        case 3:
            printf("%lld\n", b*c);
            break;
        case 4:
            printf("%lld\n", b/c);
            break;
        }
    }
    return 0;
}
