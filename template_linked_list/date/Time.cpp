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
#include "Time.h"
#include <iomanip>


using namespace std;

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

Time Time::operator<(Time toCompare)
{

	return Time();
}

Time Time::operator>(Time toCompare)
{
	return Time();
}

Time Time::operator==(Time toCompare)
{
	return Time();
}

bool Time::TimeIsCorrect(int h, int m, int s)
{
	if (h < 0 || h > 23) return false;
	if (m < 0 || m > 59) return false;
	if (s < 0 || s > 59) return false;

	return true;
}
