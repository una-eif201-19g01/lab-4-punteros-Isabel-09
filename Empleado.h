/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>
class Empleado {
protected:
	int id;
	std::string nombre;
	int numero;
	int anoExperiencia;
	float salariobase;
	bool flagRevision;
	//metodos
	float aumentoSalarioExperiencia(int*);
	void revisionAleatoria(bool*);
public:
	Empleado();
	Empleado(int*);
	std::string ReporteEmpleado();
	void setNombre(std::string);
	std::string getNombre();
	void setID(int);
	int getID();
	void setNumero(int*);
	int getNumero();
	void setAnoExperiencia(int);
	int getAnoExperiencia();
	void setSalarioBase(float);
	float getSalarioBase();
	void setFlagRevision(bool);
	bool getFlagRevision();
};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
