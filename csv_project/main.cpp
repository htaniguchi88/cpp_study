#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Member {
    int32_t group_id;
    char name[7];
    unsigned char id;
    int32_t score;
};

int main(){
	vector<Member> members;

	ifstream ifs("day3_q3.csv");
	if(!ifs){
		cerr << "ファイルオープンに失敗" << endl;
		exit(1);
	}

	string str;
	getline(ifs, str);

	while(getline(ifs, str)){
		Member member;
		string token;
		// getlineで文字が流し込まれたstrをistringstreamのオブジェクトであるissのメンバに渡すことで，もう一度ストリームに戻している。istringstreamの中では引数を受け取る変数初期化のコンストラクタがあるのだろう。
		istringstream iss(str);

		getline(iss, token, ',');
		member.group_id = (int32_t)stoi(token);

		cout << member.group_id << endl;

		exit(0);

	}



}
