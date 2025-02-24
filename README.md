# Simple Calculator in C

This is a simple calculator program written in C. The calculator supports basic arithmetic operations such as addition, subtraction, multiplication, division, modulus, and exponentiation. The program features a menu-driven interface that prompts the user to select an operation, and it handles invalid inputs gracefully.

## Features

- **Addition**: Adds two numbers.
- **Subtraction**: Subtracts the second number from the first.
- **Multiplication**: Multiplies two numbers.
- **Division**: Divides the first number by the second, with error handling for division by zero.
- **Modulus**: Returns the remainder when dividing two integers, with error handling for division by zero.
- **Exponentiation**: Raises the first number to the power of the second number.

## How to Use

1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/yourusername/simple-calculator.git
    ```

2. Navigate to the project directory:
    ```bash
    cd simple-calculator
    ```

3. Compile the C program using `gcc`:
    ```bash
    gcc calculator.c -o calculator -lm
    ```

4. Run the program:
    ```bash
    ./calculator
    ```

5. Follow the on-screen menu to select an operation and enter the numbers.

## Example Usage

After starting the program, you will see a menu like this:


- After selecting an operation, the program will ask for two numbers and display the result of the chosen operation.



## Error Handling

- **Division by Zero**: The program checks for division by zero and prints an appropriate error message.
- **Modulus by Zero**: If modulus is selected and the second number is zero, an error message will be displayed.
- **Invalid Choice**: The program will display an error message if the user selects an invalid option from the menu.

## Contributing

Feel free to fork this project, make changes, and submit pull requests. All contributions are welcome.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

- This project is built with standard C libraries: `stdio.h` for input/output operations, `math.h` for mathematical operations (e.g., power).
