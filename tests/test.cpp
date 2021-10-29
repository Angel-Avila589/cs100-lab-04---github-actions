#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, twoPositive){
         Rectangle test(5, 7);
	 EXPECT_EQ(35, test.area());
}

TEST(ConstructorTest, heightNegative){
	 Rectangle test(5, -6);
	 ASSERT_EXIT(test.area(), ::testing::ExitedWithCode(1), "Error Negative Height");
}

TEST(ConstructorTest, widthNegative){
	 Rectangle test(-4, 7);
	 ASSERT_EXIT(test.area(), ::testing::ExitedWithCode(1), "Error Negative Width");
}
TEST(ConstructorTest, bothNegative){
	 Rectangle test(-4, -2);
	 ASSERT_EXIT(test.area(), ::testing::ExitedWithCode(1),"Error Both Height and Width Are Negatives");
}

TEST(AreaTest, twoPos){
	  Rectangle test;
	  test.set_width(3);
	  test.set_height(7);
	  EXPECT_EQ(21, test.area());
}

TEST(AreaTest, widthNeg){
	 Rectangle test;
	 test.set_width(-4);
	 test.set_height(8);
	 ASSERT_EXIT(test.area(), ::testing::ExitedWithCode(1), "Error Negative Width");
}
TEST(AreaTest, heightNeg){
	 Rectangle test;
	 test.set_width(3);
	 test.set_height(-2);
	 ASSERT_EXIT(test.area(), ::testing::ExitedWithCode(1), "Error Negative Height");
}

TEST(AreaTest, bothNeg){
	 Rectangle test;
	 test.set_width(-6);
	 test.set_height(-7);
	 ASSERT_EXIT(test.area(), ::testing::ExitedWithCode(1), "Error Both Height And Width Are Negatives");
}

TEST(PerimeterTest, bothPos){
	  Rectangle test;
	  test.set_width(8);
	  test.set_height(2);
	  EXPECT_EQ(20, test.perimeter());
}
TEST(PerimeterTest, heightPos){
	  Rectangle test;
	  test.set_width(-3);
	  test.set_height(2);
	  ASSERT_EXIT(test.perimeter(), ::testing::ExitedWithCode(1), "Error Negative Width");
}
TEST(PerimeterTest, widthPos){
	  Rectangle test;
	  test.set_width(8);
	  test.set_height(-1);
	  ASSERT_EXIT(test.perimeter(), ::testing::ExitedWithCode(1), "Error Negative Height");
}
TEST(PerimeterTest, nonePos){
	  Rectangle test;
	  test.set_width(-2);
	  test.set_height(-9);
	  ASSERT_EXIT(test.perimeter(), ::testing::ExitedWithCode(1), "Error Both Height And Width Are Negatives");
}

int main(int argc,char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
