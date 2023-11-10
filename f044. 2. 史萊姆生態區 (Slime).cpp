#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,T,c=0;
    scanf("%d%d", &N,&T);
    T/=N;
    N=1;
    T+=1;
    while (T!=1){
        c+=1;
        T/=2;
    }
    printf("%d", c);
    return 0;
}
