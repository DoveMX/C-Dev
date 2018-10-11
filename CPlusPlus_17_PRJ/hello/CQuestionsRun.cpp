//
// Created by Administrator on 9/20/2018.
//

#include <iostream>

#include "CQuestionsRun.h"
//#include "questions/000/CQ000.h"
//#include "questions/001/CQ001.h"
//#include "questions/002/CQ002.h"
//#include "questions/003/CQ003.h"
//#include "questions/004/CQ004.h"
//#include "questions/005/CQ005.h"
//#include "questions/006/CQ006.h"
//#include "questions/007/CQ007.h"
//#include "questions/008/CQ008.h"
//#include "questions/009/CQ009.h"
//#include "questions/010/CQ010.h"
//#include "questions/011/CQ011.h"
#include "questions/012/CQ012.h"

#ifndef CALL_TESTER
#define CALL_TESTER(n_id) \
    CQuestionsTest::CQ##n_id* tester##n_id = new CQuestionsTest::CQ##n_id(); \
    tester##n_id->Run(); \
    delete (tester##n_id);
#endif

#ifndef CALL_PRINT_DESCRIPTION_FOR_TESTER
#define CALL_PRINT_DESCRIPTION_FOR_TESTER(n_id) \
    std::cout <<"---> 编号:" #n_id << ":\t"; \
    CQuestionsTest::CQ##n_id::PrintDescription();
#endif


CQuestionsRun::CQuestionsRun() {
    std::cout << __func__ << std::endl;
}

CQuestionsRun::~CQuestionsRun() {
    std::cout << __func__ << std::endl;
}

void CQuestionsRun::Run() {
    CALL_PRINT_DESCRIPTION_FOR_TESTER(012);
    CALL_TESTER(012);
}
