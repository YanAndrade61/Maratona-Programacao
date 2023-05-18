#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ll long long

#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;

int main(){ _

	cout << fixed << setprecision(1);
	float mini = 1010, maxi = -1010;
	float n;
	while(cin >> n){
		if(n > maxi)maxi = n;
		if(n < mini)mini = n;
	}
	cout << mini << " " << maxi << endl;

	return 0;
}
