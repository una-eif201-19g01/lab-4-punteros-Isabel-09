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

	numero = 1 + rand() % (100 - 1);
	flagRevision = false;
	annoExperiencia = 0;
}
Empleado::Empleado(const std::string& nombre, int annoExperiencia, float salariobase) : nombre(nombre),
annoExperiencia(annoExperiencia), salariobase(salariobase) {

	numero = 1 + rand() % (100 - 1);
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
	return  salario;
}

void Empleado::revisionAleatoria(bool* flag) {

	int empleado = 1 + rand() % (2 - 1);
	if (empleado == 0)
		* flag = true;
	else {
		*flag = false;
	}

	setFlagRevision(flag);
}


std::string Empleado::ReporteEmpleado() {
	std::string empleado = "";
	std::string flag;
	if (getFlagRevision() == false) {
		flag = "NO";
	}
	else {
		flag = "SI";
	}
	empleado = "Empleado # [ " + std::to_string(getNumero()) + "]\n\tNombre [" + getNombre() + " ]\n\tAños de experiencia [" + std::to_string(getAnnoExperiencia())
		+ "]\n\tSalario Inicial [ " + std::to_string(getSalarioBase()) + "]\n\tSalario Acumulado [" + std::to_string(aumentoSalarioExperiencia(&annoExperiencia)) +
		"]\n\tNecesita revision[" + flag + "]\n";
	return empleado;
}

void Empleado::setNombre(std::string nombre) {
	this->nombre = nombre;

}

void Empleado::setNumero(int numero) {
	this->numero = numero;

}


void Empleado::setAnnoExperiencia(int annoExperiencia) {
	this->annoExperiencia = annoExperiencia;

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

int Empleado::getAnnoExperiencia() {
	return annoExperiencia;

}

float Empleado::getSalarioBase() {
	return salariobase;

}

bool Empleado::getFlagRevision() {
	return flagRevision;
}
