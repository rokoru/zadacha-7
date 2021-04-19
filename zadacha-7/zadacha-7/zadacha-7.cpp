#include <iostream>
#include <ctime>



int main() {

	srand(time(NULL));

	const int size = 7;
	int U[size];
	int D[size];
	int V[size];
	int S[size];


	for (int j = 0; j < size; j++) {

		U[j] = rand() % 10;
		D[j] = rand() % 15;
		V[j] = rand() % 5;
	}
	for (int i = 0; i < 7; i++) {
		S[i] = (U[i] + D[i] + V[i]) / 3;
	}
	int s;
	for (int e = 0; e < size; e++) {
		s += S[e];
	}
	int s1;
	s1 = s / 7;

	std::cout << s1 << std::endl;

	return 0;
}
