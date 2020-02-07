//Write the function code that returns the product of hours and hourly_rate.
#include "decision.h"

double gross_pay(double hours, double hourly_rate)
{
	if (hours > 40)
	{
		int OT = hours - 40;
		return (((hours - OT) * hourly_rate) + (hourly_rate * 1.5 * OT));
	}
	else { return hours * hourly_rate; }
}