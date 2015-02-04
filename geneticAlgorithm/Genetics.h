#include <boost\dynamic_bitset.hpp>

using namespace boost;
using geneCode = dynamic_bitset < > ;


class Genetics
{
public:
	Genetics();
	Genetics(dynamic_bitset<> genes, int outputSize){};
	~Genetics();

	int run();



private:
	geneCode genes;
	int outPutSize;
	
	int processBits(geneCode input);




};