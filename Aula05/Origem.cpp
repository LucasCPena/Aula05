#include <iostream>;

using namespace std;
int* A, * B;


int main() {


	// new (aloca o tipo da memoria)
	// malloc( aloca espa�o para um bloco de bytes consecutivos na memoria ram
	// sizeof, diz quantos bytes o objeto em quest�o tem:
	// free desaloca a por��o de memoria alocada por malloc. A instru��o free(ptr) avisa ao sistema que o bloco de bytes apontado por ptr est� dispon�vel para 
	// reciclagem. A proxima invoca��o de malloc poder� tomar posse desses bytes.
	// & � um operador que devolve o endre�o de uma variavel
	// * � um operador que devolve o conte�do armazenado em um endre�o

	A = new int;
	B = (int*)malloc(sizeof(int));
	
	cout << "Digite um numero: ";
	cin >> *A;
	cout << "*A em " << A << " : " << (*A) << endl;

	cout << "Digite outro numero: ";
	cin >> *B;
	cout << "*B em " << B << " : " << (*B) << endl;

	free(A);
	free(B);

	return 0;
		 

}
