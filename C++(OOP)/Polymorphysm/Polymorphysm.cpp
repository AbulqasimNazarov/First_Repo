
#include <iostream>
#include <math.h>

using namespace std;


struct BaseUravneniya {
	int x = 0;
	virtual void Vichisleniye(int a, int b, int c = 0) = 0;
};


struct Lineyniye : BaseUravneniya {


	void Vichisleniye(int a, int b, int c = 0) override {
		this->x = -b / a;
		cout << "Koren lineynovo uravneniya: " << this->x << endl;
	}
};


struct Kvadratniye : BaseUravneniya {
	void Vichisleniye(int a, int b, int c) override {
		//a * (x * x) + b * x + c = 0;
		int Diskriminant = (b * b) - 4 * a * c;
		cout << "Diskriminant: " << Diskriminant << endl;
		if (Diskriminant > 0) {
			int x1 = (-b + sqrt(Diskriminant)) / (2 * a);
			int x2 = (-b - sqrt(Diskriminant)) / (2 * a);
			cout << "Perviy koren: " << x1 << endl;
			cout << "Vtoroy koren: " << x2 << endl;
		}
		else if (Diskriminant == 0) {
			int x = (-b) / (2 * a);
			cout << x << endl;
		}
		else if (Diskriminant < 0)
			cout << "Uravneniye ne imeyet korney." << endl;

	}
};



int main()
{
	/*BaseUravneniya* rewayem = new Lineyniye();
	rewayem->Vichisleniye(6, -24);*/

	BaseUravneniya* rewayem = new Kvadratniye();
	rewayem->Vichisleniye(1, 2, -8);
}