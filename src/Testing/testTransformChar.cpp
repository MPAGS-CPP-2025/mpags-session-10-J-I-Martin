//! Unit Tests for transformChar function
#include "gtest/gtest.h"

#include "TransformChar.hpp"

TEST(AlphaNumeric, CharactersAreUppercased)
{
    const std::string upper{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const std::string lower{"abcdefghijklmnopqrstuvwxyz"};

    for (std::size_t i{0}; i < upper.size(); ++i) {
        EXPECT_EQ(transformChar(lower[i]), std::string{upper[i]});
    }
}

TEST(AlphaNumeric, DigitsAreTransliterated)
{
    FAIL() << "Test not yet implemented";
}

TEST(AlphaNumeric, SpecialCharactersAreRemoved)
{
    FAIL() << "Test not yet implemented";
}
