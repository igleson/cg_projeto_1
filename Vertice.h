#ifndef VERTICE_H
#define	VERTICE_H

class Vertice {
public:
	Vertice(float x, float y, float z=0.0);
	virtual ~Vertice();
	float getX();
	float getY();
	float getZ();
	void setX(float x);
	void setY(float x);
	void setZ(float x);
	void setPos(float x, float y, float z);
private:
	float posX;
	float posY;
	float posZ;
};

#endif	/* VERTICE_H */

