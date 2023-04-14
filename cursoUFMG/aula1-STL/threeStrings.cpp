#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int t; cin >> t;

	while(t--){
		
		string a; cin >> a;
		string b; cin >> b;
		string c; cin >> c;
		int deu = 1;
		
		for(int i = 0; i < (int)a.length();i++)
			if(c[i] != a[i] && c[i] != b[i]){deu=0;break;}
		
		cout << (deu ? "YES" : "NO") << endl;

	}

	return 0;
}
