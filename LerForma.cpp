#include "LerForma.h"

LerForma::LerForma() {
}

LerForma::~LerForma() {
}

vector<Objeto2D> LerForma::carregarArquivo(string filename){
	ifstream arquivo(filename.c_str());
	vector<Objeto2D> retorno;
	int tipo =0;
	while(!arquivo.eof()){
		arquivo >> tipo;
		int pontosALer = 0;
		switch(tipo){
			case 2:
			//Reta
			pontosALer = 2;
			break;
			case 3:
			//Triangulo
			pontosALer = 3;
			break;
			case 4:
			//Quadrilátero
			pontosALer = 4;
			break;
			case 5: 
			//Polígonos
			arquivo >> pontosALer;				
			break;
			case 6:
			//Bézier
			pontosALer = 4;
		}
		if(pontosALer!=0){
			Objeto2D ob;
			int added = 0;
			bool eofreached=false;
			for(int a=0;a<pontosALer;a++){
				float x;
				float y;
				if(!arquivo.eof())
					arquivo >> x >> y;
				else
					eofreached = true;
				ob.addVertice(x,y);
				added++;
			}
			if(!eofreached){
				retorno.push_back(ob);
			}
		}
	}
	arquivo.close();
	return retorno;
}
