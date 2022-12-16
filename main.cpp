#include <iostream>
#include <iomanip>
#include "PatientData.h"

void aboutCode()
{
	std::cout << "Body Mass Index (BMI) calculator" << std::endl;
	std::cout << "Please provide the body mass in kg and  the body height in cm" << std::endl;
}

int main()
{
	aboutCode();

	double bodyMass{0};
	std::cout << "provide body mass (in kg): ";
	std::cin >> bodyMass;

	int bodyHeight{0};
	std::cout << "provide body height (in cm): ";
	std::cin >> bodyHeight;


	PatientData data(bodyMass, bodyHeight);
	std::cout << "The BMI value: " <<  std::fixed << std::setprecision(2) << data.BMIIndexCalaculation(bodyMass, bodyHeight) << std::endl;
	data.checkBMI(bodyMass, bodyHeight);

	return 0;
}