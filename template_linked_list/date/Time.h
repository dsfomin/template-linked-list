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

/**
 * @file Time.h
 *
 * @brief Class for time
 *
 * @ingroup PackageName
 *
 * @author Dmitriy Fomin
 * Contact: dsfomin2@gmail.com
 *
 */

#ifndef TIME_H
#define TIME_H

#pragma once
#include <iomanip>

 /**
  * Class for time
  *
  * The class is implemented for the
  * time format: hour, minute, second
  */
class Time {
public:
	/** Default constructor */
	Time() {};

	// Конструктор
	Time (int h, int m, int s) {
		if (TimeIsCorrect(h, m, s) == 1) {
			this->hour = h;
			this->minute = m;
			this->second = s;
		}
		else
			throw ("Incorrect Time Format!");
	}

	// Получить час
	int GetHour() { return this->hour; }

	// Получить минуту
	int GetMinute() { return this->minute; }

	// Получить секунду
	int GetSecond() { return this->second;}

	// Оператор сложения двух времен
	Time operator+(Time toAdd);

	// Оператор вычитания двух времен
	Time operator-(Time toMin);

	// Оператор сравнения меньше двух времен
	Time operator<(Time toCompare);

	// Оператор сравнения больше двух времен
	Time operator>(Time toCompare);

	// Оператор сравнения тождества двух времен
	Time operator==(Time toCompare); 

	// Проверка на валидность времени
	bool TimeIsCorrect(int h, int m, int s);
private:
	// Час
	int hour;

	// Минута
	int minute;

	// Секунда
	int second;
};

#endif