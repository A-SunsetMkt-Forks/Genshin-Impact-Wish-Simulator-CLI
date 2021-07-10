#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include <cstring>
constexpr auto ULTRAPOS = 437580000;
#define casesx( kind ){   if (kind < 16 ) { std::cout << "!!!!!*****"; }\
                    else if (kind < 51 ) { std::cout << "!!****"; }\
                    else if (kind < 64 ) { std::cout << "***"; }\
                    else if (kind == 72 || kind == 80 || kind == 81 || kind == 83 || kind == 84 || kind == 85 || kind == 89 || kind == 92 || kind == 93 || kind == 94 || kind == 95 || kind == 96 || kind == 97 ) { std::cout << "!!****"; }\
                    else if (kind < 100 ) { std::cout << "!!!!!*****"; }\
                    else {}\
                }
#define output_string() {if (y_print == 1) {std::cout << countx + 1 << "(" << five_star_assurance_number << ") ";\
                    casesx( kind )\
                    std::cout << pname[kind - 1] << endl; }\
                    pcount[kind - 1] ++;\
                    wishes_number--;\
                    countx++;\
                    five_star_assurance_number++;\
                    four_star_assurance_number++;\
                    }
#define luckcpy() {if (countx == 10) {\
                        luckiest = luck;\
                        for (int templuck = 0; templuck < 10; templuck++) {\
                            luckiestlocation[templuck] = lucklocation[templuck];\
                            luckiestsublocation[templuck] = lucksublocation[templuck];\
                            luckiestkind[templuck] = luckkind[templuck];\
                        }\
                    }\
                    if (luck > luckiest) {\
                        luckiest = luck;\
                        for (int templuck = 0; templuck < 10; templuck++) {\
                            luckiestlocation[templuck] = lucklocation[templuck];\
                            luckiestsublocation[templuck] = lucksublocation[templuck];\
                            luckiestkind[templuck] = luckkind[templuck];\
                        }\
                    }\
                }
#define luckget() {for (int templuck = 0; templuck < 9; templuck++) {\
                        lucklocation[templuck] = lucklocation[templuck + 1];\
                        lucksublocation[templuck] = lucksublocation[templuck + 1];\
                        luckkind[templuck] = luckkind[templuck + 1];\
                        luckstar[templuck] = luckstar[templuck + 1];\
                        lucktype[templuck] = lucktype[templuck + 1];\
                    }\
                    lucklocation[9] = countx;\
                    lucksublocation[9] = (long long int) five_star_assurance_number - 1;\
                    luckkind[9] = kind;\
                    luckstar[9] = star;\
                    luck = 0;\
                    lucktype[9] = type;\
                }
#define I_5() {star = 5;\
                five_count++;\
                ave_fives += five_star_assurance_number;\
                if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }\
                if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }\
                five_star_assurance_number = 0;\
                if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }\
                else if (temp2 < (unsigned long long int) ULTRAPOS / 2) {\
                    type = 1;\
                    five_count_c++;\
                    kind = up_five;\
                    five_star_guarantee_number = 0;\
                }\
                else {\
                    type = 2;\
                    five_count_c++;\
                    kind = rspick(nup_five_c, 5);\
                    if (five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;\
                }\
            }
