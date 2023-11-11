#include <bits/stdc++.h>
using namespace std;
// 給定一個數字(字尾有空格)和字串，請輸出字串中前n各字符
int main(){
    int n;
    char c;
    string L;
    /*錯誤寫法，cin讀取完會剩餘一個換行符，而getline就只會接收換行符了
    scanf("%d", &n);
    getline(cin, L);
    */
    scanf("%d", &n);
    c=cin.get(); //偵測下個字元，返回值為該字符
    cin.ignore(); //跳過直到enter(包含enter)之前的字元
    getline(cin, L);

    cout<<"輸出結果:"<<c<<L.substr(0,n)<<'\n'; //c為換行符，string.substr(idx,step) 取從idx開始算step個字符
    return 0;
