#include <gtest/gtest.h>
#include <templated.h>
#include <first.h>
#include <second.h>

class Templated_Tests : public ::testing::Test
{
public:
	void SetUp()
	{
	}

	void TearDown()
	{
	}
};


TEST_F( Templated_Tests, Run_It_With_First_Second )
{

	Templated::First first;
	Templated::Second second;

	Templated::generate( first, second );
}
