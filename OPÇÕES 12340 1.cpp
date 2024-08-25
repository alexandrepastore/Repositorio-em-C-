#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
	int op;
	cout<<("informe uma opcao entre 1,2,3,4 ou 0: ");
	cin>>(op);
	if (op==1)
	{
		cout<<("cadastrar");
	}
	else
	{
		if (op==2)
		{
			cout<<("consultar"); 
		}
		else
		{
		  if (op==3)
		  {
		  	cout<<("imprimir");
		  }
		  else
		  {
		  	if (op==4)
		  	{
		  		cout<<("alterar");
			}
			else
			{
				if (op==0)
				{
					cout<<("FIM");
				}
				else
				{
					cout<<("favor digitar um numero valido animal");
				};
			};
		  };	
		};
	};
}