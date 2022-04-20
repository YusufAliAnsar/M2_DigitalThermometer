## M2_DigitalThermometer

## Introduction

A digital thermometer is used to verify a smart temperature transmitter under flowing conditions and a successful calibration of the smart temperature transmitter. Portable electronic thermometers (PETs) are designed to measure temperature in a RTD-type thermowell using a thermistor or RTD probe. A thermometer has two important elements: a temperature sensor in which some change occurs with a change in temperature; and some means of converting this change into a numerical value they can be used to take temperature readings in the mouth, rectum, or armpit. When assessing digital thermometer readings, keep in mind that armpit (axillary) temperature runs about ½ to 1°F (0.6°C) cooler than oral readings.

## Components used

## Atmega328

![image](https://user-images.githubusercontent.com/102678112/163954644-fcb0cd45-8c13-4809-91fd-c79474c7d336.png)


The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family (later Microchip Technology acquired Atmel in 2016). It has a modified Harvard architecture 8-bit RISC processor core.
The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.

## Temperature Sensor(LM35)

![image](https://user-images.githubusercontent.com/102678112/163954781-af85ea33-358f-4e8f-a099-df31c9057288.png)


LM35 is an integrated analog temperature sensor whose electrical output is proportional to Degree Centigrade. LM35 Sensor does not require any external calibration or trimming to provide typical accuracies. The LM35’s low output impedance, linear output, and precise inherent calibration make interfacing to readout or control circuitry especially easy.

Linear + 10-mV/°C Scale Factor
0.5°C Ensured Accuracy (at 25°C)
Rated for Full −55°C to 150°C Range
Low-Cost
Operates From 4 V to 30 V
Less Than 60-μA Current Drain
Non-Linearity Only ±¼°C Typical

## LCD Display

![image](https://user-images.githubusercontent.com/102678112/163954896-690cc3ce-3336-4f74-bf88-a95944379a80.png)

An LCD (Liquid Crystal Display) screen is an electronic display module and has a wide range of applications. A 16x2 LCD display is very basic module and is very commonly used in various devices and circuits. A 16x2 LCD means it can display 16 characters per line and there are 2 such lines. In this LCD each character is displayed in 5x7 pixel matrix. The 16 x 2 intelligent alphanumeric dot matrix display is capable of displaying 224 different characters and symbols. This LCD has two registers, namely, Command and Data.

## Capacitor

![image](https://user-images.githubusercontent.com/102678112/163955023-1caa14ed-371c-4bac-b4ef-a695a6be76c0.png)


capacitor, device for storing electrical energy, consisting of two conductors in close proximity and insulated from each other. A simple example of such a storage device is the parallel-plate capacitor. If positive charges with total charge +Q are deposited on one of the conductors and an equal amount of negative charge −Q is deposited on the second conductor, the capacitor is said to have a charge Q.

## Voltage Supply

![image](https://user-images.githubusercontent.com/102678112/163955168-4d3bde3a-40a1-4006-95cc-99fdf05407f6.png)


The supply voltage (which is actually provided using large numbers of power and ground pins) is used to power the FPGA's internal logic.The DC power supply used for powering this circuit must be well regulated and free from any sort of noise.

## Wires

wires used to connect components

## High level Requirements

| ID    | Description          | Status              |
|-------|----------------------|---------------------|
| HLRO1 | Measuring the temperature | Implemented |
| HLRO2 | Detecting | Implemented |
| HLRO3 | Displaying the information on lcd | Implemented |

## Low Level Requirements

| ID      | Description      | Status     |
|---------|------------------|------------|
| LLRO1 | Mrasuring in infinite time as we want | Implemented |
| LLRO2 | Displaying in real time | Implemented |

## 4W's & 1H

## What:
It displaying a numerical values and it is used to verify a smart temperature transmitter under flowing conditions and a successful calibration of the smart temperature transmitter.

## Why:

digital thermometer is not only faster on body temperature measurement results providing, but also better accuracy results to us. Based on the tested records of the experiments, the accuracy of a digital thermometer could be 0.1℃.

## When:

A typical inexpensive electronic ear thermometer for home use has a displayed resolution of 0.1 °C, but a stated accuracy within ±0.2 °C (±0.35 °F) when new

## Where:

Digital thermometers work by using heat sensors that determine body temperature. They can be used to take temperature readings in the mouth, rectum, or armpit

## How:

They are devices to measure temperature readings through electrical signals

## References

Previous project 
Taking help from Youtube
GeekforGeeks
