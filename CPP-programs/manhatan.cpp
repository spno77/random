/*Manhatan distance*/

#include <iostream>
#include <vector>
#include <cmath>

double manhatan_distance(std::vector<double> v1, std::vector<double> v2);

int main(void)
{
	std::vector<double> vv1{103,4,2};
	std::vector<double> vv2{456,52,1};

	double result = manhatan_distance(vv1,vv2);

	std::cout << "Distance is: " << result << std::endl;

	return 0;
}

double manhatan_distance(std::vector<double> v1, std::vector<double> v2)
{
	double distance= 0.0;
	double sum = 0.0;
	double result;
	std::vector<double> temp;

	if(v1.size() != v2.size()) {
		std::cerr << "vectors must be same size" << std::endl;
		exit(-1);
	}

	for(int i = 0 ; i < v1.size() ; i++) {
		result = abs(v1[i] - v2[i]);
		temp.push_back(result);
	}

	for(std::vector<double>::iterator it = temp.begin(); it != temp.end(); ++it)
    	distance  += (double)*it;

	return distance;
}




