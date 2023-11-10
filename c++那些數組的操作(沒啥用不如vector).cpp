#include <bits/stdc++.h>
using namespace std;

int main(){
    int L[]={1,2,3,4,5}; //聲明方法L[數組長度(選填)]={數組內容(選填)}
    cout<<"數組長度:"<<sizeof(L)/sizeof(L[0])<<'\n'; //數組長度
    L[2]=10;
    for (int i=0;i<5;++i){printf("%d ", L[i]);}
    cout<<'\n'<<L[2]<<'\n';

    return 0;
}
