#include "StdAfx.h"
#include "TMBasic.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

TMBasic::TMBasic(void)
{
	posicion=0;
	cantEstaAcep=0;
	palabra="";
	funcTrans="";
	estadoPalabra = EN_PROGRESO;
}

void TMBasic::setPosicion(int pos){
	posicion = pos;
}

void TMBasic::setCantEstados(int cantEst){
	cantEstados = cantEst;
}

void TMBasic::setCantEstaAcep(int cantEstAcep){
	cantEstaAcep = cantEstAcep;
}

int TMBasic::getPosicion(void){
	return posicion;
}

int TMBasic::getCantEstados(void){
	return cantEstados;
}

int TMBasic::getCantEstaAcep(void){
	return cantEstaAcep;
}

void TMBasic::setPalabra(String^ w){
	palabra=w;
}

void TMBasic::setFuncTrans(String^ file){
	funcTrans=file;
}

String^ TMBasic::getPalabra(void){
	return palabra;
}

String^ TMBasic::getFuncTrans(void){
	return funcTrans;
}

void TMBasic::setIdCinta(int id){
	idCinta=id;
}

int TMBasic::getEstadoPalabra(void){
	return estadoPalabra;
}

int TMBasic::hacerTranscion(int cont){
	
//	MessageBox::Show("long "+ palabra->Length);
	String^ temp;
	int tempEstado;
	try{
		for(int i=0;i<cont;i++){
			temp= ""+funcTrans[(i*13)];
			tempEstado=int::Parse(temp);

		}
	} catch(Exception^ e) {

	}
	
	return 0;
}

void TMBasic::setEstadoPalabra(int est){
	estadoPalabra = est;
}