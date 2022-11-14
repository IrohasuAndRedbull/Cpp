/*これはメインのCppファイルです*/
#include <iostream>
#include "Person.h"

int main() {
	Person *p_01 = new Person();/*Person型でp_01を宣言*/

	if (!p_01) {
		cout << "メモリー割り当てエラー\n";
		return 1;
	}/*new演算子はメモリ割り当てに失敗するとnullを返す*/

	p_01->setName("Tsubasa Matsunaga");/*new演算子を用いてインスタンスを動的に割り当て、名前を格納*/
	p_01->setFrom("Mie prefecture");/*new演算子を用いてインスタンスを動的に割り当て、出身地を格納*/

	cout << "名前は" << p_01->getName() << "です。\n";/*名前を標準出力*/
	cout << "出身地は"<< p_01->getFrom() << "です。\n";/*出身地を標準出力*/
}
