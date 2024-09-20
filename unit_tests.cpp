//
// Created by nhild on 2024-09-19.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"

constexpr int EMPTY_STACK_VALUE = -1;

TEST_CASE("A new stack is empty", "testTag1") {
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("A new stack is full", "testTag2") {
    MyStack tester;
    for(int i = 0; i < 10; i++) {
        tester.push(i);
    }
    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == true);
}

TEST_CASE("Push elements and check top", "testTag3") {
    MyStack tester;
    tester.push(3);
    REQUIRE(tester.top() == 3);
    tester.push(281);
    REQUIRE(tester.top() == 281);
}

TEST_CASE("Pop elements from stack", "testTag4") {
    MyStack tester;
    tester.push(18);
    tester.push(6);
    tester.push(7);
    tester.pop();
    REQUIRE(tester.top() ==6);
    tester.pop();
    REQUIRE(tester.top() == 18);
    REQUIRE(tester.empty() == false);
    tester.pop();
    REQUIRE(tester.empty() == true);
}

TEST_CASE("Push until full and try pushing another element", "testTag5") {
    MyStack tester;
    for(int i = 0; i < 10; i++) {
        tester.push(i);
    }
    REQUIRE(tester.full() == true);
    REQUIRE(tester.push(11) == false);
}

TEST_CASE("Pop empty stack then add values", "testTag6") {
    MyStack tester;
    tester.pop();
    REQUIRE(tester.empty() == true);
    tester.push(42);
    REQUIRE(tester.top() == 42);
    REQUIRE(tester.empty() == false);
}

TEST_CASE("Print stack", "testTag7") {
    MyStack tester;
    for(int i = 0; i < 12; i++) {
        tester.push(i);
    }
    std::string expectedOutput = "0 1 2 3 4 5 6 7 8 9 ";
    REQUIRE(tester.print() == expectedOutput);
}

TEST_CASE("Check Top on an empty stack", "testTag8") {
    MyStack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.top() == EMPTY_STACK_VALUE);
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("Push more than 10 items", "testTag9") {
    MyStack tester;
    for(int i = 0; i < 10; i++) {
        REQUIRE(tester.push(i) == true);
    }
    REQUIRE(tester.full() == true);
    REQUIRE(tester.push(10) == false);
    REQUIRE(tester.full() == true);
}

TEST_CASE("Push X values, pop Y values, check top for expected value", "testTag10") {
    MyStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.pop();
    REQUIRE(tester.top() == 2);
    tester.pop();
    REQUIRE(tester.top() == 1);
}

TEST_CASE("Print empty stack", "testTag11") {
    MyStack tester;
    REQUIRE(tester.print() == "Stack is Empty!");
}
