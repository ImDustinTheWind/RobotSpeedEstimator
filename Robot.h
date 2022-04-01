//***********************************************************************************************************
//Programming Assignment 04
//Programmer: Dustin Sherer
//Completed: 02/17/2022
//Status: Complete
//
//This program is designed to estimate the speed of a robot.
// 1. estimation from combination of wheel diameter in inches and the wheel rotations per minute
// 2. create class Robot with 2 private data members and  public member functions
// 3. no direct calling of member variables
// 4. Robot constructor takes no arguments, default wheel size and wheel RPM are set in constructor
// 5. use main function to test, showing that setRPM(), setDiameter(), and getter functions work as they should
//
//***********************************************************************************************************

#pragma once


class Robot
{
	private:
		//data members
		float motorRPM = 74.0;		  //the gear motor speed in revolutions per minute
		float wheelDiameter = 1.0;  //the wheel diameter in inches

	public:
		//constructors    
		Robot()
		{
			motorRPM = 74.0;
			wheelDiameter = 1.0;
		}
// 		Robot()
// 		{
// 			setRPM(motorRPM);
// 			setDiameter(wheelDiameter);
// 		}

		//functions
		void setRPM(double newRPM);
		void setDiameter(double newDiameter);
		double getRPM()
			{return motorRPM;}
		double getDiameter()
			{return wheelDiameter;}
		double getSpeed();
		void displayRobotInfo();
};