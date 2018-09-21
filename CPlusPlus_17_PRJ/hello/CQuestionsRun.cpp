//
// Created by Administrator on 9/20/2018.
//

#include <iostream>

#include "CQuestionsRun.h"

#include "questions/000/CQ000.h"
#include "questions/001/CQ001.h"
#include "questions/002/CQ002.h"
#include "questions/003/CQ003.h"



CQuestionsRun::CQuestionsRun() {
    std::cout << __func__ << std::endl;
}

CQuestionsRun::~CQuestionsRun() {
    std::cout << __func__ << std::endl;
}

void CQuestionsRun::Run() {
    size_t question_no = 3;

    switch (question_no) {
        case 0: {
            CQuestionsTest::CQ000 *tester = new CQuestionsTest::CQ000();
            tester->Run();
            delete (tester);
        }

            break;

        case 1: {
            CQuestionsTest::CQ001 *tester = new CQuestionsTest::CQ001();
            tester->Run();
            delete (tester);
        }

            break;

        case 2: {
            CQuestionsTest::CQ002 *tester = new CQuestionsTest::CQ002();
            tester->Run();
            delete (tester);
        }

            break;
        case 3: {
            CQuestionsTest::CQ003 *tester = new CQuestionsTest::CQ003();
            tester->Run();
            delete (tester);
        }

            break;

        default:
            break;
    }

}
