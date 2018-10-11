//
// Created by Administrator on 10/5/2018.
//

#include <iostream>
#include <pthread.h>
#include <atomic>
#include <thread>
#include "CQ010.h"


namespace CQuestionsTest {
    namespace CQ010Private {
        //TODO: Code here

        static long long total  = 0;
        pthread_mutex_t  m = PTHREAD_MUTEX_INITIALIZER;

        void* func(void*) {
            long long i;
            for(int i = 0; i < 100000000LL; i++) {
                pthread_mutex_lock(&m);
                total += 1;
                pthread_mutex_unlock(&m);
            }

            return nullptr;
        }

        int runMain() {
            pthread_t thread1, thread2;
            if (pthread_create(&thread1, nullptr, &func, nullptr)){
                throw;
            }
            if (pthread_create(&thread2, nullptr, &func, nullptr)){
                throw;
            }
            pthread_join(thread1, nullptr);
            pthread_join(thread2, nullptr);
            std::cout << "Total = " << total << std::endl;
            return 0;
        }

        //// 定义C++11 的原子操作核心代码
        std::atomic_llong at_total {0};

        void thread_func(int) {
            for (long long i= 0;  i< 100000000LL; ++i) {
                at_total += i;
            }
        }

        int runMain_atomic() {
            std::thread t1(thread_func, 0);
            std::thread t2(thread_func, 0);

            t1.join();
            t2.join();

            std::cout << "Atomic Total = " << at_total << std::endl;
            return 0;
        }

    };

    /////////////////////////////////////////////////////////
    //// 实现 CQ010
    /////////////////////////////////////////////////////////
    CQ010::CQ010() : _className(__func__), _description("原子操作测试") {
        std::cout << _className << "\n" << _description << std::endl;
    }

    CQ010::~CQ010() {
        std::cout << _className << "::" << __func__ << std::endl;
    }

    void CQ010::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }

    void CQ010::Run() {
        std::cout << _className << "::" << __func__ << std::endl;
        ////////////////////////////////////////////////////////
        //TODO: Code here
        CQ010Private::runMain();
        CQ010Private::runMain_atomic();


        ////////////////////////////////////////////////////////
        PrintLine();
    }
}
