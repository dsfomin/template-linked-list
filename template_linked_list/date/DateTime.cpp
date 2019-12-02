#include "DateTime.h"

DateTime DateTime::operator+(DateTime toAdd) {
	Time t = this->GetTime() + toAdd.GetTime();
	Date d = this->GetDate() + toAdd.GetDate();
	if (checkAddingOfTime(this->GetTime(), toAdd.GetTime())) {
		d.SetDay(d.GetDay() + 1);
	}
	return DateTime(d, t);
}

bool DateTime::operator<(DateTime toCompare)
{
	if (this->GetDate() != toCompare.GetDate()) return (this->GetDate() < toCompare.GetDate());
	return this->GetTime() < toCompare.GetTime();
}

bool DateTime::operator>(DateTime toCompare)
{
	if (this->GetDate() != toCompare.GetDate()) return (this->GetDate() > toCompare.GetDate());
	return this->GetTime() > toCompare.GetTime();
}

bool DateTime::operator==(DateTime toCompare)
{
	return (this->GetDate() == toCompare.GetDate() && this->GetTime() == toCompare.GetTime());
}

bool DateTime::operator!=(DateTime toCompare)
{
	return (this->GetDate() != toCompare.GetDate() || this->GetTime() != toCompare.GetTime());
}
