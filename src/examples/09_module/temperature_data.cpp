//temperature_data.cpp
#include "temperature_data.h"

void TemperatureData::save_temps(std::vector<Temperature>& ts)
{

	std::ofstream file_out(file_name, std::ios_base::trunc); //anytime you open the file, zero it out

	for (auto temp : ts)
	{
		file_out << temp.get_hour();
		file_out << " ";
		file_out << temp.get_reading();
		file_out << "\n";
	}

	file_out.close(); 
}

std::vector<Temperature> TemperatureData::get_temps() const
{

	std::vector<Temperature> temps;
	std::ifstream read_file(file_name);

	int hour;
	double reading;

	if (read_file.is_open())
	{
		while (read_file >> hour >> reading) //while it is not end of file
		{
			Temperature temp(hour, reading);
			temps.push_back(temp);
		}
	}
	read_file.close();


	return temps;
}
