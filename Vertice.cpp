#include "Vertice.h"

Vertice::Vertice(float x, float y, float z) {
	posX = x;
	posY = y;
	posZ = z;
}

Vertice::~Vertice() {
}

float Vertice::getX(){
	return posX;
}
float Vertice::getY(){
	return posY;
}
float Vertice::getZ(){
	return posZ;
}
void Vertice::setX(float x){
	posX = x;
}
void Vertice::setY(float y){
	posY = y;
}
void Vertice::setZ(float z){
	posZ = z;
}
void Vertice::setPos(float x, float y, float z){
	posX = x;
	posY = y;
	posZ = z;
}
