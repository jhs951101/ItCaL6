#include <iostream>
#include <string>

using namespace std;

int main(){

	int i=0;
	string std;

	cout << "문자열이 Palindrome인지 검사하는 프로그램입니다. 문자열: ";
	cin >> std;

	int j = std.length();

	while (i <= floor(j/2)){
		if (std.substr(i, 1) != std.substr(j-1-i, 1)){
			cout << "입력한 문자열은 Palindrome이 아닙니다.\n";
			return 0;
		}
		i++;
	}

	cout << "입력한 문자열은 Palindrome입니다.\n";

	return 0;
}