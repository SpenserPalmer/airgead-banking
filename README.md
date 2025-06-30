# airgead-banking
SNHU CS-210 Final Project - C++ coursework

## Project summary
This project is a C++ console application that will calculate the value of an investment into the future, both with and without additional monthly deposits.
The goal of this is to help the users see how consistent investing can grow their savings based on interest rate, time period and contribution. 
It solves the problem of manually calculating compound interest scenarios for any financial planning.

## What I did well
I implemented an organized object oriented design that uses a custom "investment" class that handles the data and logic cleanly. I also separated the user input 
and display logic from the main calculations, which in turn made the code easier to test and handle. My code follows good style guidelines and includes comments
to explain any important functions/decisions.

## What could be improved
I could make the user experience better by adding some sort of input validation which would prevent a crash from any bad data, like letters instead of numbers. I
could also change the program to allow a user to run multiple simulations in one sitting, rather than having to restart the program. Finally, I could log outputs
to a file for any recordkeeping needs or for analysis further than what is seen.

## Challenges I faced
The hardest part in my opinion was figuring out how to properly calculatye the compound interest monthly, while keeping the logic both clean and readable. I referenced
documentation and tested values manually just to make sure the calculations were working right. Understanding the formulas and using them accurately in code was truly
an important learning moment to me. 

## Transferable skills
From this project, I now have knowledge and experience in:
  - C++ classes and object oriented designs
  - Handling user input and output
  - Financial modeling with compound interest
  - Structuring modular programs with reusable code

These skills will definitely be helpful for any future coursework, internships, or job projects that would involve some sort of simulations, finance, or any kind of
user facing tools.

## Code quality
To make 100% sure the code is both maintainable and readable, I tried my best to use clear variable names, consistent formatting across the code, and comments that 
were meaningful and helpful throughout the program. The structure of this program in particular allows for easy updates, for example, switching the interest calculation
to daily instead of monthly would need minimal changes. I also kept the logic inside the class to better encapsulation
