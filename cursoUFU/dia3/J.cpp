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
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

int main(){ _

	while(true){
	
		int n;cin >> n;
		if(!cin)break;

		int i = 0;
		int seg = 0;
		for(;i <= n/2; i++,n--){
			
			if(sqrt(i) == floor(sqrt(i)) && 
			   sqrt(n) == floor(sqrt(n))){
				seg = 1;
				break;   
			}
		}
		cout << seg << endl;
	
	}

	return 0;
}
