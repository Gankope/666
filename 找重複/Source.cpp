#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	bool same = false;
	int count = 0, c = 0;
	string input="", last="", name;
	cout << "��J���W�� : ";
	cin >> name;
	fstream read(name + ".txt", ios::in);
	cout << "\n�еy��...\n";
	while (read>>input) {
		count++;
		if (input == last) {
			cout << "�b��" << count << "����Ʀa�観���ơC �O " << input << endl;
			same = true;
			c++;
		}
		if (c == 10) {
			string a;
			cout << "�аݬO�_�~��? ";
			cin >> a;
			if (a == "�O" || a[0] == 'y' || a[0] == 'Y') a = "";
			if (a != "") break;
			c = 0;
		}
		last = input;
	}
	if (!same) cout << "����쭫�Ƹ��" << endl;
	system("pause");
	return 0;
}