#include <iostream>
using namespace std;

class Vector3 {
	int x, y, z;
public:
	Vector3() { x = 0; y = 0; z = 0; }
	Vector3(int i, int j, int k) { x = i; y = j; z = k; }
	void GetXYZ(int& i, int& j, int& k) { i = this->x; j = this->y; k = this->z; }
	/*thisポインタを使用してメンバー変数にアクセス*/
	bool operator>(Vector3 obj);/*メンバー演算子関数の一般形式*/
	bool operator<(Vector3 obj);/*メンバー演算子関数の一般形式*/
};

/*「<」演算子をVector3クラスに対してオーバーロードする*/
bool Vector3::operator<(Vector3 p) {
	double value, r;
	value = sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
	r = sqrt(pow(p.x, 2) + pow(p.y, 2) + pow(p.z, 2));

	return value < r;
}

/*「>」演算子をVector2クラスに対してオーバーロードする*/
bool Vector3::operator>(Vector3 p) {
	double value, r;
	value = sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
	r = sqrt(pow(p.x, 2) + pow(p.y, 2) + pow(p.z, 2));

	return value > r;
}

int main(int argc, char* argv[]) {
	Vector3 p1(3, 6, 9);
	Vector3 p2(1, 2, 3);
	Vector3 p3(0, 0, 0);
	int x, y, z;

	p1.GetXYZ(x, y, z);
	cout << "p1について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n";
	p2.GetXYZ(x, y, z);
	cout << "p2について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n";
	p3.GetXYZ(x, y, z);
	cout << "p3について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n\n";

	if (p1 < p2) cout << "p1 < p2、すなわち p2 は p1 より大きいです。\n";
	else cout << "p1 > p2、すなわち p1 は p2 より大きいです。\n";

	if (p3 > p1)  cout << "p3 > p1、すなわち p3 は p1 より大きいです。\n";
	else cout << "p3 < p1、すなわち p1 は p3 より大きいです。\n";

	return 0;
}
