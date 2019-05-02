#include <iostream>
using namespace std;

class MyMessage {
public:
	void showMessage();
	void showMessage(char *s);
	void showMessage(char *a, int n);
};

void MyMessage::showMessage() {
	cout << "こんにちは" << endl;
}

void MyMessage::showMessage(char *s) {
	cout << s << endl;
}

void MyMessage::showMessage(char *s, int n) {
	for (int i = 0; i < n; i++){
		cout << s << endl;
	}
}

int main() {
	MyMessage obj;

	obj.showMessage();
	obj.showMessage("お元気ですか");
	obj.showMessage("DeNA", 3);

	return 0;
}
