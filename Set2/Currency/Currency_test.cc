#include "currency.h"
#include <gtest/gtest.h>
TEST(Currency,DisplayTest) {
    Currency a1(10,20);
    std::string ExpectedOut="10.20";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(Currency, DefaultConstructor)
{
	Currency c(20,95);
	Currency c1(11);
	EXPECT_EQ(0, c1.rupees());
	EXPECT_EQ(20,c.rupees());
	Currency c2(10, 99);
	c2++;
	EXPECT_EQ(100, c2.paise());
}
