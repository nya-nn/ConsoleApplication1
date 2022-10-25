
#include <iostream>
#include<algorithm>
#include"getBmi.h";
#include"getObesity.h"
using namespace std;

int main()
{
    double weight;
    double height;
    double bmi;
    int obesity;
    cout << "身長を入力してください：";
    cin >> height;
    cout << "体重を入力してください:";
    cin >> weight;

    bmi = getBmi(height, weight);
    obesity = getObesity(bmi);
    cout << "あなたのBMIは" << bmi << "です。";

    if (obesity == -1) {
        cout << "あなたは低体重です。";
    }
    else if (obesity == 0) {
        cout << "あなたは普通体重です。";
    }
    else if (obesity == 1) {
        cout << "あなたは肥満（1度）です。";
    }
    else if (obesity == 2) {
        cout << "あなたは肥満（２度）です。";
    }
    else if (obesity == 3) {
        cout << "あなたは肥満（３度）です。";
    }
    else {
        cout << "あなたは肥満（４度）です。";
    }
}
