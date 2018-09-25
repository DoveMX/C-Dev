//
// Created by Administrator on 9/21/2018.
//

#ifndef HELLO_CQ005_H
#define HELLO_CQ005_H

#include <string>

namespace CQuestionsTest {
    class CQ005 {
    public:
        CQ005();
        virtual ~CQ005();
        void Run();

    private:
        void PrintLine() const;
        std::string _description;

    };
}




#endif //HELLO_CQ005_H
