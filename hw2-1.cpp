#include <iostream>

using namespace std;

int main(){

	int n, i=2;

	cout << "소수 판별 프로그램입니다. 숫자: ";
	cin >> n;

	while (i <= n-1){
		if (n%i == 0){
			cout << n << "은(는) 소수가 아닙니다.\n";
			system("pause");
			return 0;
		}
		i++;
	}

	cout << n << "은(는) 소수입니다.\n";

    system("pause");
	return 0;
}