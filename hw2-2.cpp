#include <iostream>
#include <string>

using namespace std;

int main(){

	string std;

	cout << "���ڿ��� �� ��Ʈ�� ���α׷��Դϴ�. ���ڿ�: ";
	cin >> std;

	int i = std.length() - 1;
	string n = "";

	while (i >= 0){
		n = n + std.substr(i,1) ;
		i--;
	}

	cout << "�� ��Ʈ��: " << n << "\n";

	return 0;
}