//
// Created by Administrator on 10/5/2018.
//

#ifndef HELLO_CQ010_H
#define HELLO_CQ010_H

#include <iostream>
#include <string>


namespace CQuestionsTest {
    namespace CQ010Private {
        //TODO: Code here
    };

    class CQ010 {
    public:
        CQ010();

        virtual ~CQ010();

        void Run();

    private:
        void PrintLine() const;

        std::string _description;
        std::string _className;
    };
}


#endif //HELLO_CQ010_H
