#include <iostream>
#include <cmath>
#include "PatientData.h"

PatientData::PatientData(double& p_weight, int& p_height)
{
	weight = p_weight;
	height = p_height;
}
PatientData::~PatientData() {}

double PatientData::BMIIndexCalaculation(double& weight, int& height)
{
	double patientHeight = static_cast<double>(height) / 100;
	double BMI = weight / pow(patientHeight, 2);
	return BMI;
}

void PatientData::checkBMI(double& weight, int& height)
{
	std::cout << "That is mean that you are in weight status: ";
	if (BMIIndexCalaculation(weight, height) >= 30.0)
	{
		std::cout << "Obesity" << std::endl;
	}
	else if (BMIIndexCalaculation(weight, height) >= 25.0 and BMIIndexCalaculation(weight, height) <= 29.9)
	{
		std::cout << "Overweight" << std::endl;
	}
	else if (BMIIndexCalaculation(weight, height) >= 18.5 and BMIIndexCalaculation(weight, height) <= 24.9)
	{
		std::cout << "Healthy weight" << std::endl;
	}
	else
	{
		std::cout << "Underweight" << std::endl;
	}
}