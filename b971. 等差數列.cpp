#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,n,d;
    scanf("%d%d%d", &a,&n,&d);
    if (d>0){
        while (a<=n){
        printf("%d ", a);
        a=a+d;
        }
    }
    else{
        while (a>=n){
        printf("%d ", a);
        a=a+d;
        }
    }
    return 0;
}

