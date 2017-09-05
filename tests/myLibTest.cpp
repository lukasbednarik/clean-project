#include "myLib.h"
#include "3rdParty/catch.hpp"
#include "3rdParty/fakeit.hpp"

using namespace fakeit;

TEST_CASE("Test functions", "[example]") {
    SECTION("Test function return true") {
        CHECK(SimpleTestFunction());
    }
}
