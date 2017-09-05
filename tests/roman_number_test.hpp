#ifndef ROMAN_NUMBER_TEST_HPP_
#define ROMAN_NUMBER_TEST_HPP_

#include "gtest/gtest.h"
#include "roman_number.hpp"

TEST(RomanNumberTest, converts_I_to_1) {
    EXPECT_EQ(1, roman_number("I"));
}

TEST(RomanNumberTest, converts_V_to_5) {
    EXPECT_EQ(5, roman_number("V"));
}

TEST(RomanNumberTest, converts_X_to_10) {
    EXPECT_EQ(10, roman_number("X"));
}

TEST(RomanNumberTest, converts_L_to_50) {
    EXPECT_EQ(50, roman_number("L"));
}

TEST(RomanNumberTest, converts_C_to_100) {
    EXPECT_EQ(100, roman_number("C"));
}

TEST(RomanNumberTest, converts_D_to_500) {
    EXPECT_EQ(500, roman_number("D"));
}

TEST(RomanNumberTest, converts_M_to_1000) {
    EXPECT_EQ(1000, roman_number("M"));
}

TEST(RomanNumberTest, converts_II_to_2) {
    EXPECT_EQ(2, roman_number("II"));
}

TEST(RomanNumberTest, converts_IV_to_4) {
    EXPECT_EQ(4, roman_number("IV"));
}

TEST(RomanNumberTest, converts_VI_to_6) {
    EXPECT_EQ(6, roman_number("VI"));
}

TEST(RomanNumberTest, converts_XIX_to_19) {
    EXPECT_EQ(19, roman_number("XIX"));
}

TEST(RomanNumberTest, converts_XXI_to_21) {
    EXPECT_EQ(21, roman_number("XXI"));
}

TEST(RomanNumberTest, converts_MCMIII_to_1903) {
    EXPECT_EQ(1903, roman_number("MCMIII"));
}

#endif

