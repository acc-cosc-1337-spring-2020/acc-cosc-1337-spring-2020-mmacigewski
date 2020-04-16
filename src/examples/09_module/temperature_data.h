//temperature_data.h
#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

#include "temperature.h"

#include <fstream>
#include <string>
#include <vector>

class TemperatureData
{
public:

	void save_temps(std::vector<Temperature>& ts); //don't want to create a copy so it passes the actual vector
	std::vector<Temperature> get_temps() const;

private:

	const std::string file_name{ "temperature.dat" };

};

#endif
