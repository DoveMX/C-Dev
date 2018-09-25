//
// Created by Administrator on 9/24/2018.
//

#include <cstring>
#include "CQ006.h"

namespace CQuestionsTest {

    CQ006::CQ006():_description("演示几个算法问题") {
        std::cout << __func__ << "\n" << _description <<std::endl;
    }

    CQ006::~CQ006() {
        std::cout << __func__ << std::endl;
    }

    void FindSecondMaxNum(int data[], int count) {
        std::cout << __func__ << "\n" << "写一个函数找出一个整数数组中，第二大的数 （microsoft）" <<std::endl;

        const int MINNUMBER = -32767;
        int max_number = data[0];
        int sec_max = MINNUMBER;
        for (int i = 1; i < count; i++) {
            if (data[i] > max_number) {
                sec_max = max_number;
                max_number = data[i];
            } else {
                if (data[i] > sec_max) {
                    sec_max = data[i];
                }
            }
        }

        //
        std::cout << "SEC_NUMBER = " << sec_max << std::endl;
    }


    /**
     * @brief 获取KMP最重要的Next匹配表的算法
     * @param P
     * @param next
     */
    void MakeKMP_Next(const char P[], int next[]) {
        int q, k;
        int m = strlen(P);
        next[0] = 0;

        for (q = 1, k = 0; q < m; ++q) {
            while(k > 0 && P[q] != P[k]) {
                k = next[k-1];
            }

            if (P[q] == P[k]) {
                k++;
            }
            next[q] = k;
        }
    }

    /**
     * @brief 核心KMP算法
     * @param T
     * @param P
     * @param next
     * @return
     */
    int Core_KMP(const char T[], const char P[], int next[]) {
        int n, m;
        int i, q;
        n = strlen(T);
        m = strlen(P);
        MakeKMP_Next(P, next);

        for(i = 0, q = 0; i < n; ++i) {
            while(q > 0 && P[q] != T[i]) {
                q = next[q -1];
            }
            if (P[q] == T[i]) {
                q++;
            }
            if (q == m) {
                printf("Pattern occurs with shift:%d\n",(i-m+1));
            }
        }

        return 0;
    }

    int FindSubStrinPosgByKMP() {
        std::cout << __func__ << "\n" << "写一个在一个字符串(n)中寻找一个子串(m)第一个位置的函数" <<std::endl;

        int next[20] = {0};
        char T[] = "ababxbababcadfdsss";
        char P[] = "abcdabd";
        printf("T = %s\n",T);
        printf("P = %s\n",P );
        Core_KMP(T,P,next);

        for(int i = 0; i < strlen(P); ++i) {
            printf("%d ",next[i]);
        }
        printf("\n");

        return 0;
    }



    void CQ006::Run() {
        std::cout << __func__ << std::endl;
        int num_data[5] = {2938,438328,5994,323,9328};
        FindSecondMaxNum(num_data, 5);
        PrintLine();
        FindSubStrinPosgByKMP();
        PrintLine();
    }

    void CQ006::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }


}