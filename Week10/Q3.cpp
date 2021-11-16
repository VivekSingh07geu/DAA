#include<bits/stdc++.h>
using namespace std;

void find(int arr[], int n) {
    int maxcount = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxcount) {
            maxcount = count;
            index = i;
        }
    }
    if (maxcount > n / 2)
        cout << "yes\n";
    else
        cout << "no\n";
}
double Median(int a[], int n) {
    sort(a, a + n);
    if (n % 2 != 0)
        return (double)a[n / 2];
    return (double)(a[n - 1 / 2] + a[n / 2]) / 2.0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    find(arr, n);
    cout << Median(arr, n) << endl;
    return 0;
}