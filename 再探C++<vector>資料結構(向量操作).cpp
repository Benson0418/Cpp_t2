#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> L={1,4,2,8,5,7}; //初始化向量
    L.push_back(3); //添加元素至向量L
    for (int i=0;i<L.size();++i)printf("%d ", L[i]); // L.size()取得向量L之大小
    printf("\n\n");
    L.resize(11,7); //L.resize(a,b) 對向量調整大小成a，如果小於就刪除多於元素，大於就以b填充，其中b默認為0
    for (int i=0;i<L.size();++i)printf("%d ", L[i]);
    printf("\n\n");
    L.resize(3);
    for (int i=0;i<L.size();++i)printf("%d ", L[i]);
    printf("\n\n");
    L.pop_back(); //刪除末端元素
    for (int i=0;i<L.size();++i)printf("%d ", L[i]);
    printf("\n\n");
    L.clear();
    printf("%d ", L.size());
    printf("\n\n");
    cout<<"陣列是否為空:"<<(L.empty()?"true":"false")<<endl;
    return 0;
}
