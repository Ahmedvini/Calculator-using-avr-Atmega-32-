# AVR-Based Calculator (Atmega32)

This project is a simple calculator built using the Atmega32 microcontroller, developed during my internship at **AMIT**. It performs basic arithmetic operations (addition, subtraction, multiplication, and division) with a **16x2 LCD display** for output and a **keypad interface** for input. This project demonstrates embedded C programming and microcontroller interfacing.

## Features
- Arithmetic operations: Addition, Subtraction, Multiplication, Division
- LCD display for output
- Keypad for input

## Project Structure

### MCAL (Microcontroller Abstraction Layer)
- **`DIO_interface.h`**: Public functions and macros for interacting with Digital Input/Output (DIO) pins.
- **`DIO_program.c`**: Implements DIO pin configuration and management.
- **`DIO_register.h`**: Registers for DIO operations on the Atmega32.

### HAL (Hardware Abstraction Layer)

#### Keypad (KPD) Module
- **`KPD_config.h`**: Keypad configuration (rows, columns, pins).
- **`KPD_interface.h`**: Public interface for keypad functions.
- **`KPD_program.c`**: Keypad scanning and key detection logic.

#### LCD Module
- **`LCD_config.h`**: LCD configuration settings (control and data pins).
- **`LCD_interface.h`**: Public interface for LCD functions.
- **`LCD_private.h`**: Private functions and definitions for LCD.
- **`LCD_program.c`**: Functions for controlling the LCD and managing display output.

### Utilities
- **`BIT_MATH.h`**: Bit manipulation macros (set, clear, toggle, get).
- **`STD_TYPES.h`**: Standard data types (`u8`, `u16`, etc.) for portability.

## Requirements

### Hardware
- Atmega32 Microcontroller
- 16x2 LCD Display
- Keypad
- Breadboard, jumpers, and power supply

### Software
- **Atmel Studio** for development.
- **Proteus** for simulation (optional).
- **USBasp** or **AVR programmer** for flashing.

## Setup

1. Clone the repository:
   ```bash
   git clone https://github.com/Ahmedvini/Calculator-using-avr-Atmega-32-.git
