/**
 * @file SetOfMeasurementValues.h
 * @brief Defines the SetOfMeasurementValues class and its associated operations.
 *
 * This file contains the declaration of the SetOfMeasurementValues class, which represents
 * a set of measurement values with various attributes and methods for manipulating and
 * retrieving those values.
 *
 * @note MAXVALUE and NOVALUE are constants for the array size and invalid value representation.
 */

#ifndef SETOFMEASUREMENTVALUES_H_
#define SETOFMEASUREMENTVALUES_H_
#include <string>
#include <iostream>

// Constant to define the maximum number of measurement values
#define MAXVALUE 10
// Constant to represent an invalid measurement value
#define NOVALUE -9999

/**
 * @class SetOfMeasurementValues
 * @brief A class to represent a set of measurement values with operations to modify, retrieve and display the data.
 *
 * This class allows users to store, manipulate, and retrieve measurement values in a set.
 * It provides methods to set individual or random values, calculate averages, and print
 * the values and statistics such as min, max, and average.
 */
class SetOfMeasurementValues
{
public:
    /**
     * @enum t_unit
     * @brief Enumeration for different types of units used for measurement.
     *
     * The units include:
     * - A for Amps
     * - V for Volts
     * - S for Siemens
     * - W for Watts
     * - NONE for no unit.
     */
    enum t_unit {A, V, S, W, NONE};

    /**
     * @brief Constructor to create a SetOfMeasurementValues object.
     * @param name The name of the measurement set.
     * @param unit The unit of measurement.
     */
    SetOfMeasurementValues(std::string name, t_unit unit);

    /**
     * @brief Sets the value at the specified position in the value array.
     * @param pos The position in the array (0 to MAXVALUE-1).
     * @param value The value to set at the specified position.
     */
    void setValue(unsigned int pos, double value);

    /**
     * @brief Sets random values in the array within a given range.
     *
     * The random values are set between the specified min and max values, with 1 decimal place.
     * @param min The minimum value for random generation.
     * @param max The maximum value for random generation.
     */
    void setRandomValues(int min, int max);

    /**
     * @brief Prints all valid values in the value array.
     *
     * It uses the printSingleValue method to display each individual value.
     */
    void print();

    /**
     * @brief Retrieves the value at the specified position in the array.
     * @param pos The position in the array (0 to MAXVALUE-1).
     * @return The value at the specified position.
     */
    double getValue(unsigned int pos);

    /**
     * @brief Calculates and returns the average of all valid values.
     * @return The average value of the valid measurements.
     */
    double getAverage();

    /**
     * @brief Retrieves the maximum value from the array of values.
     * @return The maximum value among all valid measurements.
     */
    double getMax();

    /**
     * @brief Retrieves the minimum value from the array of values.
     * @return The minimum value among all valid measurements.
     */
    double getMin();

    /**
     * @brief Destructor for the SetOfMeasurementValues class.
     *
     * The destructor ensures proper cleanup of any resources (if necessary).
     */
    virtual ~SetOfMeasurementValues();

private:
    /**
     * @brief An array to hold the measurement values.
     *
     * This array holds up to 10 measurement values of type double.
     */
    double value[MAXVALUE];

    /**
     * @brief The name of the measurement set.
     */
    std::string name;

    /**
     * @brief The unit of measurement for the values in the set.
     */
    t_unit unit;

    /**
     * @brief Prints the value at the specified position.
     * @param pos The position of the value to print.
     *
     * This function is used internally by the print() method to display individual values.
     */
    void printSingleValue(unsigned int pos);
};

#endif /* SETOFMEASUREMENTVALUES_H_ */
