//
// Created by Administrator on 9/20/2018.
//

#ifndef HELLO_CQ002_H
#define HELLO_CQ002_H

#include <string>

namespace CQuestionsTest {
    class CQ002 {
    public:
        CQ002();
        virtual ~CQ002();
        void Run();
    private:
        void PrintLine() const;
        std::string _description;
    };
}



#endif //HELLO_CQ002_H
