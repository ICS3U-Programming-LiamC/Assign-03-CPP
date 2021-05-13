// Copyright (c) Year Your Name All rights reserved.
//
// Created by: Liam Csiffary
// Date: April 30, 2021
// This program calculates the volume and surface area
// of a dodecahedron

// inporting libraries
#include <iostream>

// defnining all the variables
float salary;
float years_worked;
float bonus;
float total;
char inputRestart = 'y';

int restarter() {
    // ask for the base salary
    std::cout << "How much is your base salary: ";
    std::cin >> salary;

    // ask for how many years of work
    std::cout << "How many years have you worked there: ";
    std::cin >> years_worked;

    // if years worked there is more than 5 they get a bonus
    if (years_worked >= 5) {
        // calculate the bonus and total salary
        bonus = salary * 0.05;
        total = bonus + salary;

        // tell them what their bonus and total is
        std::cout << "\nYour bonus is $" << bonus << std::endl;
        std::cout << "Your total pay check with the bonus is $"
        << total << "\n" << std::endl;

        // depending on how much their bonus is
        // tell them what kind of vacation they can afford
        // only on the bonus
        if ((bonus >= 1274) && (bonus < 1659)) {
            std::cout << "With a bonus of $" << bonus +
            "\nyou can afford a 1" +
            "week trip to Greece for 1 person";

        // if more than $1659 and less than $1882
        } else if ((bonus >= 1659) && (bonus < 1882)) {
            std::cout << "With a bonus of $" << bonus +
            "\nyou can afford a 1" +
            "week trip to Japan for 1 person";

        // if more than $1882 and less than $3765
        } else if ((bonus >= 1882) && (bonus < 3765)) {
            std::cout << "With a bonus of $" << bonus +
            "\nyou can afford a 1 week trip to Hawaii for 1 person";

        // if more than $3765 and less than $5000
        } else if ((bonus >= 3765) && (bonus < 5000)) {
            std::cout << "With a bonus of $" << bonus +
            "\nyou can afford a 1" +
            "week trip to Hawaii for 2 person";

        // if their bonus is more than $5000 tell them to consider
        // giving some of it away
        } else if (bonus >= 5000) {
            std::cout << "\nWow that's a lot of money, please consider" +
            "\ndonating some of that to a charity :)";
        }

    // if they do not qualify for the bonus
    } else {
        std::cout << "Sorry you don't qualify for the bonus:(" << std::endl;
    }
}

// initial running of the program
int main() {
    // ask if they'd like to start the main program
    std::cout << "\nDo you want to calculate a bonus? (y/n): ";
    std::cin >> inputRestart;

    // is user inputs y then it starts/restarts the program
    if (inputRestart == 'y') {
        restarter();

    // is user inputs Y then it starts/restarts the program
    } else if (inputRestart == 'Y') {
        restarter();

    // is user inputs anything else then it stops the program
    } else {
        std::cout << "stopped";
    }
}
