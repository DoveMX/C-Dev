//
// Created by Administrator on 9/20/2018.
//

#ifndef HELLO_CQ004_H
#define HELLO_CQ004_H

#include <string>

namespace CQuestionsTest {
    class CQ004 {
    public:
        CQ004();
        virtual ~CQ004();
        void Run();

    private:
        void PrintLine() const;
        std::string _description;

    };
}


#endif //HELLO_CQ004_H
