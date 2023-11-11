#include <bits/stdc++.h>

using namespace std;
int main(){
//     ctrl+shift+c/x 註釋或取消註釋
/*
F9 build and run
F10 run
*/
    string n,m;
    cin >> n>>m;
    cout<< n.size() << '\n'<< n.length()<<'\n'; //計算字串長度
    cout<< n+m<<'\n';//合併字符串
    cout<<n.find(m)<<'\n'<< n. find_first_of(m);//查詢m是否在n內，並返回首字元下標，若不在則返回std::string::npos(4294967295)
    string q="asdf qwerqwer asdfgh";
    string r="qwer";
    q.replace(q.find(r),r.size(),"neww");// replace 解釋，對於字符串q，後面跟這三個參數(要替換的起始下標,替換長度,替換字串)
    cout<<'\n'<<q<<'\n';
    string t="4hello, world";
    t=t.substr(2, 5); // 字符串切片，從2開始，長度為5
    cout<< q<<'\n'<<r<<'\n'<<t;
    bool g=isupper('A'); //判斷字元是否為大寫，用於字符串需要搭配for循環
    cout<<"he22llo \n"<<g;
    cout << setfill('*') << setw(10) << "Hello" << endl;//用*補滿前綴
    double p = 22.0/7.0;
    cout<<"p="<<setprecision(4)<<p<<endl; //四捨五入至第4位
    cout  <<  fixed <<  setprecision(n) << endl; //小數點後的n位，沒有四捨五入
    return 0;

}
