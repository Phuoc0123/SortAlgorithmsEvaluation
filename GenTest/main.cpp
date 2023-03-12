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
    float res = val * 1.0 + rdReal();
    return res;
}

string NAME;
float x[1000010];

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
    for (int itest = 1; itest <= 10; itest++) {
        NAME = "test" + ConvertIntToString(itest) + ".inp";
        ofstream inp(NAME);
        n = 1000000;
        inp << n << "\n";
        for (int i = 1; i <= n; i++)
            x[i] = rdFloat(-1000000, 1000000);
        if (itest == 1) sort(x + 1, x + 1 + n);
        if (itest == 2) sort(x + 1, x + 1 + n, greater<float>());
        for (int i = 1; i <= n; i++)
            inp << setprecision(12) << x[i] << " ";
        inp.close();
    }
}
