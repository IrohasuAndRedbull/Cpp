#include <iostream>
using namespace std;

class Vector3 {
	int x, y, z;
public:
	Vector3() { x = 0; y = 0; z = 0; }
	Vector3(int i, int j, int k) { x = i; y = j; z = k; }
	void GetXYZ(int& i, int& j, int& k) { i = this->x; j = this->y; k = this->z; }
	Vector3 operator*(Vector3 obj);/*メンバー演算子関数の一般形式*/
	Vector3 operator/(Vector3 obj);/*メンバー演算子関数の一般形式*/
};

/*「*」演算子をVector3クラスに対してオーバーロードする*/
Vector3 Vector3::operator*(Vector3 p) {
	Vector3 temp;
	temp.x = x * p.x;
	temp.y = y * p.y;
	temp.z = z * p.z;

	return temp;
}

/*「/」演算子をVector2クラスに対してオーバーロードする*/
Vector3 Vector3::operator/(Vector3 p) {
	Vector3 temp;
	temp.x = x / p.x;
	temp.y = y / p.y;
	temp.z = z / p.z;

	return temp;
}

int main(int argc, char* argv[]) {
	Vector3 p1(3, 6, 9);
	Vector3 p2(1, 2, 3);
	Vector3 p3(0, 0, 0);
	int x, y, z;

	p3 = p1 * p2;
	p1.GetXYZ(x, y, z);
	cout << "p1について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n";
	p2.GetXYZ(x, y, z);
	cout << "p2について：\n X: " << x << ", Y: " << y << ", Z: " << z << "\n\n";
	p3.GetXYZ(x, y, z);
	cout << "(p1*p2) X:" << x << ", Y:" << y << ", Z:" << z <<"\n";

	p3 = p1 / p2;
	p3.GetXYZ(x, y, z);
	cout << "(p1/p2) X:" << x << ", Y:" << y << ", Z:" << z << "\n";

	return 0;
}
