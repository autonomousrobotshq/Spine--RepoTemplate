//
// Spine - Spine - MCU code for robotics.
// Copyright (C) 2019-2021 Codam Robotics
//
// This file is part of Spine.
//
// Spine is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Spine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Spine.  If not, see <http://www.gnu.org/licenses/>.
//

#include <Arduino.h>
#include <ArduinoUnitTests.h>

/*
 ** EXAMPLE UNITTEST
 *
 ** supported assertions
 * ----------------------------
 * assertEqual(expected, actual);               // a == b
 * assertNotEqual(unwanted, actual);            // a != b
 * assertComparativeEquivalent(expected, actual);    // abs(a - b) == 0 or (!(a > b) && !(a < b))
 * assertComparativeNotEquivalent(unwanted, actual); // abs(a - b) > 0  or ((a > b) || (a < b))
 * assertLess(upperBound, actual);              // a < b
 * assertMore(lowerBound, actual);              // a > b
 * assertLessOrEqual(upperBound, actual);       // a <= b
 * assertMoreOrEqual(lowerBound, actual);       // a >= b
 * assertTrue(actual);
 * assertFalse(actual);
 * assertNull(actual);
 *
 ** special cases for floats
 * assertEqualFloat(expected, actual, epsilon);    // fabs(a - b) <= epsilon
 * assertNotEqualFloat(unwanted, actual, epsilon); // fabs(a - b) >= epsilon
 * assertInfinity(actual);                         // isinf(a)
 * assertNotInfinity(actual);                      // !isinf(a)
 * assertNAN(arg);                                 // isnan(a)
 * assertNotNAN(arg);                              // !isnan(a)
 *
 ** further documentation @ https://github.com/Arduino-CI/arduino_ci/blob/master/REFERENCE.md
 */

unittest_setup()
{
}

unittest_teardown()
{
}

unittest(  test name here  )
{
	GodmodeState* state = GODMODE();   // get access to the avr state
}

unittest_main()
