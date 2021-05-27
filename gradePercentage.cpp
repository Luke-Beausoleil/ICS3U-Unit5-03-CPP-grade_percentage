// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by { Luke Beausoleil
// Created on { May 2021
// this program determines percentage from a level grade

#include <iostream>
#include <string>

int Percentage(std::string grade) {
    // this function assigns level grades a percentage
    int mark;
    if (grade == "R") {
        mark = 25;
    } else if (grade == "1-") {
        mark = 51;
    } else if (grade == "1") {
        mark = 55;
    } else if (grade == "1+") {
        mark = 58;
    } else if (grade == "2-") {
        mark = 61;
    } else if (grade == "2") {
        mark = 65;
    } else if (grade == "2+") {
        mark = 68;
    } else if (grade == "3-") {
        mark = 71;
    } else if (grade == "3") {
        mark = 75;
    } else if (grade == "3+") {
        mark = 78;
    } else if (grade == "4-") {
        mark = 83;
    } else if (grade == "4") {
        mark = 90;
    } else if (grade == "4+") {
        mark = 97;
    } else {
        mark = -1;
    }

    return mark;
}

main() {
    // this function receives input and calls another function
    // variable & input
    std::string grade;
    std::cout << "Enter a level grade (i.e. R, 2, 3-, 4+, etc): ";
    std::cin >> grade;
    // call function
    if (Percentage(grade) != -1) {
        std::cout << "The middle mark is " << Percentage(grade) << "%\nDone."
            << std::endl;
    } else {
        std::cout << "Invalid grade\nDone" << std::endl;
    }
}
