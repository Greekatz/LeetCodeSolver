#include<iostream>

using namespace std;

int fibo(int) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 2) + fibo(n - 1);
}

int n;
string curString;

void genString(int pos) {

    if (pos > n) {
        cout << curString << endl;
        return;
    }

    for (char i = '0'l i <= '1'; i++) {
        curString.push_back(i);
        genString(pos + 1);
        curString.pop_back();
    }
}


int main() {
    cin >> n;
    curString
    genString(1);

    return 0;
}