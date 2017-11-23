#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	bool same = false;
	int count = 0, c = 0;
	string input="", last="", name;
	cout << "輸入文件名稱 : ";
	cin >> name;
	fstream read(name + ".txt", ios::in);
	cout << "\n請稍後...\n";
	while (read>>input) {
		count++;
		if (input == last) {
			cout << "在第" << count << "筆資料地方有重複。 是 " << input << endl;
			same = true;
			c++;
		}
		if (c == 10) {
			string a;
			cout << "請問是否繼續? ";
			cin >> a;
			if (a == "是" || a[0] == 'y' || a[0] == 'Y') a = "";
			if (a != "") break;
			c = 0;
		}
		last = input;
	}
	if (!same) cout << "未找到重複資料" << endl;
	system("pause");
	return 0;
}