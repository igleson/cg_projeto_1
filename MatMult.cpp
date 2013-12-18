#include <stdio.h>

float** matmult(float** A,int rowA, int colA, float** B, int rowB, int colB){
	if(rowA < 0 || rowB < 0 || colA < 0 || colB < 0 || colA != rowB)
		return NULL;
	float **output = new float*[rowA];
	for(int a=0;a<rowA;a++){
		output[a] = new float[colB];
		for(int b=0; b< colB; b++){
			output[a][b] = 0;
		}
	}
	for(int c=0;c<rowA;c++){
		for(int e=0;e<colB;e++){
			for(int d=0;d<colA;d++){
				output[c][e] += A[c][d]*B[d][e];
			}
		}
	}
	return output;
}
