#include <iostream>
using namespace std;

long long silnia (int n) {
	if (n <= 1) return 1;
	return n * silnia (n-1);
}

int main(){
int x;
cin >> x;
cout << silnia(x) << endl;
return 0;
}
