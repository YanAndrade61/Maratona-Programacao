#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ll long long
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,a,b) for(int i = a; i < b; i++)

const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

ll fatorial(int n){

    ll fat = 1;
    forn(i,2,n+1){
        fat *= i;
    }
    return fat;
}

ll fatorial2(int n, int p){

    ll fat = 1;
    forn(i,p,n+1){
        fat *= i;
    }
    return fat;
}


int main(){

    int n,p;
    while(cin >> n >> p){
        ll fatn, fatp, fatnp;
        int maxi;
        if(p > n-p){
            fatn = fatorial2(n, p+1);
            fatp = fatorial(n-p);
        }
        else{
            fatn = fatorial2(n, n-p+1);
            fatp = fatorial(p);
        }
        //cout << fatn << " " << fatp <<" a\n";
        cout << fatn/fatp << endl;
    }

    return 0;
}
