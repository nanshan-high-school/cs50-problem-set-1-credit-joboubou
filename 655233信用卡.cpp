#include <iostream>
using namespace std;
long long tool (long long a,int b);
int main() {
    
    long long cardnum;
    long long num [16];
    int i = 1;
    int total = 0;
    do {
        cout << "請輸入你的卡號：";
        cin >> cardnum;
    } while (cardnum <= 0 || cardnum >= 10000000000000000);

    if (cardnum / 10000000000000 >= 34 & cardnum / 10000000000000 <= 37) {
        cout << "American Express\n";
    } else if (cardnum / 100000000000000 >= 51 & cardnum / 100000000000000 <= 55) {
        cout << "MasterCard\n";
    } else if (cardnum / 1000000000000000 == 4 || cardnum / 1000000000000 == 4) {
        cout << "Visa\n";
    } else {
        cout << "不要瞎掰好嗎\n";
    }

    int inum[16];
    
    for (int i = 1;i <= 16;i++) {
        
        inum [i - 1] = cardnum % tool (10,i);
        inum [i - 1] /= tool (10,i - 1);
        if (i % 2 == 0) {
            inum [i - 1] *= 2;
            inum [i - 1] = inum [i - 1] / 10 + inum [i - 1] % 10;
        } else {
            inum [i - 1] *= 1;
        }
    }
    total += inum [i - 1];
    if (total % 10 == 0) {
        cout << "卡號輸入正確喔";
    } else {
        cout << "卡號輸入錯誤 是在哈囉";
    }
}
long long tool (long long a,int b) {
    long long tools = 1;
    for (int i = 0;i < b;i++) {
        tools *= a;
    }
    return tools;
}
/*4003600000000014*/
