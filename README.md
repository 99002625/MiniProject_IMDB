# MiniProject_IMDB

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/3e48ba8086c7497ab88447f8cff60729)](https://app.codacy.com/gh/99002625/MiniProject_IMDB?utm_source=github.com&utm_medium=referral&utm_content=99002625/MiniProject_IMDB&utm_campaign=Badge_Grade_Settings)    
![Unit Test](https://github.com/99002625/MiniProject_IMDB/workflows/Unit%20Test/badge.svg)
![cppcheck-action](https://github.com/99002625/MiniProject_IMDB/workflows/cppcheck-action/badge.svg?branch=master)
![Valgrind](https://github.com/99002625/MiniProject_IMDB/workflows/Valgrind/badge.svg?branch=master)
![C/C++ CI](https://github.com/99002625/MiniProject_IMDB/workflows/C/C++%20CI/badge.svg?branch=master)

/* # Design
* Base_Class_Movies
    * DataMembes :
        *   Title
        *   Creators
        *   Country   
        *   Year
        *   Genre
    

    * Derived_Class_IMDB
        * Data Members
            * rating
            * totalVotes
`

# Commands

g++ test.cpp imdb.cpp movies.cpp -c
g++ test.o imdb.o movies.o -lgtest -lgtest_main -lpthread -o out
./out

g++ testDB.cpp imdbDB.cpp imdb.cpp movies.cpp -c
g++ testDB.o imdbDB.o imdb.o movies.o -o out
g++ testDB.cpp imdbDB.cpp imdb.cpp movies.cpp -o out */ 
