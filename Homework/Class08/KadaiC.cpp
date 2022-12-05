#include <iostream>
using namespace std;

class Vector3 {
	int x, y, z;
public:
	Vector3() { x = 0; y = 0; z = 0; }
	Vector3(int i, int j, int k) { x = i; y = j; z = k; }
	void GetXYZ(int& i, int& j, int& k) { i = this->x; j = this->y; k = this->z; }
	Vector3 operator--();/*メンバー演算子関数の一般形式で前置*/
	Vector3 operator--(int a);/*メンバー演算子関数の一般形式で後置*/
};

/*「--」演算子をVector3クラスに対してオーバーロードする(前置)*/
Vector3 Vector3::operator--() {
	Vector3 temp;
	--x;
	--y;
	--z;

	return *this;
}

/*「--」演算子をVector2クラスに対してオーバーロードする(後置)*/
Vector3 Vector3::operator--(int a_) {
	Vector3 value = *this;
	--* this;
	return value;
}

int main(int argc, char* argv[]) {
	Vector3 p1(3, 6, 9);
	Vector3 p2(1, 2, 3);
	Vector3 p3(0, 0, 0);
	int x, y, z;

	p1.GetXYZ(x, y, z);
	cout << "p1について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n\n";
	p3 = --p1; /*前置デクリメントを行う*/
	p3.GetXYZ(x, y, z);
	cout << "前置デクリメントの結果\n\n";
	cout << "p3について\n X: " << x << ", Y: " << y << ", Z: " << z << "\n";
	p1.GetXYZ(x, y, z);
	cout << "p1について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n";

	cout << "\n------------------------\n\n";

	p2.GetXYZ(x, y, z);
	cout << "p2について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n\n";
	p3 = p2--; /*後置デクリメントを行う*/
	p3.GetXYZ(x, y, z);
	cout << "後置デクリメントの結果\n\n";
	cout << "p3について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n";
	p2.GetXYZ(x, y, z);
	cout << "p2について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n";

	return 0;
}
