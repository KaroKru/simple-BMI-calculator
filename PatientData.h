#pragma once

class PatientData
{
protected:
	double weight;
	int height;

public:
	PatientData(double& p_weight, int& p_height);
	~PatientData();
	double BMIIndexCalaculation(double& weight, int& height);
	void checkBMI(double& weight, int& height);
};
