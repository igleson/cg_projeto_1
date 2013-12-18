#ifndef OBJETO2D_H
#define	OBJETO2D_H

#include <vector>
#include "Transformacao.h"
#include "Vertice.h"
using namespace std;

class Objeto2D {
public:
	Objeto2D();
	virtual ~Objeto2D();
	virtual void transformacao(Transformacao *t);
	void addVertice(float posX,float posY,float posZ=0.0);
	Vertice getVertice(int pos);
	virtual void display();
protected:
	vector<Vertice> vertices;
};

#endif	/* OBJETO2D_H */

