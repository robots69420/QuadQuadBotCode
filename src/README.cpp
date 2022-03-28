//--------------------------------------------------------------------------|
// README written in C++ because Markdown and Text files aren't supported   |
//--------------------------------------------------------------------------|
//  ██████╗ ██╗   ██╗ █████╗ ██████╗      ██████╗ ██╗   ██╗ █████╗ ██████╗  |
// ██╔═══██╗██║   ██║██╔══██╗██╔══██╗    ██╔═══██╗██║   ██║██╔══██╗██╔══██╗ |
// ██║   ██║██║   ██║███████║██║  ██║    ██║   ██║██║   ██║███████║██║  ██║ |
// ██║▄▄ ██║██║   ██║██╔══██║██║  ██║    ██║▄▄ ██║██║   ██║██╔══██║██║  ██║ |
// ╚██████╔╝╚██████╔╝██║  ██║██████╔╝    ╚██████╔╝╚██████╔╝██║  ██║██████╔╝ |
//  ╚══▀▀═╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝      ╚══▀▀═╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝  |
//--------------------------------------------------------------------------|
//--------------------------------------------------------------------------|
// AUTHOR: Landen                                                           |
//--------------------------------------------------------------------------|
// ROBOT INFORMATION                                                        |
//--------------------------------------------------------------------------|
// DriveTrain: 2 Wheel                                                      |
// DriveTrain Ports: Left - 1, Right - 10                                   |
//--------------------------------------------------------------------------|
//                                                                          |
// "main.cpp" utilizes a custom header file created by me called            |
// "FastDrive.h"                                                            |
//                                                                          |
// To include the FastDrive header file, all you need to do is reference it |
// after you put it into the "src" folder. To reference it, just type:      |
//                                                                          |
// #include "FastDrive.h"                                                   |
//                                                                          |
// FastDrive includes all libraries and references for you that are needed  |
// for the robot. such as <iostream>, <string>, and "vex.h"                 |
//                                                                          |
// One of its main features is the fastDrive() function. The function takes |
// care of everything so all you need to do is type in a couple of          |
// parameters.                                                              |
//                                                                          |
// fastDrive("YOUR DIRECTION", "AMOUNT")                                    |
//                                  ^ If you are turning it defaults to     |
//                                   degrees.  If you are going straight, it|
//                                   defaults to inches                     |
//--------------------------------------------------------------------------|
