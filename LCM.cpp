#include<algorithm> 
#include<iostream>  
#include<iomanip>   
#include<numeric>   
#include<string>   
#include<vector>   
#include<deque>   
#include<cmath>   
#include<array>   
#include<queue>   
#include<set>   
#include<map>   

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
	ll ma = max(a, b), mi = min(a, b);
	if (mi == 0) {
		return ma;
	}
	return gcd(mi, ma % mi);
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

int main(){
	ll a, b;
	cin >> a >> b;
	cout << lcm(a, b);
}
