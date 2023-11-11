#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1={1,8,3,4,5,6}; //初始化向量 C++11標準
    for (int i=0;i<v1.size();++i)printf("%d ", v1[i]);
    printf("\n\n");

    vector<vector<int> > v2(3, vector<int>(2, 6));
    //聲明二為矩陣，在vector<vector<int> >，兩個大於號之間需要空格，否則會被判為右移而錯
    vector<int> v3(9, 5);

    // 打印整數向量 v3 中的元素
    for (int i=0;i<v1.size();++i)
        printf("%d ", v3[i]);
    printf("\n\n");

    // 調整 v2 的大小並打印元素，多的元素部分刪去，不足的部分後面補上vector<int>(5,42)，沒有寫的就是默認補0，補的類型必須符合當初定義的資料型別
    v2.resize(7,vector<int>(5,42));
    for (int i = 0; i < v2.size(); ++i) {
        for (int j = 0; j < v2[i].size(); ++j)
            printf("%d ", v2[i][j]);
            printf("\n");
    }
    printf("\n");
    auto i=15;
    printf("%d", i);
    /*
    v2長這樣
    6 6
    6 6
    6 6
    42 42 42 42 42
    42 42 42 42 42
    42 42 42 42 42
    42 42 42 42 42
    */

    //矩陣與向量的混合應用
    vector<int> v[5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 1; j <= 3; ++j) {
            v[i].push_back(i * 10 + j);
        }
    }
    v[0].push_back(42);
    for (int i = 0; i < 5; ++i) {
        cout << "v[" << i << "]: ";
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        printf("\n");
    }



    return 0;
}
