//Napisz program, kt�ry wypisze liczb� rzeczywist� wylosowan� z przedzia�u od L do H
//(zak�adamy L < H).Przy czym L i H s� sta�ymi rzeczywistymi i wynosz� odpowiednio - 10 oraz 10.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int l = -10, h = 10;
	srand(time(NULL));
	cout << (rand() % 10) - 10 << endl;
	return 0;
}
