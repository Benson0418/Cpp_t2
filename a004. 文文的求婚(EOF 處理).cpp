#include <bits/stdc++.h>
using namespace std;
int main(){
    int y;
    while (scanf("%d", &y) != EOF){
        printf("%s\n", (y%4==0 && y%100!=0 || y%400==0)?"閏年":"平年");

    }
}
