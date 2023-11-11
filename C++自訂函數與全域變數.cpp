#include <bits/stdc++.h>
using namespace std;

int global_variable;

void hello_world(){printf("Hello, World!\n");}

void hello_cpp(){
    hello_world();
    printf("Hello, C++!\n");
}
void uwu(int x){
    printf("%d\n", x);
    return;
    cout<<"這行代碼不會被執行";
}

//傳入的是數組首項的指標及數組本身的大小
int add2(int x[], int len){
    int res=0;
    for (int i=0;i<len;++i)res+=x[i];
    return res;
}

void g(){
    global_variable=100;
    return;
}

//c++中的遞迴寫法
int f(int n){
    if (n==1||n==0)return 1;
    return f(n-1)+f(n-2);
}

int k(); //函數聲明與定義分開的寫法

int main(){
    hello_world();
    hello_cpp();
    int a;
    scanf("%d", &a);
    uwu(a);

    int t[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(t)/sizeof(t[0]);
    printf("%d\n", add2(t, len));


    //全域變數的使用
    cin>>global_variable;
    cout<<global_variable<<'\n';
    g();
    cout<<global_variable<<'\n';

    int c;
    scanf("%d", &c);
    cout<<f(c);
    k();

}

k(){
printf("hello, c++");
return 0;
}
