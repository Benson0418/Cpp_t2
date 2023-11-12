#include <bits/stdc++.h>
using namespace std;

struct student{
    int order;
    string id;
    string name;
};

bool cmp(student a,student b){
    if (a.id[8]!=b.id[8])
        return a.id[8]<b.id[8];
    else if (a.id[0]!=b.id[0])
        return a.id[0]<b.id[0];
    else return a.order<b.order;
}

int main(){
    int N;
    string a,b;
    scanf("%d", &N);
    student L[N];
    for (int i=0;i<N;++i){
        cin>>L[i].id>>L[i].name;
        L[i].order=i;
    }

    sort(L,L+N,cmp);
    for (int i=0;i<N;++i){
        cout<<L[i].id[8]<<": "<<L[i].name<<'\n';
    }
    return 0;
}
