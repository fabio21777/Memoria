#ifndef RAM_H
#define RAM_H


#include <bitset>
using std::bitset;

#include <vector>
using std::vector;

typedef bitset<8> bit8;
typedef bitset<4> bit4;

class Ram
{
public:
	Ram();
	
	bool read(const bit4 &);
	
	bool write(const bit4 &, const bit8 &);
	
	void list_all( );
	
	~Ram();
	
private:

	vector<bit8> celulas;
	

};

#endif // RAM_H
