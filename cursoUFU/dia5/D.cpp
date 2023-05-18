#include <bits/stdc++.h>
using namespace std;

#define num int
#define FOR(i,m,n) for(int i = 0; i < n; i++)

vector<num> fb(101,INT_MIN);

num fbnc(num n){
    if(fb[n] != INT_MIN) return fb[n];
    fb[n] = fb[n-1] + fb[n-2];
    return fb[n];
}

int main() {
    int level;
    int count = 1;
    cin >> level;

    fb[0] = 0;
    fb[1] = 1;

    FOR(i,1,level){
        FOR(j,1,i+1){
            printf("%d%c", fbnc(count), j == i ? '*' : ' ');
            count++;
        }
        printf("\n");
    }

    return 0;
}
