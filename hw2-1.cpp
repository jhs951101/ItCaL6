#include <iostream>

using namespace std;

int main(){

	int n, i=2;

	cout << "�Ҽ� �Ǻ� ���α׷��Դϴ�. ����: ";
	cin >> n;

	while (i <= n-1){
		if (n%i == 0){
			cout << n << "��(��) �Ҽ��� �ƴմϴ�.\n";
			system("pause");
			return 0;
		}
		i++;
	}

	cout << n << "��(��) �Ҽ��Դϴ�.\n";

    system("pause");
	return 0;
}