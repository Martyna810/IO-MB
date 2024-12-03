#include <iostream>
using namespace std;

long long silnia (int n) {
	if (n <= 1) return 1;
	return n * silnia (n-1);
}

int main(){
int x;
cin >> x;
<<<<<<< HEAD
cout << silnia(x) << endl;
=======
if (x<0) {
cout << "Wprowadzono liczbe ujemna" << endl;
return 1;
}
cout << x << endl;
>>>>>>> sprawdzenie
return 0;
}
