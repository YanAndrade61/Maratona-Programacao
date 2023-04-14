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

int dig[] = {1,1,2,6,4,2,2,4,2,8};

int lastDigit(int n){
	
	if(n < 10)
		return dig[n];
	
	if(((n/10)%10)%2 == 0)
		return (6*lastDigit(n/5)*dig[n%10]) % 10 ;
	else
		return (4*lastDigit(n/5)*dig[n%10]) % 10 ;
}

int main(){ _

	int n, k = 1;

	while(cin >> n){
	
		cout << "Instancia " << k++ << endl;
		cout << lastDigit(n) << endl << endl;
	
	}

	return 0;
}
