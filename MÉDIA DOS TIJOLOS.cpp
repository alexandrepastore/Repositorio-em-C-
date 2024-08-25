#include <iostream>
 
#include <cstdlib>
 
using namespace std;

int main()
 
{
// informar qtos tijolos ele colocou cada dia
// imprimir a media 
// mensagem de parabens caso seja superior a 500

float d1;
float d2;
float d3;
float md;

cout<<("Dia 1 -> ");
cin>>(d1);
cout<<("Dia 2 -> ");
cin>>(d2);
cout<<("Dia 3 -> ");
cin>>(d3);
cout<<("Media de tijolos dos ultimos 3 dias -> ");
md = (d1+d2+d3)/3;

if(md>500)
{
	cout<<("\nParabens, meta atingida! ");
}
else
{
	cout<<("\nNa Próxima se esforce mais! ")
};

  return 0;
 
}