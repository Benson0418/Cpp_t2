#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    vector<int> L(1000);
    while (scanf("%d", &c)!=EOF){
        ++L[c];
    }
    for (int i=0;i<1000;++i){
        while (L[i]>0){
            printf("%d ", i);
            --L[i];
        }
    }
    return 0;
}
