#pragma once
#include "Date.h"
#include "Time.h"

class DateTime : Date, Time {
public:
	DateTime() {};

	DateTime(Date d, Time t) {
		if (DateIsCorrect(d.GetYear(), d.GetMonth(), d.GetDay()) && TimeIsCorrect(t.GetHour(), t.GetMinute(), t.GetSecond())) {
			this->date = d;
			this->time = t;
		}
	}
	DateTime(int year, int month, int day, int hour, int min, int sec) {
		if (DateIsCorrect(year, month, day) && TimeIsCorrect(hour, min, sec)) {
			this->date.SetYear(year);
			this->date.SetMonth(month);
			this->date.SetDay(day);
			this->time.SetHour(hour);
			this->time.SetMinute(min);
			this->time.SetSecond(sec);
		}
	}

	/** Method, which return value: time */
	Time GetTime() { return this->time; }
	
	/** Method, which return value: date */
	Date GetDate() { return this->date; }

	/** Operator, which add another datetime to this datetime
	*
	* @param another datetime
	*/
	DateTime operator+(DateTime toAdd);
	
	/** Operator, which compare another datetime with this datetime
	*
	* @return true if this datetime is less than another
	*
	* @param another datetime
	*/
	bool operator<(DateTime toCompare);

	/** Operator, which compare another datetime with this datetime
	*
	* @return true if this datetime is greater than another
	*
	* @param another datetime
	*/
	bool operator>(DateTime toCompare);

	/** Operator, which compare another datetime with this datetime
	*
	* @return true if this datetime is equal to another
	*
	* @param another datetime
	*/
	bool operator==(DateTime toCompare);

	/** Operator, which compare another datetime with this datetime
	*
	* @return true if this datetime is not equal to another
	*
	* @param another datetime
	*/
	bool operator!=(DateTime toCompare);
private:
	Date date;
	Time time;
};