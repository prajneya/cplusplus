#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
	int n, count = 0, acount=0;
	cin >> n;
	stack<char> a;
	vector<int> seq, vcount1, vcount2, tempcount, alter;
	tempcount.push_back(0);
	for(int i = 0; i<n; i++){
		int x;
		char y;
		cin >> x;
		if(x==1){
			y = '(';
		}
		if(x==2){
			y = ')';
		}
		if(x==3){
			y = '[';
		}
		if(x==4){
			y = ']';
		}
		a.push(y);
		seq.push_back(x);
		char top;
		while(a.empty()==false && a.top()==']' || a.empty()==false && a.top()==')'){
				top = a.top();
				a.pop();
				a.pop();
				count++;
				if(top==')'){
					vcount1.push_back(count*2);
				}
				if(top = ']'){
					vcount2.push_back(count*2);
				}
		}
		if(a.empty()){
			tempcount.push_back(count*2);
			count = 0;
		}
		
	}
	for(int i=1; i<tempcount.size(); i++){
		for(int j=0; j<tempcount[i]+tempcount[i-1]; j++){
			if(seq[j]==1){
				acount++;
				j++;
				if(seq[j]==3){
					acount++;
					continue;
				}
			}
		}
		alter.push_back(acount);
		acount = 0;
	}
	for(int i=1; i<tempcount.size(); i++){
		for(int j=0; j<tempcount[i]+tempcount[i-1]; j++){
			if(seq[j]==1){
				acount++;
				j++;
				if(seq[j]==3){
					acount++;
					continue;	
				}
			}
		}
		alter.push_back(acount);
		acount = 0;
	}	
	cout << *max_element(alter.begin(), alter.end()) << " " << *max_element(vcount1.begin(), vcount1.end()) << " " << *max_element(vcount2.begin(), vcount2.end());
	
}
