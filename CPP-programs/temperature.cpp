/* Reading and writing files */
#include <iostream>
#include <fstream>
#include <vector>

struct Reading{
	int hour;
	double temperature;

	Reading(int h,double temp):hour(h),temperature(temp) {}
};

int main(void)
{
	std::string name;

	std::cout << "Enter the name of the input file:" << std::endl;
	std::cin >> name;
	std::ifstream ist(name.c_str());
	if(!ist){std::cerr << "Can't open input file" << std::endl; }

	std::cout << "Enter the name of the output file:" << std::endl;
	std::cin >> name;
	std::ofstream ost(name.c_str());
	if(!ost){std::cerr << "Cant open output file:" << std::endl; }

	std::vector<Reading> temps;
	int hour;
	double temperature;
	while(ist >> hour >> temperature ){
		if(hour < 0 || 23 < hour)
			std::cerr << "Hour out of bounds" << std::endl;
		temps.push_back(Reading(hour,temperature));
	}

	for(int i = 0 ; i != temps.size() ; ++i){
		ost << "( " << temps[i].hour << ";" << temps[i].temperature << " )"<< std::endl;

	}

	std::cout << "Check " << name << " file for results!" << std::endl;

	return 0;
}
