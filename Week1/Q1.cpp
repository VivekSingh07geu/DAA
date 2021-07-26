#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n , key , flag = 0 , comparisons = 0;
		cin >> n;
		int a[n];

		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		cin >> key;

		for(int i = 0 ; i < n ; i++){
			comparisons++;
			if(a[i] == key){
				flag = 1;
				break;
			}
		}

		if(flag == 1)
			cout<<"Present "<<comparisons<<endl;
		else
			cout<<"Not Present "<<comparisons<<endl;
	}

	return 0;
}