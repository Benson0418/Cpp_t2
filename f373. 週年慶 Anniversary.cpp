#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,a,b;
    scanf("%d", &N);
    a=N-200*(N/2000);
    b=N-100*(N/1000);
    if(a<=b){printf("%d %d", a,0);}
    else{printf("%d %d", b,1);}
    return 0;
}
