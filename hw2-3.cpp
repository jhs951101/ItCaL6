#include <iostream>
#include <string>

using namespace std;

int main(){

	int i=0;
	string std;

	cout << "���ڿ��� Palindrome���� �˻��ϴ� ���α׷��Դϴ�. ���ڿ�: ";
	cin >> std;

	int j = std.length();

	while (i <= floor(j/2)){
		if (std.substr(i, 1) != std.substr(j-1-i, 1)){
			cout << "�Է��� ���ڿ��� Palindrome�� �ƴմϴ�.\n";
			return 0;
		}
		i++;
	}

	cout << "�Է��� ���ڿ��� Palindrome�Դϴ�.\n";

	return 0;
}