#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student {
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreMath;
    int scoreEnglish;
};

void Show(const Student& student) //Stundentへの参照を引数にとる関数show
{
    cout << "名前" << student.name << endl;
    cout << "国語" << student.scoreJapanese << "点"
         << "数学" << student.scoreMath << "点"
         << "英語" << student.scoreEnglish << "点" << endl;
};

int main() {
    Student student[] = {
        {"赤井孝", 73, 98, 86, },
        {"笠井大介", 64, 45, 40, },
        {"吉田叶", 76, 78, 69, },
    };
    int size = sizeof student / sizeof *student;


    for(int i = 0; i < size; i++){
        Show(student[i]);
    }
}
