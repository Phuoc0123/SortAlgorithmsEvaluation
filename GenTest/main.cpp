#include <bits/stdc++.h>
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

int rdInt(int l, int r) {
    return l + rd() % (r - l + 1);
}

float rdReal() {
    return rdInt(0, RAND_MAX * RAND_MAX) * 1.0 / (RAND_MAX * RAND_MAX + 1);
}

float rdFloat(int l, int r) {
    if (l == r) return l;
    int val = rdInt(l, r - 1);
    //return rdInt(l, r - 1) * 1.0 + rdReal();
    float res = val * 1.0 + rdReal();
    return res;
}

string NAME;

string ConvertIntToString(int num) {
    string ans = "";
    while (num) {
        ans += (char) (num % 10 + '0');
        num /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    srand(time(NULL));
    int n;
    float val;
    for (int i = 3; i <= 10; i++) {
        NAME = "test" + ConvertIntToString(i) + ".inp";
        ofstream inp(NAME);
        n = rdInt(1000000, 1000000);
        inp << n << "\n";
        val = 1000000;
        for (int i = 1; i <= n; i++) {
            val = rdFloat(-1000000, 1000000);
            inp << setprecision(12) << val << " ";
        }
        inp.close();
    }
}
