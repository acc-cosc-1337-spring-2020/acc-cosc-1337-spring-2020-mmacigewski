//temperature_data.h
#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
public:

	Temperature(int hours, double reading) : hour(hours), read(reading) {}

	int get_hour()const { return hour; }
	double get_reading()const { return read; }

private:

	int hour{ 0 };
	double read{ 0 };
};

#endif
