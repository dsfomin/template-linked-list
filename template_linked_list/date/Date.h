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
 * @file Date.h
 *
 * @brief Class for date
 *
 * @ingroup PackageName
 *
 * @author Dmitriy Fomin
 * Contact: dsfomin2@gmail.com
 *
 */

#ifndef DATE_H
#define DATE_H

#pragma once
#include "Time.h"
#include <string>

using namespace std;

enum dayWeek { MONDAY = 1, TUESDAY, WEDNESDAY, THUSDAY, FRIDAY, SATURDAY, SUNDAY }; // Дни недели

 /** @class
  * Class for date
  *
  * The class is implemented for the
  * time format: year, month, day and time
  */

class Date {
public:
	/** Default constructor */
	Date() {};

	/** Constructor
	*
	* Set values in the class for year, month, day and
	* time (if the parameter is passed to the function)
	*
	* @param year
	* @param month
	* @param day
	* @param time
	*/
	Date(int year, int month, int day, Time time = Time(0, 0, 0)) { // Конструктор
		if (DateIsCorrect(year, month, day) == 1) {
			this->year = year;
			this->month = month;
			this->day = day;
			this->time = time;
			this->WeekDay = FindWeekDay(year, month, day);
		}
		else
			throw ("Incorrect Date Format!");
	}

	/** Method, which return value: year */
	int GetYear() { return this->year; }

	/** Method, which return value: month */
	int GetMonth() { return this->month; }

	/** Method, which return value: day */
	int GetDay() { return this->day; }

	/** Method, which return value: time */
	Time GetTime() { return this->time; }

	/** Operator, which add another date to this date
	*
	* @param another date
	*/
	Date operator+(Date toAdd);

	/** Operator, which subtract another date from this date
	*
	* @param another date
	*/
	Date operator-(Date toMin);

	/** Operator, which compare another date with this date
	*
	* @return true if this date is less than another
	*
	* @param another date
	*/
	bool operator<(Date toCompare);

	/** Operator, which compare another date with this date
	*
	* @return true if this date is greater than another
	*
	* @param another date
	*/
	bool operator>(Date toCompare);

	/** Operator, which compare another date with this date
	*
	* @return true if this date is equal to another
	*
	* @param another date
	*/
	bool operator==(Date toCompare);

	/** Method, which convert enum value to string
	*
	* @param enum dayWeek
	*/
	string enToString(dayWeek d);

	/** Method, which return string name of weekday, which was represent as a enum
	*
	* @return string name of weekday
	*/
	string findDay() { return enToString(WeekDay); }

	/** Method, which find day of week
	*
	* @return enum dayWeek value
	*
	* @param year
	* @param month
	* @param day
	*/
	dayWeek FindWeekDay(int year, int month, int day);

	/** Method, which check if date is correct
	*
	* @return true if date is correct
	*
	* @param year
	* @param month
	* @param day
	*/
	bool DateIsCorrect(int year, int month, int day);

private:
	dayWeek WeekDay; ///< day of the week

	int year; ///< year

	int month; ///< month

	int day; ///< day

	Time time; ///< time
};

#endif // !