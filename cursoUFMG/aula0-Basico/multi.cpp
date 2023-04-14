#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,n) for(int i = 0; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n;cin >> n;
	while(n--){
		
		int a,b; cin >> a >> b;
		int r,w,sp;
		if(a%10 == 0){
			cout << a << " x " << b+(10 - (b%10)) << " - " << a << " x " << 10-(b%10) << endl; 
		}	
		else{
			cout << b << " x " << a+(10-(a%10)) << " - " << b << " x " << 10-(a%10) << endl; 
		}
	}

	return 0;
}
