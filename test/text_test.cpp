#include "../include/utils/text.hpp"
#include "gtest/gtest.h"

TEST(TextTests, ToUpper)
{
	EXPECT_EQ(utils::to_upper("hello"), "HELLO");
}

TEST(TextTests, ToUpperWithNumber)
{
	EXPECT_EQ(utils::to_upper("hello123"), "HELLO123");
}

TEST(TextTests, ToUpperEmptyString)
{
	EXPECT_EQ(utils::to_upper(""), "");
}
TEST(TextTests, ToUpperOnlyNumbers)
{
	EXPECT_EQ(utils::to_upper("12309"), "12309");
}
TEST(TextTests, ToUpperOneCharacter)
{
	EXPECT_EQ(utils::to_upper("a"), "A");
}
