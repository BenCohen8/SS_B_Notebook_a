#include "doctest.h"
#include "Notebook.hpp"
#include <string.h>
using namespace std;
using namespace ariel;
    TEST_CASE("Good input") {//test1
    Notebook n;
	CHECK(n.read(1,1,1,Direction::Horizontal,4)=="____");
    };
    TEST_CASE("Good input") {//test2
    Notebook n;
    n.write(1,1,2,Direction::Vertical,"abc");
	CHECK(n.read(1,1,1,Direction::Vertical,3)=="_ab");
    };
    TEST_CASE("Good input") {//test3
    Notebook n;
    n.write(1,1,1,Direction::Horizontal,"hello world");
    n.erase(1,1,3,Direction::Horizontal,3);
	CHECK(n.read(1,1,1,Direction::Horizontal,11)=="he~~~ world");
    };
    TEST_CASE("Good input") {//test4
    Notebook n;
        n.write(10,10,1,Direction::Horizontal,"hello");
    n.erase(10,9,3,Direction::Vertical,3);
	CHECK(n.read(10,8,3,Direction::Vertical,3)=="_~~");
    };
    TEST_CASE("Good input") {//test5
    Notebook n;
        n.erase(10,9,3,Direction::Vertical,3);
	    CHECK(n.read(10,9,3,Direction::Vertical,4)=="~~~_");
    };
    TEST_CASE("Good input") {//test6
    Notebook n;
    n.write(10,10,1,Direction::Horizontal,"hello");
    n.write(10,11,1,Direction::Vertical,"world");
    n.erase(10,12,1,Direction::Horizontal,3);


	CHECK(n.read(10,10,1,Direction::Vertical,4)=="hw~r");
    };
    TEST_CASE("Good input") {//test7
    Notebook n;
    n.write(10,10,1,Direction::Horizontal,"123");
    n.write(10,10,5,Direction::Horizontal,"hello");


	CHECK(n.read(19,10,2,Direction::Horizontal,4)=="23_h");
    };
    TEST_CASE("Good input") {//test8
    Notebook n;
	CHECK(1==1);
    };
    TEST_CASE("Good input") {//test9
    Notebook n;
	CHECK(1==1);
    };
    TEST_CASE("Good input") {//test10
    Notebook n;
	CHECK(1==1);
    };
                                    
TEST_CASE("Bad input") {//test 11
    ariel::Notebook n;
    CHECK_THROWS(
    n.write(1, 1, 100,Direction::Horizontal, "123"));
}
TEST_CASE("Bad input") {//test 12
    ariel::Notebook n;

    CHECK_THROWS(
        n.write(20,20,20,Direction::Horizontal,"xyy");
        n.write(20,20,19,Direction::Horizontal,"xyy");

    );
}
TEST_CASE("Bad input") {//test 13
    ariel::Notebook n;
    CHECK_THROWS(
        n.write(23,22,21,Direction::Horizontal,"xyy");
        n.write(23,21,21,Direction::Vertical,"xyy");
    );
}
TEST_CASE("Bad input") {//test 14
    ariel::Notebook n;

    CHECK_THROWS(  
        n.write(23,21,100,Direction::Vertical,"xyy");
);
}
TEST_CASE("Bad input") {//test 15
    ariel::Notebook n;

    CHECK_THROWS(
        n.write(23,21,95,Direction::Vertical,"12345");

    );
}
TEST_CASE("Bad input") {//test 16
    ariel::Notebook n;

    CHECK_THROWS(
        n.write(23,21,21,Direction::Vertical,"xyy");
        n.erase(23,21,21,Direction::Vertical,3);
        n.write(23,19,21,Direction::Vertical,"xyy");
    );
}
TEST_CASE("Bad input") {//test 17
    ariel::Notebook n;

    CHECK_THROWS(
                n.write(1,1,1,Direction::Vertical,"xyy");
                n.write(1,1,1,Direction::Horizontal,"xyy");
  

    );
}
TEST_CASE("Bad input") {//test 18
    ariel::Notebook n;

    CHECK_THROWS(
        n.write(1,1,1,Direction::Vertical,"\n");

    );
}
TEST_CASE("Bad input") {//test 19
    ariel::Notebook n;

    CHECK_THROWS(
        n.write(1,1,1,Direction::Vertical,"cdvfer\t");

    );
}
TEST_CASE("Bad input") {//test 20
    ariel::Notebook n;

    CHECK_THROWS(
        n.write(1,1,1,Direction::Vertical,"1233 cd\r");

    );
}
