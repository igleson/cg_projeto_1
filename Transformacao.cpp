#include "Transformacao.h"
#include <iostream>
Transformacao::Transformacao() {
	matrizTransformacao3D = new float*[4];
	for(int a=0;a<4;a++){
		matrizTransformacao3D[a] = new float[4];
		for(int b=0;b<4;b++){
			matrizTransformacao3D[a][b] = 0;
		}
	}
	matrizTransformacao3D[0][0] = 1;
	matrizTransformacao3D[1][1] = 1;
	matrizTransformacao3D[2][2] = 1;
	matrizTransformacao3D[3][3] = 1;

}

Transformacao::~Transformacao() {
}

float** Transformacao::transformar(float** entrada3D){
	
	float **result = matmult(matrizTransformacao3D,4,4,entrada3D,4,1);
	return result;
	
}

