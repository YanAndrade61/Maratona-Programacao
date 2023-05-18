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

	
	string str; cin >> str;
	string str2(all(str));
	sort(all(str));

	str == str2 ? cout << 1 : cout << 0;
	cout << endl;

	return 0;
}
