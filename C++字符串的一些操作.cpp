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
    t=t.substr(2, 5);
    cout<< q<<'\n'<<r<<'\n'<<t;
    return 0;

}
