// 説明スライドを参考に、現実世界のポリフォーズムを名前にしてください

#include <stdio.h>

class parent {
public:
	virtual void Voice() { printf("あにまる¥n"); };
};

class childA : public parent {
public:
	void Voice() { printf("子供Aっす\n"); };
};

class childB : public parent {
public:
	void Voice() { printf("子供Bっす\n"); };
};

int main(void) {

	parent* animal[2] = {new childA, new childB};

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}
