//***********************************************************************************************************
//Programming Assignment 04
//Programmer: Dustin Sherer
//Completed: 02/17/2022
//Status: Complete
//
//This program is designed to estimate the speed of a robot.
// 1. estimation from combination of wheel diameter in inches, and the wheel rotations per minute
// 2. create class Robot with 2 private data members and public member functions
// 3. no direct calling of member variables
// 4. Robot constructor takes no arguments, default wheel size and wheel RPM are set in constructor
// 5. use main function to test, showing that setRPM(), setDiameter(), and getter functions work as they should
//
//***********************************************************************************************************

#include <iostream>
#include "Robot.h"

int main()
{
    // declare default Robot object
    Robot r1;

    // declare and initialize Robot object with invalid wheel RPM & valid wheel size: RPM - 189, Diameter - 5
    Robot r2;
    r2.setRPM(189);
    r2.setDiameter(5);

    // declare and initialize Robot object with valid wheel RPM & invalid wheel size: RPM - 190, Diameter - 0.7
    Robot r3;
	r3.setRPM(190);
	r3.setDiameter(.7);

    // declare and initialize Robot object with valid wheel RPM & valid wheel size: RPM - 266, Diameter - 6.1
    Robot r4;
	r4.setRPM(266);
	r4.setDiameter(6.1);

    // declare and initialize Robot object with valid wheel RPM & valid wheel size: RPM - 265, Diameter - 4.7
    Robot r5;
	r5.setRPM(265);
	r5.setDiameter(4.7);

    //greeting
    std::cout << "Welcome to the Robot class test\n\n";

    // print default Robot
    std::cout << "Default Robot():\n";
    r1.displayRobotInfo();

    // print Robot w/ invalid RPM & valid wheel size
    std::cout << "Robot() w/ invalid RPM [189rpm] & valid wheel size [5in]:\n";
    r2.displayRobotInfo();

    // print Robot w/ valid RPM & invalid wheel size
    std::cout << "Robot() w/ valid RPM [190rpm] & invalid wheel size [0.7in]:\n";
    r3.displayRobotInfo();

	// print Robot w/ invalid RPM & invalid wheel size
	std::cout << "Robot() w/ valid RPM [190rpm] & invalid wheel size [0.7in]:\n";
	r4.displayRobotInfo();

    // print Robot w/ valid RPM & valid wheel size
    std::cout << "Robot() w/ valid RPM [265rpm] & valid wheel size [4.7in]:\n";
    r5.displayRobotInfo();


    system("pause");
}

//***********************************************************************************************************
// setRPM function: sets motor speed in rotations per minute -> if speed is valid (74, 190 or 265 RPM) -> else do nothing
//
//***********************************************************************************************************
void Robot::setRPM(double newRPM)
{
    if (newRPM == 190 || newRPM == 265)
    {
        motorRPM = newRPM;
    }
}

//***********************************************************************************************************
// setDiameter function: sets diameter of wheel in inches -> if diameter is valid (>=1  or  <=6) -> else do nothing
//
//***********************************************************************************************************
void Robot::setDiameter(double newDiameter)
{
    if (newDiameter >= 1 && newDiameter <= 6)
    {
        wheelDiameter = newDiameter;
    }
}

//***********************************************************************************************************
// function getSpeed returns the speed of the robot in feet per minute
//
//***********************************************************************************************************
double Robot::getSpeed()
{
    // set pi constant (preferably buttermilk pie)
    const float pi = 3.14159;

    // declare variables
    double inchPerMin;
    double feetPerMin;

    // instantiate variables with applicable functions
    inchPerMin = getRPM() * getDiameter() * pi;
    feetPerMin = inchPerMin / 12;

    return inchPerMin;
}

//***********************************************************************************************************
// function displaySpeedInfo prints out returned RPM, Diameter, and Speed; from getRPM(), getDiameter, and getSpeed(), respectively
//
//***********************************************************************************************************
void Robot::displayRobotInfo()
{
    std::cout << "RPM: \t\t" << getRPM() << " rpm\n";
    std::cout << "Diameter: \t" << getDiameter() << " in.\n";
    std::cout << "Speed: \t\t" << getSpeed() << " ft/min\n\n";
}
