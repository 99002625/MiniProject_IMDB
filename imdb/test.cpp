
#include "imdb.h"
#include "imdb.cpp"
#include "imdbDB.h"
#include "imdbDB.cpp"
#include <gtest/gtest.h>

TEST(IMDB, DefaulConstructor) {

    IMDB m1;
    
    EXPECT_EQ("",m1.getCountry());
    EXPECT_EQ("",m1.getCreator());
    EXPECT_EQ("",m1.getGenre());
    EXPECT_EQ("",m1.getRating());
    EXPECT_EQ("",m1.getTitle());
    EXPECT_EQ("",m1.getVoteCount());
    EXPECT_EQ("",m1.getYear());
    
}


TEST(IMDB, ParameterConstructor) {

    IMDB m1("xyz","raj","Ind","2020","Horror","5.5","150");

    
    EXPECT_EQ("Ind",m1.getCountry());
    EXPECT_EQ("raj",m1.getCreator());
    EXPECT_EQ("Horror",m1.getGenre());
    EXPECT_EQ("5.5",m1.getRating());
    EXPECT_EQ("xyz",m1.getTitle());
    EXPECT_EQ("150",m1.getVoteCount());
    EXPECT_EQ("2020",m1.getYear());
    
}



int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
