## M2_DigitalThermometer

## Introduction

A digital thermometer is used to verify a smart temperature transmitter under flowing conditions and a successful calibration of the smart temperature transmitter. Portable electronic thermometers (PETs) are designed to measure temperature in a RTD-type thermowell using a thermistor or RTD probe. A thermometer has two important elements: a temperature sensor in which some change occurs with a change in temperature; and some means of converting this change into a numerical value they can be used to take temperature readings in the mouth, rectum, or armpit. When assessing digital thermometer readings, keep in mind that armpit (axillary) temperature runs about ½ to 1°F (0.6°C) cooler than oral readings.

## Components used

## Atmega328

The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family (later Microchip Technology acquired Atmel in 2016). It has a modified Harvard architecture 8-bit RISC processor core.
The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.

## Temperature Sensor(LM35)

LM35 is an integrated analog temperature sensor whose electrical output is proportional to Degree Centigrade. LM35 Sensor does not require any external calibration or trimming to provide typical accuracies. The LM35’s low output impedance, linear output, and precise inherent calibration make interfacing to readout or control circuitry especially easy.

Linear + 10-mV/°C Scale Factor
0.5°C Ensured Accuracy (at 25°C)
Rated for Full −55°C to 150°C Range
Low-Cost
Operates From 4 V to 30 V
Less Than 60-μA Current Drain
Non-Linearity Only ±¼°C Typical

## LCD Display

An LCD (Liquid Crystal Display) screen is an electronic display module and has a wide range of applications. A 16x2 LCD display is very basic module and is very commonly used in various devices and circuits. A 16x2 LCD means it can display 16 characters per line and there are 2 such lines. In this LCD each character is displayed in 5x7 pixel matrix. The 16 x 2 intelligent alphanumeric dot matrix display is capable of displaying 224 different characters and symbols. This LCD has two registers, namely, Command and Data.

## Capacitor

capacitor, device for storing electrical energy, consisting of two conductors in close proximity and insulated from each other. A simple example of such a storage device is the parallel-plate capacitor. If positive charges with total charge +Q are deposited on one of the conductors and an equal amount of negative charge −Q is deposited on the second conductor, the capacitor is said to have a charge Q.

## Voltage Supply

The supply voltage (which is actually provided using large numbers of power and ground pins) is used to power the FPGA's internal logic.The DC power supply used for powering this circuit must be well regulated and free from any sort of noise.

## Wires

wires used to connect components

## High level Requirements

| ID     |       Description      |     Status            |
|------- | ---------------------- | --------------------- |
| HLRO1 | Measuring the temperature | Implemented |
| HLRO2 | Detecting | Implemented |
| HLRO3 | Displaying the information on lcd | Implemented |

## Low Level Requirements

| ID      | Description      | Status     |
|---------|------------------|------------|
| LLRO1 | Mrasuring in infinite time as we want | Implemented |
| LLRO2 | Displaying in real time | Implemented |

## Hardware

| Components | Quantity |
|------------|----------|
| Atmega328  |    1     |
| LM35       |    1     |
| Display    |    1     |
| Volatage supply |  1  |
| Cpacitor   |     1    |

## Software

| Component | Purpose |
|-----------|---------|
| SimulIde  | Circuit design and simulation |
| Arduino IDE | hex file |
| VS Code   |  Makefile |

## SWOT Analysis

Strength:

 1) In the digital thermometer we easily detect out temperature.
 2) Digital thermometer to measure different temperature ranges between -200 and 1800ºC.
 3) Measurement of temperature is done in many different industry sectors.
 
 Weakness:
 
 1) Submerging a conventional thermometer in warm, soapy water is simple, but doing it with a digital thermometer is more complicated.
 2) Some digital thermometers are more accurate than others.

Opportunity:

1) By presenting an in-depth analysis of the latest trends driving this vertical trend in different regions, Decisive Markets Insights.

Threats:

Thermometer can be dangerous if the glass breaks and the mercury is not cleaned up properly. The mercury will evaporate and can contaminate the surrounding air and become toxic to humans and wildlife.

## Desigining

Structural Diagram
![Screenshot 2022-04-19 235056](https://user-images.githubusercontent.com/102678112/164306543-cc159417-9a0a-4dc2-9513-23c9ce387dbc.png)

Block Diagram

![image](https://user-images.githubusercontent.com/102678112/164307349-6f443fbd-dda2-4acb-be2b-8ec911b0bbc5.png)


Flow Chart
![Screenshot 2022-04-20 001421](https://user-images.githubusercontent.com/102678112/164306756-104dfde4-53ba-4568-87a4-74802c3c8ab1.png)

