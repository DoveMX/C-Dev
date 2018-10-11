//
// Created by Administrator on 10/7/2018.
//

#ifndef HELLO_CQ012_H
#define HELLO_CQ012_H

#include <iostream>
#include <string>


namespace CQuestionsTest {
    namespace CQ012Private {
        //TODO: Code here
    };

    class CQ012 {
    public:
        CQ012();
        virtual ~CQ012();
        void Run();

        static void PrintDescription();

    private:
        void PrintLine() const;

        std::string _className;
    };
}


#endif //HELLO_CQ012_H
