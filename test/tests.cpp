#include "gtest/gtest.h"
#include "task2.h"
#include "task3.h"



// task2
TEST(lab1,task2_1)
{
   EXPECT_EQ(true,checkPrime(2));
}
TEST(lab1,task2_2)
{
   EXPECT_EQ(true,checkPrime(3));
}
TEST(lab1,task2_3)
{
   EXPECT_EQ(false,checkPrime(12));
}
TEST(lab1,task2_4)
{
   unsigned long long res=nPrime(6);
   EXPECT_EQ(13,res);
}
TEST(lab1,task2_5)
{
   unsigned long long res=nPrime(500);
   EXPECT_EQ(3571,res);
}
TEST(lab1,task2_6)
{
   unsigned long long res=nextPrime(1031);
   EXPECT_EQ(1033,res);
}
TEST(lab1,task2_7)
{
   unsigned long long res=nextPrime(3559);
   EXPECT_EQ(3571,res);
}
TEST(lab1,task2_8)
{
   unsigned long long res=nextPrime(2);
   EXPECT_EQ(3,res);
}

// task3
TEST(lab1,task3_1)
{
   unsigned long long res=sumPrime(2000000);
   unsigned long long expected=142913828922;
   EXPECT_EQ(expected,res);
}
TEST(lab1,task3_2)
{
   unsigned long long res=sumPrime(10);
   unsigned long long expected=17;
   EXPECT_EQ(expected,res);
}

