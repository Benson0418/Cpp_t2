#include <bits/stdc++.h>
using namespace std;

//排序參數，如果返回true就是a在前b在後，反之則為b在前a在後
bool cmp(pair<int, int> a,pair<int, int> b){
/*
先對pair總和進行排列，再對第一項、第二項排列
 */
    if (a.first+a.second!=b.first+b.second)
        return a.first+a.second<b.first+b.second;
    if (a.first!=b.first)
        return a.first<b.first;
    return a.second<b.second;
}


int main(){
    vector<pair<int, int> > L(5);
    for (int i=0;i<5;++i){
        cin>>L[i].first>>L[i].second;
    }
    printf("\n\n");
    for (int i=0;i<5;++i){
        cout<<L[i].first<<' '<<L[i].second<<'\n';
    }
    printf("\n\n");
    sort(L.begin(),L.end(),cmp); //cmp為自訂排序函數
    for (int i=0;i<5;++i){
        cout<<L[i].first<<' '<<L[i].second<<'\n';
    }





    return 0;

}
