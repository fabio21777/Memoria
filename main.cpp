#include <iostream>
using std::cout;
using std::cin;

#include <bitset>
using std::bitset;

#include <string>
using std::string;

#include <stdlib.h>


#include "ram.h"

int main(int argc, char **argv)
{
	bit4 address;
	bit8 data;
	
	string op;
	
	
	Ram mem1;
	
	cout << "Digite W para escrever, R para ler, L para listar toda a memoria  e qualquer tecla para parar.\n";
	cin >> op;
	
	while( op.compare("R") == 0 || op.compare("W") == 0 ||  op.compare("L") == 0 )
	{
		if (op.compare("R") == 0)
		{
			cout << "Digite o endereco: ";
			cin >> address;
			mem1.read(address);
		}
		else if (op.compare("W") == 0)
		{
			cout << "Digite o endereco de 4 bits: ";
			cin >> address;
			cout << "Digite o dado de 8 bits: ";
			cin >> data;
			mem1.write(address, data);
		}
		else if(op.compare("L") == 0)
		{
			cout << "Todos os estados: \n";
			mem1.list_all( );
		}
		else
			break;
		
		cout << "Digite W para escrever, R para ler e qualquer tecla para parar.\n";
		cin >> op;
		
	}
	
	
	
	system("PAUSE");
	return 0;
}
