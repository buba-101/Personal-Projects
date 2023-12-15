# <p align="center">This is Circuitry 1.0</p>

This C++ program represents a basic circuit simulator that allows users to interactively build a circuit by adding resistors in series or parallel. 
The program calculates and displays the total voltage, total current, and total resistance of the circuit.

## Usage

1. Compile the program using a C++ compiler:

    ```bash
    g++ Circuitry.cpp -o Circuitry
    ```

2. Run the executable:

    ```bash
    ./Circuitry
    ```

3. Follow the on-screen prompts to input the voltage and initial resistance, and then choose options to add resistors in series or parallel.

4. Build the circuit when done to see the calculated total voltage, current, and resistance.

## Features

- Add resistors in series or parallel to manipulate the circuit.
- Calculate and display total voltage, current, and resistance.
- Interactive command-line interface.

## Example

```plaintext
[Basic Circuitry]
What is the voltage of the source being used: 10
What is the initial resistance of the circuit: 5

1) Add a resistor in series.
2) Add a resistor in parallel.
3) Build this circuit.

What would you like to do with this circuit: 1
How many resistors will be in series: 2
Resistor 1 value: 3
Resistor 2 value: 2

1) Add a resistor in series.
2) Add a resistor in parallel.
3) Build this circuit.

What would you like to do with this circuit: 2
How many resistors will be in series, parallel to the resistor: 2
Resistor 1 value: 4
Resistor 2 value: 6

1) Add a resistor in series.
2) Add a resistor in parallel.
3) Build this circuit.

What would you like to do with this circuit: 3
The total voltage is 10V.
The total current in this circuit is 1A.
The total Resistance in this circuit is 2.4 ohms.


