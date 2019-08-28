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
	std::string nombre;
	int numero;
	int annoExperiencia;
	float salariobase;
	bool flagRevision;
	//metodos
	float aumentoSalarioExperiencia(int*);
	void revisionAleatoria(bool*);
public:
	Empleado();
	Empleado(const std::string& nombre, int anoExperiencia, float salariobase);
	std::string ReporteEmpleado();
	void setNombre(std::string);
	std::string getNombre();
	void setNumero(int);
	int getNumero();
	void setAnnoExperiencia(int);
	int getAnnoExperiencia();
	void setSalarioBase(float);
	float getSalarioBase();
	void setFlagRevision(bool);
	bool getFlagRevision();
};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
