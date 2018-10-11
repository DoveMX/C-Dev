//
// Created by Administrator on 9/28/2018.
//

#ifndef HELLO_CQ009_H
#define HELLO_CQ009_H

#include <iostream>
#include <string>


namespace CQuestionsTest {
    class CQ009 {
    public:
        CQ009();

        virtual ~CQ009();

        void Run();

    private:
        void PrintLine() const;

        std::string _description;
        std::string _className;
    };
}


#endif //HELLO_CQ009_H
