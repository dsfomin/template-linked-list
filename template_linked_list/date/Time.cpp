#pragma once
#include "Time.h"
#include <iomanip>


using namespace std;

bool Time::checkAddingOfTime(Time lhs, Time rhs) {
	int th = lhs.GetHour() + rhs.GetHour();
	int tm = lhs.GetMinute() + rhs.GetMinute();
	int ts = lhs.GetSecond() + rhs.GetSecond();
	if (ts > 59) {
		ts %= 60;
		tm++;
	}
	if (tm > 59) {
		tm %= 60;
		th++;
	}
	if (th > 23)
		return true;
	return false;
}

Time Time::operator+(Time toAdd) {
	int th, tm, ts;

	ts = toAdd.second + this->GetSecond();
	tm = toAdd.minute + this->GetMinute();
	th = toAdd.hour + this->GetHour();

	if (ts > 59) { tm++; ts %= 60; }
	if (tm > 59) { th++; tm %= 60; }
	if (th > 23) { th %= 24; }

	return Time(th, tm, ts);
}

Time Time::operator-(Time toMin) {
	Time res;


	return Time();
}

bool Time::operator<(Time toCompare) {
	if (this->hour != toCompare.hour) return (this->hour < toCompare.hour);
	if (this->minute != toCompare.minute) return (this->minute < toCompare.minute);
	return this->second < toCompare.second;
}

bool Time::operator>(Time toCompare) {
	if (this->hour != toCompare.hour) return (this->hour > toCompare.hour);
	if (this->minute != toCompare.minute) return (this->minute > toCompare.minute);
	return this->second > toCompare.second;
}

bool Time::operator==(Time toCompare) {
	return (this->hour == toCompare.hour && this->minute == toCompare.minute && this->second == toCompare.second);
}

bool Time::operator!=(Time toCompare)
{
	return (this->hour != toCompare.hour || this->minute != toCompare.minute || this->second != toCompare.second);
}

bool Time::operator<=(Time toCompare) {
	return ((Time(this->hour, this->minute, this->second) == toCompare) || (Time(this->hour, this->minute, this->second) < toCompare));
}
bool Time::operator>=(Time toCompare) {
	return ((Time(this->hour, this->minute, this->second) == toCompare) || (Time(this->hour, this->minute, this->second) > toCompare));
}

bool Time::TimeIsCorrect(int h, int m, int s) {
	if (h < 0 || h > 23) return false;
	if (m < 0 || m > 59) return false;
	if (s < 0 || s > 59) return false;

	return true;
}
