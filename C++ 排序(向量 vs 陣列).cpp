#include <bits/stdc++.h>
using namespace std;

int main() {
    //向量排序
    std::vector<int> myVector={1,4,2,7,10,8,7,7,1,9,1,1,10};
    for (int i=0;i<myVector.size();++i)printf("%d ", myVector[i]);
    printf("\n\n");
    sort(myVector.begin(),myVector.end()); // sort(myVector.begin(), myVector.end(), customCompare);
    for (int i=0;i<myVector.size();++i)printf("%d ", myVector[i]);
    printf("\n\n");
    sort(myVector.rbegin(),myVector.rend());
    for (int i=0;i<myVector.size();++i)printf("%d ", myVector[i]); //倒序排列的方法
    printf("\n\n");
    //陣列排序
    int myArray[]={1,4,2,7,10,8,7,7,1,9,1,1,10};
    int len_myArray=sizeof(myArray)/sizeof(myArray[0]);
    sort(myArray,myArray+len_myArray);
    for (int i=0;i<len_myArray;++i)printf("%d ", myArray[i]);


    return 0;
}
