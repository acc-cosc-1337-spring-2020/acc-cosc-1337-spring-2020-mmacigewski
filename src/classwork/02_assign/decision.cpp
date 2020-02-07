//Write the function code that returns the product of hours and hourly_rate.
#include "decision.h"

double gross_pay(double hours, double hourly_rate)
{
	const int IMAXHOURS = 40;
	const double OTRATE = 1.5;

	if (hours > IMAXHOURS)
	{
		int OT = hours - IMAXHOURS;
		return (((hours - OT) * hourly_rate) + (hourly_rate * OTRATE * OT));
	}

	else { return hours * hourly_rate; }
}