#define I_4() {star = 4;\
                four_count++;\
                four_star_assurance_number = 0;\
                if (four_star_guarantee_number == 1) {\
                    type = 1;\
                    four_count_c++;\
                    unmet4_c = 0;\
                    kind = rspick(up_four_g, 3);\
                    four_star_guarantee_number = 0;\
                }\
                else if (temp2 < (unsigned long long int) ULTRAPOS / 2) {\
                    type = 1;\
                    four_count_c++;\
                    unmet4_c = 0;\
                    kind = rspick(up_four_g, 3);\
                    four_star_guarantee_number = 0;\
                }\
                else {\
                    if (unmet4_c < 18 && unmet4_w < 18) {\
                        if (temp2 > (unsigned long long int) 3 * ULTRAPOS / 4 - 1) {\
                            type = 2;\
                            four_count_c++;\
                            unmet4_c = 0;\
                            kind = rspick(nup_four_c, size_nup_four_c);\
                            if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;\
                        }\
                        else {\
                            type = 3;\
                            four_count_w++;\
                            unmet4_w = 0;\
                            kind = rspick(nup_four_w, size_nup_four_w);\
                            four_star_guarantee_number = 1;\
                        }\
                    }\
                    else if (unmet4_w > 17) {\
                        if (temp2 > (unsigned long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {\
                            type = 2;\
                            four_count_c++;\
                            unmet4_c = 0;\
                            kind = rspick(nup_four_c, size_nup_four_c);\
                            if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;\
                        }\
                        else {\
                            type = 3;\
                            four_count_w++;\
                            unmet4_w = 0;\
                            kind = rspick(nup_four_w, size_nup_four_w);\
                            four_star_guarantee_number = 1;\
                        }\
                    }\
                    else {\
                        if (temp2 > (unsigned long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {\
                            type = 3;\
                            four_count_w++;\
                            unmet4_w = 0;\
                            kind = rspick(nup_four_w, size_nup_four_w);\
                            four_star_guarantee_number = 1;\
                        }\
                        else {\
                            type = 2;\
                            four_count_c++;\
                            unmet4_c = 0;\
                            kind = rspick(nup_four_c, size_nup_four_c);\
                            if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;\
                        }\
                    }\
                }\
            }
#define II_5() {star = 5;\
                    five_count++;\
                    ave_fives += five_star_assurance_number;\
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }\
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }\
                    five_star_assurance_number = 0;\
                    if (fate_weapon != 0 && fate_points == 2) {\
                        type = 1;\
                        five_count_w++;\
                        kind = up_five_g[fate_weapon - 1];\
                        fate_points = 0;\
                        five_star_guarantee_number = 0;\
                    }\
                    else if (five_star_guarantee_number == 1) {\
                        type = 1;\
                        five_count_w++;\
                        kind = rspick(up_five_g, 2);\
                        fate_points ++;\
                        five_star_guarantee_number = 0;\
                    }\
                    else if (temp2 < (unsigned long long int) ULTRAPOS / 4 * 3) {\
                        type = 1;\
                        five_count_w++;\
                        kind = rspick(up_five_g, 2);\
                        fate_points ++;\
                        five_star_guarantee_number = 0;\
                    }\
                    else {\
                        type = 2;\
                        five_count_w++;\
                        kind = rspick(nup_five_w, 10);\
                        fate_points ++;\
                        if ((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;\
                    }\
                }
#define II_4() {star = 4;\
                four_count++;\
                four_star_assurance_number = 0;\
                if (four_star_guarantee_number == 1) {\
                    type = 1;\
                    four_count_w++;\
                    unmet4_c = 0;\
                    kind = rspick(up_four_g, 5);\
                    four_star_guarantee_number = 0;\
                }\
                else if (temp2 < (unsigned long long int) ULTRAPOS / 4 * 3) {\
                    type = 1;\
                    four_count_w++;\
                    unmet4_c = 0;\
                    kind = rspick(up_four_g, 5);\
                    four_star_guarantee_number = 0;\
                }\
                    else {\
                        if (unmet4_c < 15 && unmet4_w < 15) {\
                            if (temp2 > (unsigned long long int) 7 * ULTRAPOS / 8 - 1) {\
                                type = 2;\
                                four_count_c++;\
                                unmet4_c = 0;\
                                kind = rspick(nup_four_c, size_nup_four_c);\
                                four_star_guarantee_number = 1;\
                            }\
                            else {\
                                type = 3;\
                                four_count_w++;\
                                unmet4_w = 0;\
                                kind = rspick(nup_four_w, size_nup_four_w);\
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;\
                            }\
                        }\
                        else if (unmet4_w > 14) {\
                            if (temp2 > (unsigned long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {\
                                type = 2;\
                                four_count_c++;\
                                unmet4_c = 0;\
                                kind = rspick(nup_four_c, size_nup_four_c);\
                                four_star_guarantee_number = 1;\
                            }\
                            else {\
                                type = 3;\
                                four_count_w++;\
                                unmet4_w = 0;\
                                kind = rspick(nup_four_w, size_nup_four_w);\
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;\
                            }\
                        }\
                        else {\
                            if (temp2 > (unsigned long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {\
                                type = 3;\
                                four_count_w++;\
                                unmet4_w = 0;\
                                kind = rspick(nup_four_w, size_nup_four_w);\
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;\
                            }\
                            else {\
                                type = 2;\
                                four_count_c++;\
                                unmet4_c = 0;\
                                kind = rspick(nup_four_c, size_nup_four_c);\
                                four_star_guarantee_number = 1;\
                            }\
                        }\
                    }\
                }
#define III_5() {star = 5;\
                five_count++;\
                ave_fives += five_star_assurance_number;\
                if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }\
                if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }\
                five_star_assurance_number = 0;\
                if (unmet5_c < 148 && unmet5_w < 148) {\
                    if (temp2 < (unsigned long long int) ULTRAPOS / 2) {\
                        type = 1;\
                        five_count_c++;\
                        unmet5_c = 0;\
                        kind = rspick(nup_five_c, 5);\
                    }\
                    else {\
                        type = 2;\
                        five_count_w++;\
                        unmet5_w = 0;\
                        kind = rspick(nup_five_w, 10);\
                    }\
                }\
                else if (unmet5_c > 147) {\
                    if (temp2 < (unsigned long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {\
                        type = 1;\
                        five_count_c++;\
                        unmet5_c = 0;\
                        kind = rspick(nup_five_c, 5);\
                    }\
                    else {\
                        type = 2;\
                        five_count_w++;\
                        unmet5_w = 0;\
                        kind = rspick(nup_five_w, 10);\
                    }\
                }\
                else {\
                    if (temp2 < (unsigned long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {\
                        type = 2;\
                        five_count_w++;\
                        unmet5_w = 0;\
                        kind = rspick(nup_five_w, 10);\
                    }\
                    else {\
                        type = 1;\
                        five_count_c++;\
                        unmet5_c = 0;\
                        kind = rspick(nup_five_c, 5);\
                    }\
                }\
            }
#define III_4() {star = 4;\
                four_count++;\
                four_star_assurance_number = 0;\
                if (unmet4_c < 18 && unmet4_w < 18) {\
                    if (temp2 < (unsigned long long int) ULTRAPOS / 2) {\
                        type = 1;\
                        four_count_c++;\
                        unmet4_c = 0;\
                        kind = rspick(nup_four_c, size_nup_four_c);\
                    }\
                    else {\
                        type = 2;\
                        four_count_w++;\
                        unmet4_w = 0;\
                        kind = rspick(nup_four_w, size_nup_four_w);\
                    }\
                }\
                else if (unmet4_c > 17) {\
                    if (temp2 < (unsigned long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {\
                        type = 1;\
                        four_count_c++;\
                        unmet4_c = 0;\
                        kind = rspick(nup_four_c, size_nup_four_c);\
                    }\
                    else {\
                        type = 2;\
                        four_count_w++;\
                        unmet4_w = 0;\
                        kind = rspick(nup_four_w, size_nup_four_w);\
                    }\
                }\
                else {\
                    if (temp2 < (unsigned long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {\
                        type = 2;\
                        four_count_w++;\
                        unmet4_w = 0;\
                        kind = rspick(nup_four_w, size_nup_four_w);\
                    }\
                    else {\
                        type = 1;\
                        four_count_c++;\
                        unmet4_c = 0;\
                        kind = rspick(nup_four_c, size_nup_four_c);\
                    }\
                }\
            }
#define Tri() {star = 3;\
                type = 2;\
                kind = rspick(three_g, 13);\
                }
using namespace std;

unsigned long long int seed = (unsigned long long int) std::chrono::high_resolution_clock::now().time_since_epoch().count();
std::mt19937_64 generator(seed);

string pname[128] = {
                "刻晴",
                "莫娜",
                "七七",
                "迪卢克",
                "琴",
                "阿莫斯之弓",
                "天空之翼",
                "四风原典",
                "天空之卷",
                "和璞鸢",
                "天空之脊",
                "狼的末路",
                "天空之傲",
                "天空之刃",
                "风鹰剑",
                "罗莎莉亚",
                "辛焱",
                "砂糖",
                "迪奥娜",
                "重云",
                "诺艾尔",
                "班尼特",
                "菲谢尔",
                "凝光",
                "行秋",
                "北斗",
                "香菱",
                "安柏",
                "雷泽",
                "凯亚",
                "芭芭拉",
                "丽莎",
                "弓藏",
                "祭礼弓",
                "绝弦",
                "西风猎弓",
                "昭心",
                "祭礼残章",
                "流浪乐章",
                "西风秘典",
                "西风长枪",
                "匣里灭辰",
                "雨裁",
                "祭礼大剑",
                "钟剑",
                "西风大剑",
                "匣里龙吟",
                "祭礼剑",
                "笛剑",
                "西风剑",
                "猎弓",
                "神射手之誓",
                "鸦羽弓",
                "翡玉法球",
                "讨龙英杰谭",
                "魔导绪论",
                "黑缨枪",
                "以理服人",
                "沐浴龙血的剑",
                "铁影阔剑",
                "飞天御剑",
                "黎明神剑",
                "冷刃",
                "温迪",
                "可莉",
                "达达利亚",
                "钟离",
                "阿贝多",
                "甘雨",
                "魈",
                "胡桃",
                "烟绯",
                "优菈",
                "尘世之锁",
                "贯虹之槊",
                "无工之剑",
                "斫峰之刃",
                "磐岩结绿",
                "护摩之杖",
                "千岩古剑",
                "千岩长枪",
                "终末嗟叹之诗",
                "暗巷闪光",
                "暗巷的酒与诗",
                "暗巷猎手",
                "松籁响起之时",
                "枫原万叶",
                "苍古自由之誓",
                "幽夜华尔兹",
                "神里绫华",
                "宵宫",
                "早柚",
                "破魔之弓",
                "天目影打刀",
                "喜多院十文字",
                "桂木斩长正",
                "白辰之环",
                "雾切之回光",
                "飞雷之弦振",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
};

int rspick(int* kindx, int sizekind) {
    int kindout = kindx[1];
    int index = 0;
    unsigned long long int temp221 = 0;
    for (; index < sizekind; index++)
    {
        temp221 = generator() % ((unsigned long long int)(index) + 1);
        if (temp221 < 1)
            kindout = kindx[index];
    }
    return kindout;
}

int main() {
    std::cout << "原神祈愿模拟器（命令行）V2.0.2" << endl 
    << "作者: Jirehlov Research" << endl 
    << "开源于Github: Jirehlov/GenshinImpactWishSimulatorCLI" << endl 
    << "MIT LICENSE" << endl << endl;
    int y_print = 1;
    while (1) {
    enter_chosen_banner:
        int chosen_banner = 0,
        chosen_event = 0,
        four_star_assurance_number = 1,
        five_star_assurance_number = 1,
        five_star_guarantee_number = 0,
        four_star_guarantee_number = 0,
        quit = 1,
        is_noelle = 1,
        max_fives = 1,
        min_fives = 90,
        fate_weapon = 0,
        fate_points = 0,
        luck = 0,
        luckkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        luckstar[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },
        lucktype[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        luckiest = 0,
        luckiestkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        up_five = 0,
        up_five_g[32] = { 0 },
        nup_five_c[32] = { 1, 2, 3, 4, 5 },
        nup_five_w[32] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 },
        up_four_g[64] = { 0 },
        nup_four_c[64] = { 0 },
        nup_four_w[64] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 },
        size_nup_four_c = 1,
        size_nup_four_w = 18,
        three_g[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 },
        five_check[8] = { 127, 127, 127, 127, 127, 127, 127, 127 },
        four_check[8] = { 127, 127, 127, 127, 127, 127, 127, 127 },
        nup_four_cg1[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 },
        nup_four_cg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 },
        nup_four_cg3[14] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 },
        nup_four_cg4[15] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31, 72 },
        nup_four_cg31[14] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 },
        nup_four_cg32[16] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 },
        nup_four_cg33[17] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 },
        nup_four_cg34[18] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 72 };
        long long int countx = 0,
        wishes_number = 0,
        five_count = 0,
        five_count_c = 0,
        five_count_w = 0,
        four_count = 0,
        four_count_c = 0,
        four_count_w = 0,
        ave_fives = 0,
        max_fivesth = 1,
        min_fivesth = 1,
        max_fivecount = 1,
        min_fivecount = 1,
        unmet4_c = 0,
        unmet4_w = 0,
        unmet5_c = 0,
        unmet5_w = 0,
        pcount[128] = { 0 },
        lucklocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        lucksublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestlocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        std::cout << "选择卡池类型:" << endl;
        std::cout << "-1: 退出;" << endl << "1: 角色活动祈愿;" << endl << "2: 武器活动祈愿;" << endl << "3: 常驻祈愿;" << endl << "4: 新手祈愿;" << endl << endl;
        std::cin >> chosen_banner;
        if (cin.fail()) { chosen_banner = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_banner; }
        enter_chosen_event:
        switch (chosen_banner) {
        case -1: goto full_quit;
        case 1: {
            chosen_event = 0;
            std::cout << endl << "选择活动类型:" << endl
                << "-1: 重新选择卡池类型 (将重置记录)" << endl
                << "1: 杯装之诗/20200928-20201018 (温迪, 芭芭拉, 菲谢尔, 香菱)" << endl
                << "2: 闪焰的驻足/20201020-20201110 (可莉, 行秋, 诺艾尔, 砂糖)" << endl
                << "3: 暂别冬都/20201111-20201201 (达达利亚, 迪奥娜, 北斗, 凝光)" << endl
                << "4: 陵薮市朝/20201201-20201222 (钟离, 辛焱, 雷泽, 重云)" << endl
                << "5: 深秘之息/20201223-20210112 (阿贝多, 菲谢尔, 砂糖, 班尼特)" << endl
                << "6: 浮生孰来/20210112-20210202 (甘雨, 香菱, 行秋, 诺艾尔)" << endl
                << "7: 烟火之邀/20210203-20210217 (魈, 迪奥娜, 北斗, 辛焱)" << endl
                << "8: 鱼龙灯昼/20210217-20210302 (刻晴, 凝光, 班尼特, 芭芭拉)" << endl
                << "9: 赤团开时/20210302-20210316 (胡桃, 行秋, 香菱, 重云)" << endl
                << "10: 杯装之诗/20210317-20210406 (温迪, 砂糖, 雷泽, 诺艾尔)" << endl
                << "11: 暂别冬都/20210406-20210427 (达达利亚, 罗莎莉亚, 芭芭拉, 菲谢尔)" << endl
                << "12: 陵薮市朝/20210428-20210518 (钟离, 烟绯, 诺艾尔, 迪奥娜)" << endl
                << "13: 浪涌之瞬/20210518-20210608 (优菈, 辛焱, 行秋, 北斗)" << endl
                << "14: 闪焰的驻足/20210609-20210629 (可莉, 砂糖, 菲谢尔, 芭芭拉)" << endl
                << "15: 叶落风随/20210629-20210720 (枫原万叶, 罗莎莉亚, 班尼特, 雷泽)" << endl
                << "16: 白鹭之庭/20210721- (神里绫华, , , )" << endl
                << "17: 焰色天河/- (宵宫, 早柚, , )" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) { chosen_event = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_event; }
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 18 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "无效活动类型!" << endl << endl; goto enter_chosen_event; }
        } break;
        case 2: {
            chosen_event = 0;
            std::cout << endl << "选择活动类型:" << endl
                << "-1: 重新选择卡池类型 (将重置记录)" << endl
                << "1: 神铸赋形/20200928-20201018 (风鹰剑, 阿莫斯之弓, 笛剑, 钟剑, 流浪乐章, 绝弦, 西风长枪)" << endl
                << "2: 神铸赋形/20201020-20201109 (四风原典, 狼的末路, 祭礼剑, 祭礼弓, 祭礼大剑, 祭礼残章, 匣里灭辰)" << endl
                << "3: 神铸赋形/20201111-20201201 (尘世之锁, 天空之翼, 雨裁, 昭心, 弓藏, 西风长枪, 笛剑)" << endl
                << "4: 神铸赋形/20201201-20201222 (贯虹之槊, 无工之剑, 匣里龙吟, 钟剑, 西风秘典, 西风猎弓, 匣里灭辰)" << endl
                << "5: 神铸赋形/20201223-20210112 (斫峰之刃, 天空之卷, 西风剑, 西风大剑, 西风长枪, 祭礼残章, 绝弦)" << endl
                << "6: 神铸赋形/20210112-20210202 (天空之傲, 阿莫斯之弓, 祭礼剑, 钟剑, 匣里灭辰, 昭心, 西风猎弓)" << endl
                << "7: 神铸赋形/20210203-20210223 (磐岩结绿, 和璞鸢, 弓藏, 昭心, 西风长枪, 祭礼大剑, 笛剑)" << endl
                << "8: 神铸赋形/20210223-20210316 (护摩之杖, 狼的末路, 千岩古剑, 千岩长枪, 祭礼弓, 流浪乐章, 匣里龙吟)" << endl
                << "9: 神铸赋形/20210317-20210406 (终末嗟叹之诗, 天空之刃, 暗巷闪光, 暗巷的酒与诗, 西风大剑, 西风猎弓, 匣里灭辰)" << endl
                << "10: 神铸赋形/20210406-20210427 (天空之翼, 四风原典, 暗巷猎手, 西风剑, 祭礼大剑, 西风秘典, 西风长枪)" << endl
                << "11: 神铸赋形/20210428-20210518 (斫峰之刃, 尘世之锁, 笛剑, 千岩古剑, 千岩长枪, 昭心, 祭礼弓)" << endl
                << "12: 神铸赋形/20210518-20210608 (松籁响起之时, 风鹰剑, 祭礼剑, 雨裁, 匣里灭辰, 祭礼残章, 弓藏)" << endl
                << "13: 神铸赋形/20210609-20210629 (天空之傲, 四风原典, 幽夜华尔兹, 匣里龙吟, 钟剑, 西风长枪, 流浪乐章)" << endl
                << "14: 神铸赋形/20210629-20210720 (苍古自由之誓, 天空之卷, 暗巷闪光, 暗巷的酒与诗, 暗巷猎手, 西风大剑, 匣里灭辰)" << endl
                << "15: 神铸赋形/20210721- (雾切之回光, , , , , , )" << endl
                << "16: 神铸赋形/- (飞雷之弦振, , , , , , )" << endl << endl;
            std::cin >> chosen_event;
            fate_weapon = 0;
            fate_points = 0;
            if (cin.fail()) { chosen_event = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_event; }
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 17 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "无效活动类型!" << endl << endl; goto enter_chosen_event; }
        } break;
        case 3: {
            chosen_event = 0;
            std::cout << endl << "选择活动类型:" << endl
                << "-1: 重新选择卡池类型 (将重置记录)" << endl
                << "1: 奔行世间/20200928-20201222 (公测)" << endl
                << "2: 奔行世间/20201223-20210427 (新增迪奥娜和辛焱)" << endl
                << "3: 奔行世间/20210428-20210608 (新增罗莎莉亚)" << endl
                << "4: 奔行世间/20210609- (新增烟绯)" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) { chosen_event = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_event; }
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 5 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "无效活动类型!" << endl << endl; goto enter_chosen_event; }
        } break;
        case 4: {
            chosen_event = 0;
            std::cout << endl << "选择活动类型:" << endl
                << "-1: 重新选择卡池类型 (将重置记录)" << endl
                << "1: 新手祈愿" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) { chosen_event = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_event; }
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event == 1 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "无效活动类型!" << endl << endl; goto enter_chosen_event; } } break;
        default: {chosen_banner = 0; chosen_event = 0; quit = 1; std::cout << "无效卡池类型!" << endl << endl; goto enter_chosen_banner; }
        }
        if (chosen_banner == 1) {
            switch (chosen_event) {
            case 1: {
                up_five = 64;
                size_nup_four_c = 11;
                int tempg1[3] = { 23, 27, 31 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 23, 27, 31, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 2: {
                up_five = 65;
                size_nup_four_c = 11;
                int tempg1[3] = { 18, 21, 25 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 18, 21, 25, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 3: {
                up_five = 66;
                size_nup_four_c = 11;
                int tempg1[3] = { 19, 24, 26 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 24, 26, 0, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 4: {
                up_five = 67;
                size_nup_four_c = 11;
                int tempg1[3] = { 17, 20, 29 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 20, 29, 0, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 5: {
                up_five = 68;
                size_nup_four_c = 13;
                int tempg1[3] = { 18, 22, 23 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 18, 22, 23, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 6: {
                up_five = 69;
                size_nup_four_c = 13;
                int tempg1[3] = { 21, 25, 27 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 21, 25, 27, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 7: {
                up_five = 70;
                size_nup_four_c = 13;
                int tempg1[3] = { 17, 19, 26 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 17, 19, 26, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 8: {
                up_five = 1;
                size_nup_four_c = 13;
                int tempg1[3] = { 22, 24, 31 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 22, 24, 31, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                five_check[1] = 1;
            } break;
            case 9: {
                up_five = 71;
                size_nup_four_c = 13;
                int tempg1[3] = { 20, 25, 27 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 20, 25, 27, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 10: {
                up_five = 64;
                size_nup_four_c = 13;
                int tempg1[3] = { 18, 21, 29 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 18, 21, 29, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 11: {
                up_five = 66;
                size_nup_four_c = 13;
                int tempg1[3] = { 16, 23, 31 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 23, 31, 0, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 12: {
                up_five = 67;
                size_nup_four_c = 14;
                int tempg1[3] = { 72, 21, 19 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg3 , sizeof(nup_four_cg3));
                int tempg5[8] = { 19, 21, 0, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 13: {
                up_five = 73;
                size_nup_four_c = 14;
                int tempg1[3] = { 17, 25, 26 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg3 , sizeof(nup_four_cg3));
                int tempg5[8] = { 17, 25, 26, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 14: {
                up_five = 65;
                size_nup_four_c = 15;
                int tempg1[3] = { 18, 23, 31 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 18, 23, 31, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 15: {
                up_five = 87;
                size_nup_four_c = 15;
                int tempg1[3] = { 16, 22, 29 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 16, 22, 29, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 16: {
                up_five = 90;
                size_nup_four_c = 15;
                int tempg1[3] = { 16, 22, 29 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 16, 22, 29, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            case 17: {
                up_five = 91;
                size_nup_four_c = 15;
                int tempg1[3] = { 16, 22, 29 };
                memmove( up_four_g , tempg1 , sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 16, 22, 29, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
            } break;
            default:break;
            }
        }
        else if (chosen_banner == 2) {
            switch (chosen_event) {
            case 1: {
                int tempg6[2] = { 6, 15 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 11;
                int tempg1[5] = { 35, 39, 41, 45, 49 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 35, 39, 41, 45, 49, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 6, 15, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 2: {
                int tempg6[2] = { 8, 12 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 11;
                int tempg1[5] = { 34, 38, 42, 44, 50 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 34, 38, 42, 44, 50, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 8, 12, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 3: {
                int tempg6[2] = { 7, 74 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 11;
                int tempg1[5] = { 33, 37, 41, 43, 49 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 33, 37, 41, 43, 49, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 7, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 4: {
                int tempg6[2] = { 75, 76 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 11;
                int tempg1[5] = { 36, 40, 42, 45, 47 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
                int tempg5[8] = { 36, 40, 42, 45, 47, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 5: {
                int tempg6[2] = { 9, 77 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 13;
                int tempg1[5] = { 35, 38, 41, 46, 50 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 35, 38, 41, 46, 50, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 6: {
                int tempg6[2] = { 6, 13 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 13;
                int tempg1[5] = { 36, 37, 42, 45, 48 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 36, 37, 42, 45, 48, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 6, 13, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 7: {
                int tempg6[2] = { 10, 78 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 13;
                int tempg1[5] = { 33, 37, 41, 44, 49 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 33, 37, 41, 44, 49, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 10, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 8: {
                int tempg6[2] = { 12, 79 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 13;
                int tempg1[5] = { 34, 39, 47, 80, 81 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 34, 39, 47, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 12, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 9: {
                int tempg6[2] = { 14, 82 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 13;
                int tempg1[5] = { 36, 42, 46, 83, 84 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 36, 42, 46, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 14, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 10: {
                int tempg6[2] = { 7, 8 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 13;
                int tempg1[5] = { 40, 41, 44, 50, 85 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg2 , sizeof(nup_four_cg2));
                int tempg5[8] = { 40, 41, 44, 50, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 7, 8, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 11: {
                int tempg6[2] = { 74, 77 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 14;
                int tempg1[5] = { 34, 37, 49, 80, 81 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg3 , sizeof(nup_four_cg3));
                int tempg5[8] = { 34, 37, 49, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 12: {
                int tempg6[2] = { 15, 86 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 14;
                int tempg1[5] = { 33, 38, 42, 43, 48 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg3 , sizeof(nup_four_cg3));
                int tempg5[8] = { 33, 38, 42, 43, 48, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 15, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 13: {
                int tempg6[2] = { 8, 13 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 15;
                int tempg1[5] = { 89, 47, 45, 41, 39 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 47, 45, 41, 39, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 8, 13, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 14: {
                int tempg6[2] = { 88, 9 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 15;
                int tempg1[5] = { 83, 84, 85, 46, 42 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 46, 42, 0, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 15: {
                int tempg6[2] = { 98, 9 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 15;
                int tempg1[5] = { 83, 84, 85, 46, 42 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 46, 42, 0, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            case 16: {
                int tempg6[2] = { 99, 9 };
                memmove( up_five_g , tempg6 , sizeof(tempg6));
                size_nup_four_c = 15;
                int tempg1[5] = { 83, 84, 85, 46, 42 };
                memmove( up_four_g , tempg1, sizeof(tempg1));
                memmove( nup_four_c , nup_four_cg4 , sizeof(nup_four_cg4));
                int tempg5[8] = { 46, 42, 0, 0, 0, 0, 0, 0 };
                memmove( four_check , tempg5 , sizeof(tempg5));
                int tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
                memmove( five_check , tempg7, sizeof(tempg7));
            } break;
            default:break;
            }
        }
        else if (chosen_banner == 3) {
            switch (chosen_event) {
            case 1: {
                size_nup_four_c = 14;
                memmove( nup_four_c , nup_four_cg31 , sizeof(nup_four_cg31));
                } break;
            case 2: {
                size_nup_four_c = 16;
                memmove( nup_four_c , nup_four_cg32 , sizeof(nup_four_cg32));
                } break;
            case 3: {
                size_nup_four_c = 17;
                memmove( nup_four_c , nup_four_cg33 , sizeof(nup_four_cg33));
                } break;
            case 4: {
                size_nup_four_c = 18;
                memmove( nup_four_c , nup_four_cg34 , sizeof(nup_four_cg34));
                } break;
            default:break;
            }
        }
        else {
            memmove( nup_four_c , nup_four_cg1 , sizeof(nup_four_cg1));
        }
        while (1) {
            if (quit == 1) goto full_quit;
            enter_wishes_number:
            std::cout << endl << "抽几发?" << endl
            << "-1: 重新选择活动类型;" << endl
            << "1: 1发;" << endl
            << "10: 10发;" << endl
            << "-2: 显示运气最佳的连续十发;" << endl
            << "-3: 重置记录;" << endl
            << "-4: 打印开关;" << endl
            << "-5: 神铸定轨" << endl << endl;
            std::cin >> wishes_number;
            if (cin.fail()) { wishes_number = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_wishes_number; }
            std::cout << endl;
            if (wishes_number == -1) { wishes_number = 0; goto enter_chosen_event; }
            else if (wishes_number == -2) {
                if (countx < 10) { std::cout << "默认空数据" << endl; goto enter_wishes_number; }
                std::cout << "好运参考值: " << luckiest << endl;
                for (int templuck = 0; templuck < 10; templuck++) {
                    std::cout << luckiestlocation[templuck] << "(" << luckiestsublocation[templuck] << ") ";
                    casesx( luckiestkind[templuck] )
                    std::cout << pname[luckiestkind[templuck] - 1] << endl;
                }
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else if (wishes_number == -3) {
                wishes_number = 0;
                four_star_assurance_number = 1;
                five_star_assurance_number = 1;
                five_star_guarantee_number = 0;
                four_star_guarantee_number = 0;
                countx = 0;
                five_count = 0;
                five_count_c = 0;
                five_count_w = 0;
                four_count = 0;
                four_count_c = 0;
                four_count_w = 0;
                is_noelle = 1;
                ave_fives = 0;
                max_fives = 1;
                min_fives = 90;
                max_fivesth = 1;
                min_fivesth = 1;
                max_fivecount = 1;
                min_fivecount = 1;
                unmet4_c = 0;
                unmet4_w = 0;
                unmet5_c = 0;
                unmet5_w = 0;
                fate_weapon = 0;
                fate_points = 0;
                for (int ini = 0; ini < 128; ini++) { pcount[ini] = 0; }
                luck = 0;
                for (int ini = 0; ini < 10; ini++) { lucklocation[ini] = (long long int) ini + 1; }
                for (int ini = 0; ini < 10; ini++) { lucksublocation[ini] = (long long int) ini + 1; }
                for (int ini = 0; ini < 10; ini++) { luckkind[ini] = 127; }
                for (int ini = 0; ini < 10; ini++) { luckstar[ini] = 3; }
                for (int ini = 0; ini < 10; ini++) { lucktype[ini] = 1; }
                luckiest = 0;
                for (int ini = 0; ini < 10; ini++) { luckiestlocation[ini] = (long long int) ini + 1; }
                for (int ini = 0; ini < 10; ini++) { luckiestsublocation[ini] = (long long int) ini + 1; }
                for (int ini = 0; ini < 10; ini++) { luckiestkind[ini] = 127; }
                std::cout << "记录已重置!" << endl;
                goto enter_wishes_number;
            }
            //if (chosen_banner == 4 && chosen_event == 1 && wishes_number != 10) { wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
            //if (!(wishes_number == -1||wishes_number == 1||wishes_number == 10||wishes_number == -2||wishes_number == -3)){ wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
            else if (wishes_number == -4) {
                if (y_print == 1) {y_print = 0; std::cout << "打印已关闭!" << endl;}
                else {y_print = 1; std::cout << "打印已开启!" << endl;}
                wishes_number = 0;
                goto enter_wishes_number;
            }
            else if (wishes_number == -5) {
                fate_weapon = 0;
                if (chosen_banner == 2 && chosen_event > 14) {
                        enter_fate_weapon:
                        std::cout << "神铸定轨?" << endl
                        << "1: 第一顺位武器;" << endl
                        << "2: 第二顺位武器;" << endl
                        << "0: 取消神铸定轨" << endl << endl;
                        std::cin >> fate_weapon;
                        if ( fate_weapon < 0 || fate_weapon > 2) {std::cout << "输入不合理!" << endl << endl; fate_weapon = 0; goto enter_fate_weapon;}
                        wishes_number = 0;
                        goto enter_wishes_number;
                }
                else {
                    wishes_number = 0; std::cout << "输入不合理!" << endl; goto enter_wishes_number;
                }
                wishes_number = 0;
            }
            else if (wishes_number < 0) { wishes_number = 0; std::cout << "输入不合理!" << endl; goto enter_wishes_number;}
            else {}
            auto start = std::chrono::steady_clock::now();
            if (chosen_banner == 1) {
                while (wishes_number > 0) {
                    unsigned long long int temp1 = generator() % ULTRAPOS;
                    unsigned long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) I_5()
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 57) I_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) I_5()
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 567) I_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) I_5()
                        else I_4()
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 6) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) I_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 57) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) I_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 6) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) I_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 567) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) I_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 6) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) I_5()
                        else I_4()
                    }
                    else I_5()
                    output_string()
                    if (!((star == 4 && type == 1) || (star == 4 && type == 2))) unmet4_c++;
                    if (!(star == 4 && type == 3)) unmet4_w++;
                    luckget()
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 6229;
                            else if (luckstar[templuck] == 4 && lucktype[templuck] == 1) luck += 1141;
                            else if (luckstar[templuck] == 4 && lucktype[templuck] == 2) luck += 19489;
                            else if (luckstar[templuck] == 4 && lucktype[templuck] == 3) luck += 2645;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                }
            }
            else if (chosen_banner == 2) {
                    while (wishes_number > 0) {
                    unsigned long long int temp1 = generator() % ULTRAPOS;
                    unsigned long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 63 && four_star_assurance_number < 8) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 7) II_5()
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 67) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number == 8) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 7) II_5()
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 667) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 7) II_5()
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 967) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number > 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 7) II_5()
                        else II_4()
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number < 8) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 7) + ((unsigned long long int)(five_star_assurance_number) - 62) * (unsigned long long int)(ULTRAPOS / 1000 * 70)) II_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 67) + ((unsigned long long int)(five_star_assurance_number) - 62) * (unsigned long long int)(ULTRAPOS / 1000 * 70)) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number == 8) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 7) + ((unsigned long long int)(five_star_assurance_number) - 62) * (unsigned long long int)(ULTRAPOS / 1000 * 70)) II_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 667) + ((unsigned long long int)(five_star_assurance_number) - 62) * (unsigned long long int)(ULTRAPOS / 1000 * 70)) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 7) + ((unsigned long long int)(five_star_assurance_number) - 62) * (unsigned long long int)(ULTRAPOS / 1000 * 70)) II_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 967) + ((unsigned long long int)(five_star_assurance_number) - 62) * (unsigned long long int)(ULTRAPOS / 1000 * 70)) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number > 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 7) + ((unsigned long long int)(five_star_assurance_number) - 62) * (unsigned long long int)(ULTRAPOS / 1000 * 70)) II_5()
                        else II_4()
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number < 8) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 777) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 35)) II_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 837) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 35)) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number == 8) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 777) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 35)) II_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 1437) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 35)) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 777) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 35)) II_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 1737) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 35)) II_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 777) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 35)) II_5()
                        else II_4()
                    }
                    else II_5()
                    output_string()
                    if (!((star == 4 && type == 1) || (star == 4 && type == 2))) unmet4_c++;
                    if (!(star == 4 && type == 3)) unmet4_w++;
                    luckget()
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 5319;
                            else if (luckstar[templuck] == 4) luck += 674;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                    }
            }
            else if (chosen_banner == 3) {
                while (wishes_number > 0) {
                    unsigned long long int temp1 = generator() % ULTRAPOS;
                    unsigned long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) III_5()
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 57) III_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) III_5()
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 567) III_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) III_5()
                        else III_4()
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 6) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) III_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 57) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) III_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 6) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) III_5()
                        else if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 567) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) III_4()
                        else Tri()
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (unsigned long long int) (ULTRAPOS / 1000 * 6) + ((unsigned long long int)(five_star_assurance_number) - 73) * (unsigned long long int)(ULTRAPOS / 1000 * 60)) III_5()
                        else III_4()
                    }
                    else III_5()
                    output_string()
                    if (!(star == 5 && type == 1)) unmet5_c++;
                    if (!(star == 5 && type == 2)) unmet5_w++;
                    if (!(star == 4 && type == 1)) unmet4_c++;
                    if (!(star == 4 && type == 2)) unmet4_w++;
                    luckget()
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 6229;
                            else if (luckstar[templuck] == 4) luck += 2297;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                }
            }
            else {
                while (wishes_number > 0) {
                    unsigned long long int temp1 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (is_noelle == 1 && countx == 9) {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        type = 1;
                        kind = 21;
                        four_count_c++;
                        is_noelle = 0;
                    }
                    else if (four_star_assurance_number < 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                            five_star_assurance_number = 0;
                            type = 1;
                            five_count_c++;
                            kind = rspick(nup_five_c, 5);
                        }
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            kind = rspick(nup_four_c, 11);
                            if (kind == 21) { is_noelle = 0; }
                        }
                        else Tri()
                    }
                    else if (four_star_assurance_number == 9) {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            type = 1;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                            five_star_assurance_number = 0;
                            five_count_c++;
                            kind = rspick(nup_five_c, 5);
                        }
                        else if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            kind = rspick(nup_four_c, 11);
                            if (kind == 21) { is_noelle = 0; }
                        }
                        else Tri()
                    }
                    else {
                        if (temp1 < (unsigned long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            type = 1;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                            five_star_assurance_number = 0;
                            five_count_c++;
                            kind = rspick(nup_five_c, 5);
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            kind = rspick(nup_four_c, 11);
                            if (kind == 21) { is_noelle = 0; }
                        }
                    }
                    output_string()
                    luckget()
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 16667;
                            else if (luckstar[templuck] == 4) luck += 2297;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                }
            }
            if (five_count == 0) {
                std::cout << endl << "你已经抽了 " << countx << " 发。" << endl
                    << "五星角色或武器:   " << five_count << "  " << five_count * 100.0 / countx << "%" << endl
                    << "四星角色或武器:   " << four_count << "  " << four_count * 100.0 / countx << "%" << endl
                    << "五星角色 : 五星武器 : 四星角色 : 四星武器   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
            }
            else {
                std::cout << endl << "你已经抽了 " << countx << " 发。" << endl
                    << "五星角色或武器:   " << five_count << "  " << five_count * 100.0 / countx << "%" << endl
                    << "四星角色或武器:   " << four_count << "  " << four_count * 100.0 / countx << "%" << endl
                    << "连续非五星最高纪录:   " << max_fives << " 发。首次发生在第 " << max_fivesth << " 个保底单元, 即第 " << max_fivecount + 1 << " 次祈愿。" << endl
                    << "连续非五星最低纪录:   " << min_fives << " 发。首次发生在第 " << min_fivesth << " 个保底单元, 即第 " << min_fivecount + 1 << " 次祈愿。" << endl
                    << "连续非五星平均祈愿数:   " << ave_fives * 1.0 / five_count << endl
                    << "五星角色 : 五星武器 : 四星角色 : 四星武器   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
            }
            for (int iout = 0; iout < 5; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            for (int iout = 63; iout < 71; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            if (pcount[72] > 0) std::cout << pname[72] << "(" << pcount[72] << ") ";
            if (pcount[86] > 0) std::cout << pname[86] << "(" << pcount[86] << ") ";
            if (pcount[89] > 0) std::cout << pname[89] << "(" << pcount[89] << ") ";
            if (pcount[90] > 0) std::cout << pname[90] << "(" << pcount[90] << ") ";
            for (int iout = 5; iout < 15; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            for (int iout = 73; iout < 79; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            if (pcount[81] > 0) std::cout << pname[81] << "(" << pcount[81] << ") ";
            if (pcount[85] > 0) std::cout << pname[85] << "(" << pcount[85] << ") ";
            if (pcount[87] > 0) std::cout << pname[87] << "(" << pcount[87] << ") ";
            if (pcount[97] > 0) std::cout << pname[97] << "(" << pcount[97] << ") ";
            if (pcount[98] > 0) std::cout << pname[98] << "(" << pcount[98] << ") ";
            std::cout << endl << endl;
            for (int iout = 15; iout < 32; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            if (pcount[71] > 0) std::cout << pname[71] << "(" << pcount[71] << ") ";
            if (pcount[91] > 0) std::cout << pname[91] << "(" << pcount[91] << ") ";
            for (int iout = 32; iout < 50; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            if (pcount[79] > 0) std::cout << pname[79] << "(" << pcount[79] << ") ";
            if (pcount[80] > 0) std::cout << pname[80] << "(" << pcount[80] << ") ";
            for (int iout = 82; iout < 85; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            if (pcount[88] > 0) std::cout << pname[88] << "(" << pcount[88] << ") ";
            for (int iout = 92; iout < 97; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ") "; }
            std::cout << endl << endl; auto elapsed = std::chrono::steady_clock::now() - start;
            unsigned long long int microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
            std::cout << microseconds * 1.0 / 1000000 << " 秒过去了。" << endl;
            //if (chosen_banner == 4 && chosen_event == 1 && count == 20) goto full_quit;
        }
    }
full_quit:
    int prepause = getchar();
    prepause = 1;
    int pausex = getchar();
    pausex = 1;
    return 0;
}