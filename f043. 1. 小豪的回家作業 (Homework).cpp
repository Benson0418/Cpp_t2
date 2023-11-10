#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,a,b;
    scanf("%d%d", &s,&b);
    if (s==b){
        a=3;
        b-=3;
    }
    else{a=s-b;}
    if (a>b)
        a^=b^=a^=b;
    printf("%d+%d=%d", a,b,s);
    return 0;
}
