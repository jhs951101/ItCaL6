#include <iostream>
#include <string>

using namespace std;

int main(){

	string std;

	cout << "문자열의 역 스트링 프로그램입니다. 문자열: ";
	cin >> std;

	int i = std.length() - 1;
	string n = "";

	while (i >= 0){
		n = n + std.substr(i,1) ;
		i--;
	}

	cout << "역 스트링: " << n << "\n";

	return 0;
}