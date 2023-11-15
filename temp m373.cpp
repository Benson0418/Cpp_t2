#include <bits/stdc++.h>
using namespace std;


int main() {
int n,k;
scanf("%d %d",&n,&k);
int L[n];
for (int i=0;i<n;++i)scanf("%d", &L[i]);
int T[k+1][n];
T[0][0]=max(0,L[0]);
int res=T[0][0];

//for (int i=1;i<n;++i){
//    T[0][i]=max(T[0][i-1]+L[i],0);
//    res=max(res,T[0][i]);
//}
//for (int i=0;i<n;++i)printf("%d ", T[0][i]);
//printf("\n%d", res);

for (int i=1;i<=k;++i){
    for (int j=0;j<n;++j){
        int T




    }

