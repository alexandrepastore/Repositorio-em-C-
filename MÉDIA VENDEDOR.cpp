#include <iostream>
 
#include <cstdlib>
 
using namespace std;

int main()
 
{
//informar as 3 ultimas vendas
//calcular a media do vendedor 
//imprimir a media do vendedor
//imprimir 10% do valor da media como bonus
float vd1;
float vd2;
float vd3;
float mv;
float bns;
cout<<("Informe suas ultimas tres vendas abaixo.\n");
cout<<("primeira: R$");
cin>>(vd1);
cout<<("segunda: R$");
cin>>(vd2);
cout<<("terceira: R$");
cin>>(vd3);
cout<<("Sua media eh R$");
mv = (vd1 + vd2 + vd3)/3;
cout<<("%.2f", mv);
cout<<("\nSeu bonus sera R$");
bns = mv*0.1;
cout<<("%.2f", bns);

  return 0;
 
}