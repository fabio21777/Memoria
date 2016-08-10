#include "ram.h"
#include <iostream>
using std::cout;
using std::cin;

Ram::Ram()
:celulas(16)
{
		
}

bool Ram::read(const bit4 & address)
{
	
	cout << celulas[address.to_ulong( )] << '\n';
	
	return true;
}
	
bool Ram::red(const bit4 &address, const bit8 &data)
{
	
	celulas[address.to_ulong( )] = data;
	
	
	return true;	
}

void Ram::list_all( )
{
	
	for(int i = 0; i < 16; i++)
		cout << celulas[i] << "\n";
	
}


Ram::~Ram()
{
}

