/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

// ASSERT_TRUE(my.has_mixed_case("Password")) // takes one parameter
// ASSERT_FALSE

TEST(PasswordTest, is_empty)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, isMixed)
{
	Password my;
	// int actual = my.has_mixed_case("Password");
	ASSERT_TRUE(my.has_mixed_case("Ab"));
}

TEST(PasswordTest, isLowerall)
{
	Password all;
	ASSERT_FALSE(all.has_mixed_case("lower"));
}

TEST(PasswordTest, hasLowerUpper) 
{
	Password L_and_U;
	ASSERT_TRUE(L_and_U.has_mixed_case("Password"));
}