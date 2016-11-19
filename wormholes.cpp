#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long n, x, y;
	cin >> n >> x >> y;
	vector<long long> start, end, v, w;
	for(long long i=0; i<n; i++){
		long long a, b;
		cin >> a >> b;
		start.push_back(a);
		end.push_back(b);
	}
	for(long long i=0; i<x; i++){
		long long a;
		cin >> a;
		v.push_back(a);
	}
	for(long long i=0; i<y; i++){
		long long b;
		cin >> b;
		w.push_back(b);
	}
	
	sort(v.begin(), v.end());
	sort(w.begin(), w.end());
	
	long long temp_diff=200000000;
	long long tempi, tempj, tempk;
	vector<long long> answers;
	for(long long i=0; i<n; i++){
		for(long long j=0; j<x; j++){
			if(v[j]<=start[i]){
				if(temp_diff>=start[i]-v[j]){
					temp_diff = start[i]-v[j];
					tempi = i;
					tempj = j;
				}
				
			}
		}
		temp_diff=200000000;
		for(int k=0; k<y; k++){
			if(w[k]>=end[tempi]){
				if(temp_diff>=w[k]-end[tempi]){
					temp_diff=w[k]-end[tempi];
					tempk = k;
				}
			}
		}
		answers.push_back((w[tempk]-v[tempj])+1);
		temp_diff=200000000;
	}
	
	cout << *min_element(answers.begin(), answers.end());
}
