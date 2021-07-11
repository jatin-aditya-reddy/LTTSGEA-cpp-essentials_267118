#include "Complex.cpp"
#include <gtest/gtest.h>

TEST(Complex,DefaultConstructor) {
    Complex a1;
    EXPECT_EQ(0,a1.getreal());
    EXPECT_EQ(0,a1.getimag());


}




TEST(Complex,DisplayTest) {
    Complex a1(10,20);
    std::string ExpectedOut="10,20\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
