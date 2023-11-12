#include <bits/stdc++.h>
using namespace std;

int main (){
    int N,a,b,res=0;
    scanf("%d", &N);
    vector<int> L={};
    for (int i=0;i<N;++i){
        scanf("%d %d", &a,&b);
        if (b>100){
            res+=(b-100)*5;
            L.push_back(a);
        }
    }
    sort(L.begin(),L.end());
    for (int i=0;i<L.size();++i)printf("%d ", L[i]);
    printf("\n%d", res);

    return 0;
}

