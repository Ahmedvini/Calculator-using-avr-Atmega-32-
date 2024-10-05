# AVR-Based Calculator (Atmega32)

This project is a simple calculator built using the Atmega32 microcontroller, developed during my internship at **AMIT**. It performs basic arithmetic operations (addition, subtraction, multiplication, and division) with a **16x2 LCD display** for output and a **keypad interface** for input. This project demonstrates embedded C programming and microcontroller interfacing.

## Features
- Arithmetic operations: Addition, Subtraction, Multiplication, Division
- LCD display for output
- Keypad for input

## Requirements

### Hardware
- Atmega32 Microcontroller
- 16x2 LCD Display
- Keypad
- Breadboard, jumpers, and power supply

### Software
- **Atmel Studio** for development.
- **USBasp** or **AVR programmer** for flashing.

## Setup

1. Open in Atmel Studio, compile the source code (`CALC.c`), and generate the `.hex` file.

2. Use an AVR programmer to flash the `Calc.hex` to the Atmega32 microcontroller.

3. Connect the LCD and keypad according to the wiring in `LCD_config.h` and `KPD_config.h`.

4. Power the circuit, input numbers and operations via the keypad, and view results on the LCD.
   
## Proteus Simulation

For those using Proteus for simulation, here’s the circuit connection used for this project. Refer to the image below for detailed wiring of the LCD, keypad, and Atmega32 in Proteus.

![Proteus Connection Diagram](Calculator-using-avr-Atmega-32-/Calc/proteus/Calculator.png)
## Future Enhancements
- Add complex operations (square root, exponentiation).
- Memory functions for storing results.
- Graphical LCD or OLED display.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments
Thanks to **AMIT** and **Orange Digital Center (ODC)** for their support during my internship, helping me gain hands-on experience in embedded systems.
