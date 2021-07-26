#include<bits/stdc++.h>
using namespace std;

int main() {

	int n , key , comparisons = 0 , flag = 0;
	cin >> n >> key;
	
	int a[n];

	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	for(int i = 0 ; i < n ; i++) {
		comparisons++;
		if(a[i] == key){
			flag = 1;
			break;
		}
	}

	if(flag == 1) {
		cout<<"Given key is present"<<endl;
		cout<<"Total comparisons : "<<comparisons<<endl;
	}
	else {
		cout<<"Given key is not present"<<endl;
		cout<<"Total comparisons : "<<comparisons<<endl;	
	}

	return 0;

}