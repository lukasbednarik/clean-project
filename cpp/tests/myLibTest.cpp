#include "myLib.h"
#include "3rdParty/catch.hpp"
#include "3rdParty/fakeit.hpp"

using namespace fakeit;

TEST_CASE("FizzBuzz function returns a value", "[fizzbuzz]") {
    // This is common initialization for all tests
    // Some code may go here :)

    SECTION("FizzBuzz 8 returns empty string") {
        // And some code may go here
        std::string str;
        CHECK(FizzBuzz(8) == str);
    }

    // One TEST_CASE can have several sections
    SECTION("FizzBuzz 9 returns empty string") {
        std::string str;
        CHECK(FizzBuzz(9) == str);
    }
}
