//
// Created by Administrator on 9/24/2018.
//

#ifndef HELLO_CQ006_H
#define HELLO_CQ006_H

#include <iostream>

namespace CQuestionsTest {
    class CQ006 {
    public:
        CQ006();
        virtual ~CQ006();
        void Run();

    private:
        void PrintLine() const;

        std::string _description;

    };
}




#endif //HELLO_CQ006_H
