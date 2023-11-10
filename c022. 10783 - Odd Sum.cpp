#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,a,b,n,i;
    scanf("%d", &N);
    for (i=1;i<=N;++i){
        scanf("%d%d", &a,&b);
        if (~a&1)
            ++a;
        n=(b-a)/2+1;
        printf("Case %d: %d\n", i,n*(a+n-1));
    }
    return 0;
}
