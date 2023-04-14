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

	cout << fixed << setprecision(2);
	float a,b,c; cin >> a >> b >> c;
	float x1,x2;
	float delta;
	if(a == 0){
		x1 = x2 = -c/b;
	}
	else{
		delta = pow(b,2) - 4*a*c;
		if(delta < 0){
			cout << "Nulo" << endl;
			return 0;
		}
		else{
			x1 = (-b + sqrt(delta))/(2.0*a);
			x2 = (-b - sqrt(delta))/(2.0*a);
		}	
	}
	if (x1 > x2)
		cout << x1 << " " << x2 << endl;
	else
		cout << x1 << " " << x2 << endl;


	return 0;
}
