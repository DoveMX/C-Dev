//
// Created by Administrator on 9/20/2018.
//

#ifndef HELLO_CQ003_H
#define HELLO_CQ003_H


#include <string>

namespace CQuestionsTest {
    class CQ003 {
    public:
        CQ003();
        virtual ~CQ003();
        void Run();

    private:
        void PrintLine() const;
        std::string _description;

    };
}



#endif //HELLO_CQ003_H
