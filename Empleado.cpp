/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include "Empleado.h"
#include<stdlib.h>
#include<time.h>

Empleado::Empleado() {
	id = 0;
	nombre = "";
	numero = 1 + rand() % (100 - 1);
	anoExperiencia = 0;
	salariobase = 0.0;
	flagRevision = false;

}
Empleado::Empleado(int* numero) {
	for (int i = 0; i < sizeof(*numero); i++) {
		numero[i] = 0;
	}
}
float Empleado::aumentoSalarioExperiencia(int* experiencia) {
	float salario = salariobase;
	if (1 == *experiencia < 3) {
		if (*experiencia == 1)
			salario += (salario * 0.02);

		else
			if (*experiencia == 2)
				salario += (salario * 0.04);
	}
	else {
		salario += salario * (0, 05 * *experiencia);
	}
	return salario;
}

void Empleado::revisionAleatoria(bool* flag) {

	int empleado = 1 + rand() % (100 - 1);
	if (empleado == getNumero())
		* flag = true;
	else {
		*flag = false;

	}
	setFlagRevision(flag);
}


std::string Empleado::ReporteEmpleado() {
	std::string flag;
	int* experiencia = nullptr;
	experiencia = &anoExperiencia;
	if (getFlagRevision() == false)
		flag = "NO";
	else {
		flag = "SI";
	}
	return "Empleado # [ " + std::to_string(getNumero()) + "]\n\tNombre [" + getNombre() + " ]\n\tAños de experiencia [" + std::to_string(getAnoExperiencia()) + "]\n\tSalario Inicial [ " + std::to_string(getSalarioBase()) + "]\n\tSalario Acumulado [" + std::to_string(aumentoSalarioExperiencia(experiencia)) + "]\n\tNecesita revision[" + flag + "]\n";
}

void Empleado::setNombre(std::string nombre) {
	this->nombre = nombre;

}

void Empleado::setNumero(int* numero) {
	this->numero = *numero;

}

void Empleado::setID(int id) {
	this->id = id;

}
void Empleado::setAnoExperiencia(int anoExperiencia) {
	this->anoExperiencia = anoExperiencia;

}

void Empleado::setSalarioBase(float salariobase) {
	this->salariobase = salariobase;

}

void Empleado::setFlagRevision(bool flagRevision) {
	this->flagRevision = flagRevision;

}

std::string Empleado::getNombre() {
	return  nombre;

}

int Empleado::getNumero() {
	return numero;

}

int Empleado::getID() {
	return id;

}
int Empleado::getAnoExperiencia() {
	return anoExperiencia;

}

float Empleado::getSalarioBase() {
	return salariobase;

}

bool Empleado::getFlagRevision() {
	return flagRevision;
}
