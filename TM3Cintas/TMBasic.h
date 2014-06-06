#pragma once
#define ACEPTADO 15
#define RECHAZADO -10
#define EN_PROGRESO 20

using namespace System;
ref class TMBasic
{
	int posicion;     //Posicion actual del lector de la TM en la cinta
	int cantEstados;  //Cantidad de estados que tiene la TM
	int cantEstaAcep; // numero de estados necesarios para que sea aceptado el string
	
	int idCinta;      //identificador de la cinta
	String^ palabra; // lo que ingresa el usuario en la cinta: w
	String^ funcTrans; //contenido del archivo de las funciones de transicion
	int estadoPalabra; //si ha sido aceptada, rechazada o esta en progreso

public:
	TMBasic(void);
	void setPosicion(int pos);
	void setCantEstados(int cantEst);
	void setCantEstaAcep(int cantEstAcep);
	void setPalabra(String^ w);
	void setFuncTrans(String^ file);
	void setIdCinta(int id);
	void setEstadoPalabra(int est);

	int getPosicion(void);
	int getCantEstados(void);
	int getCantEstaAcep(void);
	String^ getPalabra(void);
	String^ getFuncTrans(void);
	int getEstadoPalabra(void);

	int hacerTranscion(int cont); // retorna el resultado de la transición: ACEP, RECH, PROG, recibe la linea donde esta
	//la transición
};

