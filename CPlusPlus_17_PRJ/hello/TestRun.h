//
// Created by Administrator on 9/6/2018.
//

#ifndef HELLO_TESTRUN_H
#define HELLO_TESTRUN_H


class TestRun {
public:
    TestRun();
    ~TestRun();

    void Run();
public:

    int run_memoery_new();
    int run_const_ptr_test();
    void run_assert_test();
    void run_test_uml_code();
    void run_stl_test_code();

    void simple_stl_code() const;

    void istream_iterator_code_test() const;
};


#endif //HELLO_TESTRUN_H
