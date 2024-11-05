/**
 * @file main.cpp
 * @brief Main program to demonstrate the functionality of the SetOfMeasurementValues class.
 *
 * This program demonstrates the use of the SetOfMeasurementValues class by creating
 * instances for voltage and current values, setting specific values, generating random
 * values for current, and printing the measurement results.
 *
 */

#include <iostream>
#include <cstdlib>
#include "SetOfMeasurementValues.h"

using namespace std;

/**
 * @brief Main entry point of the program.
 *
 * This function creates two instances of SetOfMeasurementValues: one for voltage and
 * one for current. It sets values for specific positions, generates random values for
 * the current measurements, and prints the results for both voltage and current.
 *
 * It demonstrates the functionality of setting and retrieving values, as well as
 * calculating and printing minimum, maximum, and average values.
 *
 * @return 0 on successful execution.
 */
int main ()
{
    /**
     * Create an instance of SetOfMeasurementValues for voltage with the name "myVoltageValues".
     * The unit is set to Volt (V).
     */
    SetOfMeasurementValues myVoltageValues("myVoltageValues", SetOfMeasurementValues::V);

    // Set specific values for voltage at positions 1 and 3
    myVoltageValues.setValue(1, 10);
    myVoltageValues.setValue(3, 20);

    // Print all valid voltage values and the calculated statistics
    myVoltageValues.print();

    // Attempt to set a value at an invalid position (30)
    myVoltageValues.setValue(30, 20);

    // Attempt to retrieve a value from an invalid position (77)
    myVoltageValues.getValue(77);

    /**
     * Create an instance of SetOfMeasurementValues for current with the name "myCurrentValues".
     * The unit is set to Ampere (A).
     */
    SetOfMeasurementValues myCurrentValues("myCurrentValues", SetOfMeasurementValues::A);

    // Set random values for current within the range of 0 to 100
    myCurrentValues.setRandomValues(0, 100);

    // Print all valid current values and the calculated statistics
    myCurrentValues.print();

    return 0;
}
