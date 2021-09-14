#include <iostream>;

using namespace std;
int* A, * B;


int main() {


	// new (aloca o tipo da memoria)
	// malloc( aloca espaço para um bloco de bytes consecutivos na memoria ram
	// sizeof, diz quantos bytes o objeto em questão tem:
	// free desaloca a porção de memoria alocada por malloc. A instrução free(ptr) avisa ao sistema que o bloco de bytes apontado por ptr está disponível para 
	// reciclagem. A proxima invocação de malloc poderá tomar posse desses bytes.
	// & é um operador que devolve o endreço de uma variavel
	// * é um operador que devolve o conteúdo armazenado em um endreço

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
