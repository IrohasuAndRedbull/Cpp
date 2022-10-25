#include <iostream>
using namespace std;

class Card {/*Cardクラスの非公開メンバー*/
	int stock;		 /*在庫冊数*/
	char author[100];/*著者*/
	char title[100]; /*本のタイトル*/
public:
	void store(int stock, char author[100], char title[100]);
	void show();/*Cardクラスの公開メンバー*/
};

void Card::store(int tempstock, char tempauthor[100], char temptitle[100]) {
	stock = tempstock;
	for (int i = 0; i < 100; i++) {
		author[i] = tempauthor[i];
		title[i] = temptitle[i];
	}/*本の情報を保存する*/
}

void Card::show() {
	cout << "本の在庫数:" << stock << "\n本の著者:" << author << "\n本のタイトル:" << title;
}/*本の情報を表示する*/

int main() {
	Card book01;

	char title01[] = "鏡の孤城";
	char author01[] = "辻村深月";
	int stock01 = 100;/*本の情報*/

	book01.store(stock01, author01, title01);
	book01.show();

	return 0;
}
