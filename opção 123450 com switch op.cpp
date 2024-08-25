#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
	int op;
	cout<<("informe uma opcao entre 1,2,3,4 ou 0 : ");
	cin>>(op);
	switch (op)
	{
		case 1:
			cout<<("cadastrar");
			break;
		case 2:
			cout<<("consultar");
			break;
		case 3:
			cout<<("imprimir");
			break;
		case 4:
			cout<<("alterar");
			break;
		case 0:
			cout<<("fim");
			break;
		default:
			cout<<("favor digitar um valor entre 1,2,3,4 ou 0 !!");
 
	}
}