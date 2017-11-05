
# Cistern-sensor

A sensor system to control water volume

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

- Library NewPing.h Get the lastest version here [github](https://github.com/PaulStoffregen/NewPing.git)

- Arduino (UNO, Mega, Nano, etc)

- HC-SR04 Ultrasonic Sensor

![Photo](https://img1.banggood.com/thumb/view/oaupload/banggood/images/CD/2E/707cc57b-02f0-8189-5420-d96fccb486b1.jpg)

- LED Bargraph with 10 LEDs

![Photo](http://www.learningaboutelectronics.com/images/10-segment-LED-bar-graph.png)

- 10 resistors from 100 to 470 ohms

### Installing

Change the height of your cistern at constants EMPTY and FULL
In this case we have 1,70m when it is empty and 10 cm when it is full

```
#define EMPTY 170 // Height to measure the capacity when is empty in centimeters
#define FULL 10 // Height to measure the capacity when is full in centimeters

```

I used 13 and 12 pin to send and receive from ultrasonic sensor and define the max distance using 2,00 meters
```

#define TRIGGER_PIN  13  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     12  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

```

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Leandro Lopes** - *Initial work* - [LeLopes](https://github.com/leandrol3/)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Now we can control our water volume in a cheap way ;)

