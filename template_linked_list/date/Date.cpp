// -*- lsst-c++ -*-
/*
* LSST Data Management System
* See COPYRIGHT file at the top of the source tree.
*
* This product includes software developed by the
* LSST Project (http://www.lsst.org/).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the LSST License Statement and
* the GNU General Public License along with this program. If not,
* see <http://www.lsstcorp.org/LegalNotices/>.
*/

#pragma once
#include "Date.h"

// Проверяет выйдет ли сумма времен за границу 24 часов
bool checkAddingOfTime(Time lhs, Time rhs) {
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

// Проверяет являеться ли год высокосным
bool is_leap(int year) {
	if (year % 4)
		return false;
	else if (year % 100)
		return true;
	return !(year % 400);
}

// Возращает количество дней в определенном месяце и годе
int countOfDaysInMonth(int y, int m) {
	if (m == 1 || m == 3 || m == 5 || m == 12 || m == 10 || m == 8 || m == 7) return 31;
	else if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
	else if (m == 2) return is_leap(y) ? 29 : 28;
	return -1;
}

dayWeek Date::FindWeekDay(int year, int month, int day) {
	int a = (14 - month) / 12;
	int y = year - a;
	int m = month + 12 * a - 2;
	int res = (7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12)) % 7;
	switch (res) {
	case 0:
		return dayWeek(7);
	case 1:
		return dayWeek(1);
	case 2:
		return dayWeek(2);
	case 3:
		return dayWeek(3);
	case 4:
		return dayWeek(4);
	case 5:
		return dayWeek(5);
	case 6:
		return dayWeek(6);
	default:
		break;
	}
}

Date Date::operator+(Date toAdd) {
	int ty, tm, td;
	Time t = this->GetTime() + toAdd.GetTime();
	tm = this->GetMonth() + toAdd.GetMonth();
	td = this->GetDay() + toAdd.GetDay();
	ty = this->GetYear() + toAdd.GetYear();

	if (tm > 12) {
		tm %= 12;
		ty++;
	}
	while (countOfDaysInMonth(ty, tm) < td) {
		td -= countOfDaysInMonth(ty, tm);
		tm++;
	}
	if (tm > 12) {
		tm %= 12;
		ty++;
	}
	if (checkAddingOfTime(this->GetTime(), toAdd.GetTime())) {
		td++;
	}

	return Date(ty, tm, td, t);
}

Date Date::operator-(Date toMin) {
	return Date();
}

bool Date::operator<(Date toCompare)
{
	if (this->GetYear() != toCompare.GetYear())
		return this->GetYear() < toCompare.GetYear();
	else if (this->GetMonth() != toCompare.GetMonth())
		return this->GetMonth() < toCompare.GetMonth();
	else
		return this->GetDay() < toCompare.GetDay();
}

bool Date::operator>(Date toCompare) {
	if (this->GetYear() != toCompare.GetYear())
		return this->GetYear() > toCompare.GetYear();
	else if (this->GetMonth() != toCompare.GetMonth())
		return this->GetMonth() > toCompare.GetMonth();
	/*else if (this->GetTime() != this->GetTime())
		return (this->GetTime() > toCompare.GetTime());*/
	return this->GetDay() > toCompare.GetDay();
}

bool Date::operator==(Date toCompare)
{
	return ((this->GetDay() == toCompare.GetDay()) && (this->GetMonth() == toCompare.GetMonth()) && (this->GetMonth() == toCompare.GetMonth()));
}

string Date::enToString(dayWeek d)
{
	switch (d) {
	case MONDAY:
		return string("MONDAY");
	case TUESDAY:
		return string("TUESDAY");
	case WEDNESDAY:
		return string("WEDNESDAY");
	case THUSDAY:
		return string("THUSDAY");
	case FRIDAY:
		return string("FRIDAY");
	case SATURDAY:
		return string("SATURDAY");
	case SUNDAY:
		return string("SUNDAY");
	default:
		return string("UNKNOWN");
	}return string();
}

bool Date::DateIsCorrect(int y, int m, int d)
{
	if (d < 0 || m < 0 || m > 12) return false;
	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) return false;
	if ((m == 4 || m == 6 || m == 11 || m == 9) && d > 30) return false;
	if (m == 2 && is_leap(y) && d > 29) return false;
	else if (m == 2 && d > 28) return false;

	return true;
}


