#include <iostream>
#include <string>

using namespace std;

int main(){

	int i=0, j, n, sum=0, decide=0;
	string std_2;
	char a;

	cout << "Please enter a binary number: ";
	cin >> std_2;

	n = std_2.length() - 1;
	j = n;

	while (i <= n){
		a = std_2.at(i);
		if (a != '0') decide = decide + 1;
		if (a != '1') decide = decide + 1;
		if (decide == 2) {
			cout << std_2 << " is not a binary number." << "\n";
			system("pause");
			return 1;
		}
		i++;
		decide = 0;
	}

	i=0;

	while (i <= n){
		a = std_2.at(i);
		if (a == '1') sum = sum + pow(2, j);
		i++;
		j--;
	}

	cout << "integer value is " << sum << "\n";

	system("pause");
	return 0;
}