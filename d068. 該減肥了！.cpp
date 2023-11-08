#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char m;
    scanf("%d %c %d", &a,&m,&b); //這部分要空格，否則輸入將錯誤
    if (m=='+')
        printf("%d\n", a+b);
    else if (m=='-')
        printf("%d\n", a-b);
    else if (m=='*')
        printf("%d\n", a*b);
    else
        printf("%d\n", a/b);
}
