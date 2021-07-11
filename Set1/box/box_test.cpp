

#include "box.cpp"
#include <gtest/gtest.h>

TEST(Box, Dconstruct) {
    Box B1;
    EXPECT_EQ(0,B1.getlength());
    EXPECT_EQ(0,B1.getbreadth());
    EXPECT_EQ(0,B1.getheight());
    EXPECT_EQ(0,B1.volume());

}
TEST(Box, Parameterconstruct) {
    Box B1(30,30,30);
  EXPECT_EQ(30, B1.getlength());
  EXPECT_EQ(30, B1.getbreadth());
  EXPECT_EQ(30, B1.getheight());

}
TEST(Box, Copyconstruct) {
    Box B1(30,30,30);
    Box B2(B1);
    EXPECT_EQ(30, B2.getlength());
  EXPECT_EQ(30, B2.getbreadth());
  EXPECT_EQ(30, B2.getheight());


}
TEST(Box,VolumeTest)
{
    Box B1(30,30,30);
    EXPECT_EQ(27000, B1.volume());

}
TEST(Box,DisplayTest) {
    Box B1(30,30,30);
    std::string ExpectedOut="30,30,30\n";
    testing::internal::CaptureStdout();
    B1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
