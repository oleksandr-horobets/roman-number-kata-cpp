#ifndef ROMAN_NUMBER_HPP_
#define ROMAN_NUMBER_HPP_

#include <string>

inline
int roman_digit(char digit) {
    switch(digit) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;

        default: return 0;
    }
}

inline
int roman_number(std::string roman) {
    int result = 0;

    for(int i = 0; i < roman.size(); i++) {
	if(i > 0) {
            int previous = roman_digit(roman[i - 1]);
	    int current = roman_digit(roman[i]);

	    if(current > previous) {
	    	result += current - 2 * previous;
	    } else {
		result += current;
	    }
	} else {
            result += roman_digit(roman[i]);
	}
    }

    return result;
}

#endif

