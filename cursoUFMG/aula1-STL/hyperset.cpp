#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second
#define ii pair<int,int>

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n,m; cin >> n >> m;
	int cont=0;
	vector<string> vec(n);
	set<string> st;
	for(int i=0; i<n; i++){
		cin >> vec[i];
		st.insert(vec[i]);
	}
	
	for(int i =0;i<n;i++){
		for(int j=i+1;j<n;j++){
			string str = "";
			for(int k=0; k<m; k++){
				int sc = 'S'+'E'+'T';
				if(vec[i][k] == vec[j][k]){
					str+=vec[i][k];
				}
				else{
					sc -= (vec[i][k]+vec[j][k]);
					str += (char)sc;
				}
			}
			if(st.count(str))cont++;
		}
	}
	cout << cont/3 << endl;

	return 0;
}
