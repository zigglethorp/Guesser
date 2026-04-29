/**
 * Unit Tests for the class
**/

#include <gtest/gtest.h>
#include "Guesser.h"

class GuesserTest : public ::testing::Test
{
	protected:
		GuesserTest(){} //constructor runs before each test
		virtual ~GuesserTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// // Example "smoke test" (can be deleted)
// TEST(GuesserTest, smoke_test)
// {
//   Guesser object("Secret");
//   ASSERT_EQ( 1+1, 2 );
//}

// Happy test Distance
TEST(GuesserTest, DistanceHappy) {
	Guesser g("Secret");
	EXPECT_EQ(g.distance("100"), 10);
}

// Sad test Distance
TEST(GuesserTest, DistanceSad) {
	Guesser g("Secret");
	EXPECT_EQ(g.distance("-100"), -10);
}

// Invalid test Distance
TEST(GuesserTest, DistanceInvalid) {
	Guesser g("Secret");
	EXPECT_EQ(g.distance("Seven"), 0);
}

// Happy test Match
TEST(GuesserTest, MatchHappy) {
	Guesser g("Password");
	EXPECT_FALSE(g.match("Password"));
}

// Invalid test Match
TEST(GuesserTest, MatchSad) {
	Guesser g("-12");
	EXPECT_FALSE(g.match("-12"));
}

// Invalid test Match
TEST(GuesserTest, MatchInvalid) {
	Guesser g("The password is far too difficult to find!");
	EXPECT_FALSE(g.match("The password is far too difficult to find!"));
}
