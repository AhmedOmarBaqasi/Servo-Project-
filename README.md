# 4-Servo Motors Control with Arduino (Sweep & Hold)

This project demonstrates the simultaneous control of four micro servo motors using an Arduino Uno. The system is programmed to perform two sequential tasks utilizing non-blocking timing controls (`millis()`):

1. **Sweep Action:** All four servo motors rotate back and forth continuously for exactly 2 seconds.
2. **Hold Action:** After the 2-second period expires, all motors immediately stop and lock their position at a fixed 90-degree angle.

## Features
- Non-blocking timing (`millis()`) instead of blocking `delay()`.
- Synchronized control of 4 servos.
- Designed for Tinkercad simulation and real-world hardware.

## Components
- 1x Arduino Uno R3
- 4x Micro Servo Motors (SG90)
- 1x Half-size Breadboard
- Jumper Wires

## Circuit Connection
| Component | Servo Pin | Arduino Pin |
| :--- | :--- | :--- |
| Servo 1 | Signal | Digital Pin 3 (PWM) |
| Servo 2 | Signal | Digital Pin 5 (PWM) |
| Servo 3 | Signal | Digital Pin 6 (PWM) |
| Servo 4 | Signal | Digital Pin 9 (PWM) |

*Note: Ensure all servos share a common Ground (GND) and Power (5V) with the Arduino.*

## Code
The project uses the standard `<Servo.h>` library. You can find the source code in `code/servo_control.ino`.

## How to Run
1. Open the project in [Tinkercad Circuits](https://www.tinkercad.com/).
2. Copy the code from `servo_control.ino` into the Code block.
3. Start Simulation.

## License
This project is open-source and available under the MIT License.
