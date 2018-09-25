//
// Created by Administrator on 9/20/2018.
//

#include <iostream>

#include "CQuestionsRun.h"
#include "questions/000/CQ000.h"
#include "questions/001/CQ001.h"
#include "questions/002/CQ002.h"
#include "questions/003/CQ003.h"
#include "questions/004/CQ004.h"
#include "questions/005/CQ005.h"
#include "questions/006/CQ006.h"

#ifndef CALL_TESTER
#define CALL_TESTER(n_id) \
    CQuestionsTest::CQ##n_id* tester##n_id = new CQuestionsTest::CQ##n_id(); \
    tester##n_id->Run(); \
    delete (tester##n_id);
#endif


CQuestionsRun::CQuestionsRun() {
    std::cout << __func__ << std::endl;
}

CQuestionsRun::~CQuestionsRun() {
    std::cout << __func__ << std::endl;
}

void CQuestionsRun::Run() {
    CALL_TESTER(006);
}
