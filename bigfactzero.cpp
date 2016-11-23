#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

unsigned long long factorial(unsigned long long n){
	unsigned long long fact=1;
	for(unsigned long long i=1; i<=n; i++){
		fact = fact*i;
	}
	return fact;
}

int main(){
	ios::sync_with_stdio(false);
	
	unsigned long long t;
	cin >> t;
	while(t--){
		vector<unsigned long long> a;
		unsigned long long n, d, count = 0;
		cin >> n;
	
	unsigned long long c = factorial(n);
	while(c!=0){
		d = c%10;
		a.push_back(d);
		c = c/10;
	}
	reverse(a.begin(), a.end());
	if(a[a.size()-1]==0){
		for(unsigned long long i = a.size()-1; i>=0; i--){
			while(a[i]==0){
				count++;
			}
		}		
	}
	
	cout << count << endl;
	
}

}
