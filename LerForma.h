
#ifndef LERFORMA_H
#define	LERFORMA_H
#include <fstream>
#include <string>
#include <vector>
#include "Objeto2D.h"

using namespace std;
class LerForma {
public:
	LerForma();
	virtual ~LerForma();
	vector<Objeto2D> carregarArquivo(string filename);
private:

};

#endif	/* LERFORMA_H */

