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
	unsigned int d;
	EXPECT_EQ(d.distance(100), 10);
}

// Sad test Distance
TEST(GuesserTest, DistanceSad) {
	unsigned int d;
	EXPECT_EQ(d.distance("-100"), -10);
}

// Invalid test Distance
TEST(GuesserTest, DistanceInvalid) {
	unsigned int d;
	EXPECT_EQ(d.distance("Seven"), 0);
}

// Happy test Match
TEST(GuesserTest, MatchHappy) {
	match object m;
	EXPECT_FALSE(m.match("password"));
}

// Invalid test Match
TEST(GuesserTest, MatchSad) {
	match object m;
	EXPECT_FALSE(m.match("-12"));
}

// Invalid test Match
TEST(GuesserTest, MatchInvalid) {
	match object m;
	EXPECT_FALSE(m.match("The password is far too difficult to find!"));
}
