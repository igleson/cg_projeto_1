#ifndef TRANSFORMACAO_H
#define	TRANSFORMACAO_H
#include "matmult.h"
class Transformacao {
public:
	Transformacao();
	virtual ~Transformacao();
	virtual float** transformar(float** entrada3D);
protected:
	float ** matrizTransformacao3D;

};

#endif	/* TRANSFORMACAO_H */

