/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\ahsrobo.APS.001                                  */
/*    Created:      Fri Jan 21 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2            
// Arm                  motor         7               
// LeftArm              motor         3               
// RightArm             motor         8               
// Claw                 motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----

// Custom header file which does most of the work for us (see README.cpp)
#include "FastDrive.h"
#include <thread>

void openClaw() {
  Claw.spinFor(vex::forward,230,degrees);
}
void raiseArm() {
  Arm.spinToPosition(-195,degrees);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  thread clawOpen (openClaw);
  thread armRaise (raiseArm);

  /*

  ************************
  * Uncomment Eventually *
  ************************

  fastDrive("right",20);
  fastDrive("forward",10);
  fastDrive("left",20);
  fastDrive("forward",20);
  fastDrive("left",90);

  Arm.spinToPosition(-180,degrees);
  fastDrive("forward", 40); 

  */
 /*
  Brain.Screen.setPenColor(red);
  Brain.Screen.setFont(propXXL);
  Brain.Screen.print("Vex Robotics");
  Brain.Screen.newLine();
  Brain.Screen.setPenColor(white);
  Brain.Screen.print("Demonstration");
  Brain.Screen.setPenColor(white);
  Brain.Screen.setFont(monoS);
 */
  // Moving arm upwards so it's easier for the robot to move and HOPEFULLY doesnt catch on the carpet
  clawOpen.detach();
  armRaise.detach();


  // Utilizing our "FastDrive.h" custom header file
  fastDrive("forward",24);

  // Claw.spinFor(vex::forward,230,degrees);
  Claw.spinFor(vex::reverse,280,degrees);

  fastDrive("forward",-24);
}
