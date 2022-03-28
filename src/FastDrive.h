#ifndef FASTDRIVE_H_
#define FASTDRIVE_H_
// Defining function with paramters.
/*    YOU WILL NOT NEED TO DEFINE THE METRICS AS THE FUNCTION AUTOMATICALLY
 * CHOOSES INCHES/DEGREES    */
#include "vex.h"
#include <iostream>
#include <string>

using namespace std;
using namespace vex;

void fastDrive(string direction, int amount) {
  if (direction == "forward") {
    Brain.Screen.print("Moving forwards for ");
    Brain.Screen.print(amount);
    Brain.Screen.print(" inches");
    Brain.Screen.newLine();
    Drivetrain.driveFor(vex::forward, amount, vex::inches);
  } else if (direction == "right") {
    Brain.Screen.print("Turning right for ");
    Brain.Screen.print(amount);
    Brain.Screen.print(" degrees");
    Brain.Screen.newLine();
    Drivetrain.turnFor(vex::right, amount, vex::degrees);
  } else if (direction == "left") {
    Brain.Screen.print("Turning left for ");
    Brain.Screen.print(amount);
    Brain.Screen.print(" degrees");
    Brain.Screen.newLine();
    Drivetrain.turnFor(vex::left, amount, vex::degrees);
  } else if (direction != "left" || "right" || "forward") {
    Brain.Screen.print("Invalid input.  Make sure all parameters are");
    Brain.Screen.newLine();
    Brain.Screen.print("lowercase and are the correct type of input");
    Brain.Screen.newLine();
  }
}
#endif
