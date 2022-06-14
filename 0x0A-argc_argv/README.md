This is a README file for project 0x0B. C - argc, argv

There are five mandatory tasks and one advanced task in this project

Task 0 - It ain't what they call you, it's what you answer to
 - Write a program that prints it's name, followed by a new line.
  - If you rename the program, it will print the new name without recompiling
  - You should not remove the path before the name of the program

Task 1 - Silence is argument carried out by other means
 - Write a program that prints the number of arguments passed into it
  - Your program should print a number, followed by a new line

Task 2 - The best argument agains democracy is a five-minute conversation
with the average voter
 - Write a program that prints all arguments it receives
  - All arguments should be printed, including the first one
  - Only print one argument per line, ending with a new line

Task 3 - Neither irony nor sarcasm is argument
 - Write a program that multiplies two numbers
  - Your program should print the result of the multiplication
  - You can assume that the two numbers and result can be stored as int
  - If the program does not receive two arguments, print 'Error' return 1

Task 4 - To infinity and beyond
 - Write a program that adds positive numbers
  - Print the result, followed by a new line
  - If no number is passed to the program, print 0, followed by new line
  - If one number contains symbols that are not digits, print 'Error' return 1
  - You can assume that numbers and sum can be stored as int

--------------------ADVANCED TASK--------------------

Task 5 - Minimal Number of Coins for Change
 - Write a program that prints the minimum number of coins to make change for
 an amount of money.
  - Usage ./change cents
  - Where cnets is the amount of cents you need to give back
  - If the number of arguments passed to your program is not exactly 1
  print 'Error' and return 1
  - You should use atoi to parse the parameter passed to your program
  - If the number passed as the argument is negative, print 0
  - You can use an unlimited number of coins of values 25, 10, 5, 2, 1
  