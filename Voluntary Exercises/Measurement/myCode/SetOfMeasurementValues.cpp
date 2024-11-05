/*
 * SetOfMeasurementValues.cpp
 *
 *  Created on: 04-Nov-2024
 *      Author: Shwetali Wadekar
 */

#include "SetOfMeasurementValues.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

/**
 * @brief Constructor for SetOfMeasurementValues class.
 *
 * Initializes the measurement set with a name and unit. The value array is initialized to
 * NOVALUE, and the object memory location is printed.
 *
 * @param name The name of the measurement set.
 * @param unit The unit of measurement (A, V, S, W, or NONE).
 */
SetOfMeasurementValues::SetOfMeasurementValues(std::string name, t_unit unit) :
		name(name), unit(unit)
{
	name = "NA"; // TODO: Default name assignment
	unit = t_unit::NONE; // Default unit
	// Initialize all values to NOVALUE
	for (int i = 0; i < MAXVALUE; ++i)
	{
		value[i] = NOVALUE;
	}
	std::cout << "Created object at : " << this << std::endl;
}

/**
 * @brief Sets the value at a specific position in the value array.
 *
 * If the position is within bounds (0 to MAXVALUE-1), the value is set at the specified
 * position in the array. If out of bounds, an error message is printed.
 *
 * @param pos The position in the array (0 to MAXVALUE-1).
 * @param value The value to set at the specified position.
 */
void SetOfMeasurementValues::setValue(unsigned int pos, double value)
{
	if (pos >= MAXVALUE)
	{
		std::cout << "ERROR setValue: Position out of bounds" << std::endl;
	}
	else
		this->value[pos] = value;
}

/**
 * @brief Sets random values within a specified range.
 *
 * Generates random values between the given min and max values, and assigns them to
 * the array `value[]`. Each random value is rounded to one decimal place.
 *
 * @param min The minimum possible value.
 * @param max The maximum possible value.
 */
void SetOfMeasurementValues::setRandomValues(int min, int max)
{
	// Seed the random number generator with the current time
	std::srand(std::time(0));

	// Loop through the array and set random values
	for (int i = 0; i < MAXVALUE; ++i)
	{
		// Generate a random value between min and max
		double randomValue = min + (rand() % (max - min + 1))
				+ (rand() % 10) / 10.0;

		// Round to one decimal place
		value[i] = std::round(randomValue * 10.0) / 10.0;
	}
}

/**
 * @brief Prints the values in the value array.
 *
 * Iterates through the value array and prints all non-NOVALUE entries.
 * It also prints the minimum, maximum, and average values.
 */
void SetOfMeasurementValues::print()
{
	// Print all valid values in the array
	for (int i = 0; i < MAXVALUE; ++i)
	{
		if (value[i] != NOVALUE)
		{
			printSingleValue(i);
		}
	}

	// Print minimum, maximum, and average values
	double minValue = getMin();
	double maxValue = getMax();
	double averageValue = getAverage();

	std::cout << "Minimum value: " << minValue << std::endl;
	std::cout << "Maximum value: " << maxValue << std::endl;
	std::cout << "Average value: " << averageValue << std::endl;
}

/**
 * @brief Gets the value at the specified position in the array.
 *
 * If the position is out of bounds, returns NOVALUE and prints an error message.
 *
 * @param pos The position in the array (0 to MAXVALUE-1).
 * @return The value at the specified position or NOVALUE if out of bounds.
 */
double SetOfMeasurementValues::getValue(unsigned int pos)
{
	if (pos >= MAXVALUE)
	{
		std::cout << "ERROR getValue: Position out of bounds" << std::endl;
		std::cout << "Returning a value: " << NOVALUE << std::endl;
		return NOVALUE;
	}
	else
		return value[pos];
}

/**
 * @brief Calculates and returns the average of all valid values in the array.
 *
 * The average is calculated by summing all valid values and dividing by the count of valid values.
 * If no valid values exist, returns NOVALUE.
 *
 * @return The average value or NOVALUE if no valid values are present.
 */
double SetOfMeasurementValues::getAverage()
{
	double sum = 0.0;
	int count = 0;
	for (int i = 0; i < MAXVALUE; ++i)
	{
		if (value[i] != NOVALUE)
		{
			sum = sum + value[i];
			count++;
		}
	}
	if (count == 0)
	{
		return NOVALUE;
	}

	return sum / count;
}

/**
 * @brief Gets the maximum value from the array of valid values.
 *
 * Iterates through the array and returns the largest valid value.
 * If no valid values exist, returns NOVALUE.
 *
 * @return The maximum value or NOVALUE if no valid values are present.
 */
double SetOfMeasurementValues::getMax()
{
	double maxValue = NOVALUE;
	for (int i = 0; i < MAXVALUE; ++i)
	{
		if (value[i] != NOVALUE)
		{
			if (value[i] > maxValue)
			{
				maxValue = value[i];
			}
		}
	}
	return maxValue;
}

/**
 * @brief Gets the minimum value from the array of valid values.
 *
 * Iterates through the array and returns the smallest valid value.
 * If no valid values exist, returns NOVALUE.
 *
 * @return The minimum value or NOVALUE if no valid values are present.
 */
double SetOfMeasurementValues::getMin()
{
	double minValue = NOVALUE;
	for (int i = 0; i < MAXVALUE; ++i)
	{
		if (value[i] != NOVALUE)
		{
			if (minValue == NOVALUE || value[i] < minValue)
			{
				minValue = value[i];
			}
		}
	}
	return minValue;
}

/**
 * @brief Destructor for the SetOfMeasurementValues class.
 *
 * This destructor does not currently perform any specific cleanup but is available
 * for future memory management needs.
 */
SetOfMeasurementValues::~SetOfMeasurementValues()
{
	// No specific cleanup required currently
}

/**
 * @brief Prints the value at the specified position with the correct unit.
 *
 * Prints the value at the given position in the array, along with the unit (Ampere, Volt,
 * Seconds, or Watt) depending on the unit type.
 *
 * @param pos The position in the value array to print.
 */
void SetOfMeasurementValues::printSingleValue(unsigned int pos)
{
	switch (unit)
	{
	case A:
		std::cout << "Value[" << pos << "]:" << value[pos] << " Ampere" << std::endl;
		break;
	case V:
		std::cout << "Value[" << pos << "]:" << value[pos] << " Volt" << std::endl;
		break;
	case S:
		std::cout << "Value[" << pos << "]:" << value[pos] << " Seconds" << std::endl;
		break;
	case W:
		std::cout << "Value[" << pos << "]:" << value[pos] << " Watt" << std::endl;
		break;
	default:
		break;
	}
}
