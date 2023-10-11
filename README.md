
# Obstacle Avoidance Robot
![obstacle_avoider](https://github.com/gautam132002/obstacle-avoider-robot/assets/68372911/360717ca-1876-437c-ac79-49004a90fce3)

This project is an obstacle avoidance robot designed to detect and navigate around obstacles in its path. The robot utilizes an Arduino board, an ultrasonic sensor, and motor drivers to achieve this functionality. Below, you will find an explanation of the principle of operation, a table displaying the connections, and a list of the parts used.

## Principle of Operation

The obstacle avoidance robot operates on the principle of using an ultrasonic sensor to measure the distance to objects in its path. When an obstacle is detected within a certain range (defined by `maxDistance`), the robot changes its direction to avoid the obstacle.

1. The ultrasonic sensor emits an ultrasonic wave (sound) and waits for the sound to bounce back off an object.
2. The time taken for the sound wave to return is measured, and the distance to the obstacle is calculated using the speed of sound.
3. If the calculated distance is less than `maxDistance`, the robot determines that an obstacle is in front of it.
4. When an obstacle is detected, the robot turns in one direction to avoid the obstacle. Otherwise, it moves forward.

## Connections

Here is a table displaying the connections for this obstacle avoidance robot:

| Component          | Arduino Pin | Description                 |
|--------------------|------------|-----------------------------|
| Ultrasonic Sensor  | Trigger (2) | Trigger pin of the sensor |
|                    | Echo (3)    | Echo pin of the sensor    |
| Motor Driver (M1)  | M1A (4)    | Motor 1, terminal A        |
|                    | M1B (5)    | Motor 1, terminal B        |
| Motor Driver (M2)  | M2A (6)    | Motor 2, terminal A        |
|                    | M2B (7)    | Motor 2, terminal B        |

Additional Battery Connections:

- Connect the positive terminal of an external battery to the Vin pin of the Arduino to power it.
- Connect the positive terminal of the external battery to the 12V pin of the motor driver.
- Connect the ground (GND) of the external battery to both the GND pin of the motor driver and the GND of the Arduino.
- Connect the VCC pin of the Arduino to the 5V pin of the motor driver to provide 5V power to the Arduino.

## Parts Used

- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensor
- Motor driver (H-bridge)
- DC motors (for M1 and M2)
- Chassis with wheels
- External battery (5v or more)
- Jumper wires
- Breadboard (optional)
- Switch

With these components and the provided code, the robot can autonomously detect obstacles and navigate around them. The ultrasonic sensor measures distances, and the motor driver controls the motors to change the robot's direction based on obstacle proximity.
