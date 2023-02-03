// test_Kurs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main(){

	int pow = 0; //кол-во поворотов
	int N = 0; //размерность матрицы

	cout << "Size matrix: ";
	cin >> N;

	cout << "Swap matrix: ";
	cin >> pow;

	if (pow < 0) {
		while (pow < 0) {
			pow += 4;
		}
	}
	if (pow > 4) {
		while (pow > 4) {
			pow -= 4;
		}
	}

	cout << "POW: " << pow << "\n";

	int matrix[100][100];

	int t = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = t;
			cout << " " << matrix[i][j];
			t++;
		}
		cout << "\n";
	}

	int matrix_swap[100][100];

	switch (pow){
	case 1://90
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				matrix_swap[j][i] = matrix[N - 1 - i][j];//90
			}
		}
		break; 
	case 2://180
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				matrix_swap[i][j] = matrix[N - 1 - i][N - 1 - j];
			}
		}
		break;
	case 3: //270
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				matrix_swap[i][j] = matrix[j][N - i - 1];
			}
		}
		break;
	default://0
		break;
	}

	cout << "\n";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << " " << matrix_swap[i][j];
		}
		cout << "\n";
	}
}