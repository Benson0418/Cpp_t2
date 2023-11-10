#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,M,S,T,s;
    scanf("%d%d%d%d", &H,&M,&S,&T);
    s=H*3600+M*60+S;
    s=(s+5400*T+129600)%129600;
    H=s/3600;
    s%=3600;
    M=s/60;
    S=s%=60;
    printf("%d:%02d:%02d", H,M,S);
    return 0;
}
