#include <GL/gl.h>

#include "Objeto2D.h"
#include "Vertice.h"
#include "Transformacao.h"

Objeto2D::Objeto2D() {
}

Objeto2D::~Objeto2D() {
}
void Objeto2D::addVertice(float posX,float posY,float posZ){
	vertices.push_back(Vertice(posX,posY,posZ));
}
Vertice Objeto2D::getVertice(int pos){
	return vertices[pos];
}
void Objeto2D::transformacao(Transformacao *t){
	for(int a=0;a<vertices.size();a++){
		float **entrada = new float*[4];
		for(int b=0; b<4; b++){
			entrada[b] = new float[1];
		}
		entrada[0][0] = vertices[a].getX();
		entrada[1][0] = vertices[a].getY();
		entrada[2][0] = vertices[a].getZ();
		entrada[3][0] = 1;
		
		float **transformado = t->transformar(entrada);
		vertices[a].setPos(transformado[0][0],transformado[1][0],transformado[2][0]);
		
	}
}
void Objeto2D::display(){
	glBegin(GL_POLYGON);
		for(int a=0;a<vertices.size();a++){
			glVertex3f(vertices[a].getX(),vertices[a].getY(),vertices[a].getZ());
		}
	glEnd();
}