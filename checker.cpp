#include <bits/stdc++.h>
#define up(i,a,b) for (int i = (int)a; i <= (int)b; i++)
#define down(i,a,b) for (int i = (int)a; i >= (int)b; i--)
#define pii pair<int, int>
#define f first
#define s second
#define ep emplace_back
using namespace std;

ifstream finp("input.inp");
ifstream fout("my.out");
ifstream fans("correct.out");

int n;
int a,b;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    #define Task "A"
    if (fopen(Task".inp", "r")){
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }

    finp >> n;
    fout >> a >> b;
    if (a + b != n){
        cout << "Wrong sum\n";
        exit(1);
    }
    cout << "Accepted !\n";
}
