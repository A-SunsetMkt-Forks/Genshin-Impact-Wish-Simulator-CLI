#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <string>
#define ULTRAPOS 437580000
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
    long long int temp221 = 0;
    for (; index < sizekind; index++)
    {
        temp221 = generator() % ((long long int)(index) + 1);
        if (temp221 < 1)
            kindout = kindx[index];
    }
    return kindout;
}

int main() {
    std::cout << "原神祈愿模拟器（命令行）V1.5.5.1" << endl << endl;
    while (1) {
    enter_chosen_banner:
        int chosen_banner = 0;
        int chosen_event = 0;
        int wishes_number = 0;
        int four_star_assurance_number = 1;
        int five_star_assurance_number = 1;
        int five_star_guarantee_number = 0;
        int four_star_guarantee_number = 0;
        int quit = 1;
        long long int count = 0;
        long long int five_count = 0;
        long long int five_count_c = 0;
        long long int five_count_w = 0;
        long long int four_count = 0;
        long long int four_count_c = 0;
        long long int four_count_w = 0;
        int is_noelle = 1;
        int ave_fives = 0;
        int max_fives = 1;
        int min_fives = 90;
        long long int max_fivesth = 1;
        long long int min_fivesth = 1;
        long long int max_fivecount = 1;
        long long int min_fivecount = 1;
        long long int unmet4_c = 0;
        long long int unmet4_w = 0;
        long long int unmet5_c = 0;
        long long int unmet5_w = 0;
        long long int pcount[128] = { 0 };
        int luck = 0;
        long long int lucklocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        long long int lucksublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int luckkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 };
        int luckstar[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
        int lucktype[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
        int luckiest = 0;
        long long int luckiestlocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        long long int luckiestsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int luckiestkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 };
        int up_five = 0;
        int up_five_g[32] = { 0 };
        int nup_five_c[32] = { 0 };
        int nup_five_w[32] = { 0 };
        int size_nup_five_c = 1;
        int size_nup_five_w = 1;
        int up_four_g[64] = { 0 };
        int nup_four_c[64] = { 0 };
        int nup_four_w[64] = { 0 };
        int size_nup_four_c = 1;
        int size_nup_four_w = 1;
        int three_g[18] = { 0 };
        int five_check[8] = { 127 };
        int four_check[8] = { 127 };
        std::cout << "选择卡池类型:" << endl;
        std::cout << "-1: 退出; 1: 角色活动祈愿; 2: 武器活动祈愿; 3: 常驻祈愿; 4: 新手祈愿;" << endl << endl;
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
                << "13: 浪涌之瞬/20210518-20210608 (优菈, 辛焱, 行秋, 北斗)" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) { chosen_event = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_event; }
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 14 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "无效活动类型!" << endl << endl; goto enter_chosen_event; }
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
                << "12: 神铸赋形/20210518-20210608 (松籁响起之时, 风鹰剑, 祭礼剑, 雨裁, 匣里灭辰, 祭礼残章, 弓藏)" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) { chosen_event = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_event; }
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 13 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "无效活动类型!" << endl << endl; goto enter_chosen_event; }
        } break;
        case 3: {
            chosen_event = 0;
            std::cout << endl << "选择活动类型:" << endl
                << "-1: 重新选择卡池类型 (将重置记录)" << endl
                << "1: 奔行世间/20200928-20201222 (公测)" << endl
                << "2: 奔行世间/20201223-20210427 (新增迪奥娜和辛焱)" << endl
                << "3: 奔行世间/20210428- (新增罗莎莉亚)" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) { chosen_event = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_chosen_event; }
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 4 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "无效活动类型!" << endl << endl; goto enter_chosen_event; }
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
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 23, 27, 31 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 23, 27, 31, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 2: {
                up_five = 65;
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 18, 21, 25 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 18, 21, 25, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 3: {
                up_five = 66;
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 19, 24, 26 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 24, 26, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 4: {
                up_five = 67;
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 17, 20, 29 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 20, 29, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 5: {
                up_five = 68;
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 18, 22, 23 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 18, 22, 23, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 6: {
                up_five = 69;
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 21, 25, 27 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 21, 25, 27, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 7: {
                up_five = 70;
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 17, 19, 26 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 17, 19, 26, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 8: {
                up_five = 1;
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 22, 24, 31 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 22, 24, 31, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                five_check[1] = 1;
            } break;
            case 9: {
                up_five = 71;
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 20, 25, 27 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 20, 25, 27, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 10: {
                up_five = 64;
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 18, 21, 29 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 18, 21, 29, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 11: {
                up_five = 66;
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 16, 23, 31 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 23, 31, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 12: {
                up_five = 67;
                size_nup_four_c = 14;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 72, 21, 19 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[14] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 14; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 19, 21, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            case 13: {
                up_five = 73;
                size_nup_four_c = 14;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[3] = { 17, 25, 26 };
                for (int temp399 = 0; temp399 < 3; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg2[14] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 14; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 17, 25, 26, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
            } break;
            default:break;
            }
        }
        if (chosen_banner == 2) {
            switch (chosen_event) {
            case 1: {
                int tempg6[2] = { 6, 15 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 35, 39, 41, 45, 49 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 35, 39, 41, 45, 49, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 6, 15, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 2: {
                int tempg6[2] = { 8, 12 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 34, 38, 42, 44, 50 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 34, 38, 42, 44, 50, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 8, 12, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 3: {
                int tempg6[2] = { 7, 74 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 33, 37, 41, 43, 49 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 33, 37, 41, 43, 49, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 7, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 4: {
                int tempg6[2] = { 75, 76 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 36, 40, 42, 45, 47 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 36, 40, 42, 45, 47, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 5: {
                int tempg6[2] = { 9, 77 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 35, 38, 41, 46, 50 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 35, 38, 41, 46, 50, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 6: {
                int tempg6[2] = { 6, 13 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 36, 37, 42, 45, 48 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 36, 37, 42, 45, 48, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 6, 13, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 7: {
                int tempg6[2] = { 10, 78 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 33, 37, 41, 44, 49 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 33, 37, 41, 44, 49, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 10, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 8: {
                int tempg6[2] = { 12, 79 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 34, 39, 47, 80, 81 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 34, 39, 47, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 12, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 9: {
                int tempg6[2] = { 14, 82 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 36, 42, 46, 83, 84 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 36, 42, 46, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 14, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 10: {
                int tempg6[2] = { 7, 8 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 40, 41, 44, 50, 85 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 40, 41, 44, 50, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 7, 8, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 11: {
                int tempg6[2] = { 74, 77 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 14;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 34, 37, 49, 80, 81 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[14] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 14; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 34, 37, 49, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            case 12: {
                int tempg6[2] = { 15, 86 };
                for (int temp399 = 0; temp399 < 2; temp399++) up_five_g[temp399] = tempg6[temp399];
                size_nup_four_c = 14;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[5] = { 33, 38, 42, 43, 48 };
                for (int temp399 = 0; temp399 < 5; temp399++) up_four_g[temp399] = tempg1[temp399];
                int tempg11[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg11[temp399];
                int tempg2[14] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 14; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
                int tempg5[8] = { 33, 38, 42, 43, 48, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) four_check[temp399] = tempg5[temp399];
                int tempg7[8] = { 15, 0, 0, 0, 0, 0, 0, 0 };
                for (int temp399 = 0; temp399 < 8; temp399++) five_check[temp399] = tempg7[temp399];
            } break;
            default:break;
            }
        }
        if (chosen_banner == 3) {
            switch (chosen_event) {
            case 1: {
                size_nup_four_c = 11;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
            } break;
            case 2: {
                size_nup_four_c = 13;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg2[13] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 13; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
            } break;
            case 3: {
                size_nup_four_c = 14;
                size_nup_four_w = 18;
                int tempg0[5] = { 1, 2, 3, 4, 5 };
                for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
                int tempg1[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                for (int temp399 = 0; temp399 < 10; temp399++) nup_five_w[temp399] = tempg1[temp399];
                int tempg2[14] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                for (int temp399 = 0; temp399 < 14; temp399++) nup_four_c[temp399] = tempg2[temp399];
                int tempg3[18] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                for (int temp399 = 0; temp399 < 18; temp399++) nup_four_w[temp399] = tempg3[temp399];
                int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
            } break;
            default:break;
            }
        }
        if (chosen_banner == 4) {
            int tempg0[5] = { 1, 2, 3, 4, 5 };
            for (int temp399 = 0; temp399 < 5; temp399++) nup_five_c[temp399] = tempg0[temp399];
            int tempg2[11] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
            for (int temp399 = 0; temp399 < 11; temp399++) nup_four_c[temp399] = tempg2[temp399];
            int tempg4[18] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
            for (int temp399 = 0; temp399 < 18; temp399++) three_g[temp399] = tempg4[temp399];
        }
        while (1) {
            if (quit == 1) goto full_quit;
            enter_wishes_number:
            std::cout << endl << "抽几发?" << endl << "-1: 重新选择活动类型; 1: 1发; 10: 10发; -2: 显示运气最佳的连续十发; -3: 重置记录" << endl << endl;
            std::cin >> wishes_number;
            if (cin.fail()) { wishes_number = 0; std::cout << endl << "非法字符!" << endl; cin.clear(); cin.ignore(32767, '\n'); goto enter_wishes_number; }
            std::cout << endl;
            if (wishes_number == -1) { wishes_number = 0; goto enter_chosen_event; }
            if (wishes_number == -2) {
                if (count < 10) { std::cout << "默认空数据" << endl; goto enter_wishes_number; }
                std::cout << "好运参考值: " << luckiest << endl;
                for (int templuck = 0; templuck < 10; templuck++) {
                    std::cout << luckiestlocation[templuck] << "(" << luckiestsublocation[templuck] << ")" << " ";
                    switch (luckiestkind[templuck]) {
                    case 1: { std::cout << "!!!!!*****刻晴" << endl; } break;
                    case 2: { std::cout << "!!!!!*****莫娜" << endl; } break;
                    case 3: { std::cout << "!!!!!*****七七" << endl; } break;
                    case 4: { std::cout << "!!!!!*****迪卢克" << endl; } break;
                    case 5: { std::cout << "!!!!!*****琴" << endl; } break;
                    case 6: { std::cout << "!!!!!*****阿莫斯之弓" << endl; } break;
                    case 7: { std::cout << "!!!!!*****天空之翼" << endl; } break;
                    case 8: { std::cout << "!!!!!*****四风原典" << endl; } break;
                    case 9: { std::cout << "!!!!!*****天空之卷" << endl; } break;
                    case 10: { std::cout << "!!!!!*****和璞鸢" << endl; } break;
                    case 11: { std::cout << "!!!!!*****天空之脊" << endl; } break;
                    case 12: { std::cout << "!!!!!*****狼的末路" << endl; } break;
                    case 13: { std::cout << "!!!!!*****天空之傲" << endl; } break;
                    case 14: { std::cout << "!!!!!*****天空之刃" << endl; } break;
                    case 15: { std::cout << "!!!!!*****风鹰剑" << endl; } break;
                    case 16: { std::cout << "!!****罗莎莉亚" << endl; } break;
                    case 17: { std::cout << "!!****辛焱" << endl; } break;
                    case 18: { std::cout << "!!****砂糖" << endl; } break;
                    case 19: { std::cout << "!!****迪奥娜" << endl; } break;
                    case 20: { std::cout << "!!****重云" << endl; } break;
                    case 21: { std::cout << "!!****诺艾尔" << endl; } break;
                    case 22: { std::cout << "!!****班尼特" << endl; } break;
                    case 23: { std::cout << "!!****菲谢尔" << endl; } break;
                    case 24: { std::cout << "!!****凝光" << endl; } break;
                    case 25: { std::cout << "!!****行秋" << endl; } break;
                    case 26: { std::cout << "!!****北斗" << endl; } break;
                    case 27: { std::cout << "!!****香菱" << endl; } break;
                    case 28: { std::cout << "!!****安柏" << endl; } break;
                    case 29: { std::cout << "!!****雷泽" << endl; } break;
                    case 30: { std::cout << "!!****凯亚" << endl; } break;
                    case 31: { std::cout << "!!****芭芭拉" << endl; } break;
                    case 32: { std::cout << "!!****丽莎" << endl; } break;
                    case 33: { std::cout << "!!****弓藏" << endl; } break;
                    case 34: { std::cout << "!!****祭礼弓" << endl; } break;
                    case 35: { std::cout << "!!****绝弦" << endl; } break;
                    case 36: { std::cout << "!!****西风猎弓" << endl; } break;
                    case 37: { std::cout << "!!****昭心" << endl; } break;
                    case 38: { std::cout << "!!****祭礼残章" << endl; } break;
                    case 39: { std::cout << "!!****流浪乐章" << endl; } break;
                    case 40: { std::cout << "!!****西风秘典" << endl; } break;
                    case 41: { std::cout << "!!****西风长枪" << endl; } break;
                    case 42: { std::cout << "!!****匣里灭辰" << endl; } break;
                    case 43: { std::cout << "!!****雨裁" << endl; } break;
                    case 44: { std::cout << "!!****祭礼大剑" << endl; } break;
                    case 45: { std::cout << "!!****钟剑" << endl; } break;
                    case 46: { std::cout << "!!****西风大剑" << endl; } break;
                    case 47: { std::cout << "!!****匣里龙吟" << endl; } break;
                    case 48: { std::cout << "!!****祭礼剑" << endl; } break;
                    case 49: { std::cout << "!!****笛剑" << endl; } break;
                    case 50: { std::cout << "!!****西风剑" << endl; } break;
                    case 51: { std::cout << "***猎弓" << endl; } break;
                    case 52: { std::cout << "***神射手之誓" << endl; } break;
                    case 53: { std::cout << "***鸦羽弓" << endl; } break;
                    case 54: { std::cout << "***翡玉法球" << endl; } break;
                    case 55: { std::cout << "***讨龙英杰谭" << endl; } break;
                    case 56: { std::cout << "***魔导绪论" << endl; } break;
                    case 57: { std::cout << "***黑缨枪" << endl; } break;
                    case 58: { std::cout << "***以理服人" << endl; } break;
                    case 59: { std::cout << "***沐浴龙血的剑" << endl; } break;
                    case 60: { std::cout << "***铁影阔剑" << endl; } break;
                    case 61: { std::cout << "***飞天御剑" << endl; } break;
                    case 62: { std::cout << "***黎明神剑" << endl; } break;
                    case 63: { std::cout << "***冷刃" << endl; } break;
                    case 64: { std::cout << "!!!!!*****温迪" << endl; } break;
                    case 65: { std::cout << "!!!!!*****可莉" << endl; } break;
                    case 66: { std::cout << "!!!!!*****达达利亚" << endl; } break;
                    case 67: { std::cout << "!!!!!*****钟离" << endl; } break;
                    case 68: { std::cout << "!!!!!*****阿贝多" << endl; } break;
                    case 69: { std::cout << "!!!!!*****甘雨" << endl; } break;
                    case 70: { std::cout << "!!!!!*****魈" << endl; } break;
                    case 71: { std::cout << "!!!!!*****胡桃" << endl; } break;
                    case 72: { std::cout << "!!****烟绯" << endl; } break;
                    case 73: { std::cout << "!!!!!*****优菈" << endl; } break;
                    case 74: { std::cout << "!!!!!*****尘世之锁" << endl; } break;
                    case 75: { std::cout << "!!!!!*****贯虹之槊" << endl; } break;
                    case 76: { std::cout << "!!!!!*****无工之剑" << endl; } break;
                    case 77: { std::cout << "!!!!!*****斫峰之刃" << endl; } break;
                    case 78: { std::cout << "!!!!!*****磐岩结绿" << endl; } break;
                    case 79: { std::cout << "!!!!!*****护摩之杖" << endl; } break;
                    case 80: { std::cout << "!!****千岩古剑" << endl; } break;
                    case 81: { std::cout << "!!****千岩长枪" << endl; } break;
                    case 82: { std::cout << "!!!!!*****终末嗟叹之诗" << endl; } break;
                    case 83: { std::cout << "!!****暗巷闪光" << endl; } break;
                    case 84: { std::cout << "!!****暗巷的酒与诗" << endl; } break;
                    case 85: { std::cout << "!!****暗巷猎手" << endl; } break;
                    case 86: { std::cout << "!!!!!*****松籁响起之时" << endl; } break;
                    case 87: { std::cout << "Placeholder" << endl; } break;
                    case 88: { std::cout << "Placeholder" << endl; } break;
                    case 89: { std::cout << "Placeholder" << endl; } break;
                    case 90: { std::cout << "Placeholder" << endl; } break;
                    case 91: { std::cout << "Placeholder" << endl; } break;
                    case 92: { std::cout << "Placeholder" << endl; } break;
                    case 93: { std::cout << "Placeholder" << endl; } break;
                    case 94: { std::cout << "Placeholder" << endl; } break;
                    case 95: { std::cout << "Placeholder" << endl; } break;
                    case 96: { std::cout << "Placeholder" << endl; } break;
                    case 97: { std::cout << "Placeholder" << endl; } break;
                    case 98: { std::cout << "Placeholder" << endl; } break;
                    case 99: { std::cout << "Placeholder" << endl; } break;
                    case 100: { std::cout << "Placeholder" << endl; } break;
                    case 101: { std::cout << "Placeholder" << endl; } break;
                    case 102: { std::cout << "Placeholder" << endl; } break;
                    case 103: { std::cout << "Placeholder" << endl; } break;
                    case 104: { std::cout << "Placeholder" << endl; } break;
                    case 105: { std::cout << "Placeholder" << endl; } break;
                    case 106: { std::cout << "Placeholder" << endl; } break;
                    case 107: { std::cout << "Placeholder" << endl; } break;
                    case 108: { std::cout << "Placeholder" << endl; } break;
                    case 109: { std::cout << "Placeholder" << endl; } break;
                    case 110: { std::cout << "Placeholder" << endl; } break;
                    case 111: { std::cout << "Placeholder" << endl; } break;
                    case 112: { std::cout << "Placeholder" << endl; } break;
                    case 113: { std::cout << "Placeholder" << endl; } break;
                    case 114: { std::cout << "Placeholder" << endl; } break;
                    case 115: { std::cout << "Placeholder" << endl; } break;
                    case 116: { std::cout << "Placeholder" << endl; } break;
                    case 117: { std::cout << "Placeholder" << endl; } break;
                    case 118: { std::cout << "Placeholder" << endl; } break;
                    case 119: { std::cout << "Placeholder" << endl; } break;
                    case 120: { std::cout << "Placeholder" << endl; } break;
                    case 121: { std::cout << "Placeholder" << endl; } break;
                    case 122: { std::cout << "Placeholder" << endl; } break;
                    case 123: { std::cout << "Placeholder" << endl; } break;
                    case 124: { std::cout << "Placeholder" << endl; } break;
                    case 125: { std::cout << "Placeholder" << endl; } break;
                    case 126: { std::cout << "Placeholder" << endl; } break;
                    case 127: { std::cout << "Placeholder" << endl; } break;
                    case 128: { std::cout << "Placeholder" << endl; } break;
                    }
                }
                goto enter_wishes_number;
            }
            if (wishes_number == -3) {
                wishes_number = 0;
                four_star_assurance_number = 1;
                five_star_assurance_number = 1;
                five_star_guarantee_number = 0;
                four_star_guarantee_number = 0;
                count = 0;
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
                goto enter_wishes_number;
            }
            //if (chosen_banner == 4 && chosen_event == 1 && wishes_number != 10) { wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
            //if (!(wishes_number == -1||wishes_number == 1||wishes_number == 10||wishes_number == -2||wishes_number == -3)){ wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
            auto start = std::chrono::steady_clock::now();
            if (chosen_banner == 1) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                kind = up_five;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_c++;
                                kind = rspick(nup_five_c, 5);
                                if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 17 && unmet4_w < 17) {
                                    if (temp2 > (long long int) 3 * ULTRAPOS / 4 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 16) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                kind = up_five;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_c++;
                                kind = rspick(nup_five_c, 5);
                                if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 17 && unmet4_w < 17) {
                                    if (temp2 > (long long int) 3 * ULTRAPOS / 4 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 16) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                kind = up_five;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_c++;
                                kind = rspick(nup_five_c, 5);
                                if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 17 && unmet4_w < 17) {
                                    if (temp2 > (long long int) 3 * ULTRAPOS / 4 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 16) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                kind = up_five;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_c++;
                                kind = rspick(nup_five_c, 5);
                                if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 57) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 17 && unmet4_w < 17) {
                                    if (temp2 > (long long int) 3 * ULTRAPOS / 4 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 16) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_c, 18);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_c, 18);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                kind = up_five;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_c++;
                                kind = rspick(nup_five_c, 5);
                                if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 567) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 17 && unmet4_w < 17) {
                                    if (temp2 > (long long int) 3 * ULTRAPOS / 4 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 16) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                kind = up_five;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_c++;
                                kind = rspick(nup_five_c, 5);
                                if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 3);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 17 && unmet4_w < 17) {
                                    if (temp2 > (long long int) 3 * ULTRAPOS / 4 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 16) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                    }
                    else {
                        star = 5;
                        five_count++;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; five_count_c++; kind = up_five; five_star_guarantee_number = 0; }
                        else if (temp2 < (long long int) ULTRAPOS / 2) {
                            type = 1;
                            five_count_c++;
                            kind = up_five;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_count_c++;
                            if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            kind = rspick(nup_five_c, 5);
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****刻晴" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****莫娜" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****七七" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****迪卢克" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****琴" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****阿莫斯之弓" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****天空之翼" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****四风原典" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****天空之卷" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****和璞鸢" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****天空之脊" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****狼的末路" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****天空之傲" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****天空之刃" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****风鹰剑" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****罗莎莉亚" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****辛焱" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****砂糖" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****迪奥娜" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****重云" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****诺艾尔" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****班尼特" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****菲谢尔" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****凝光" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****行秋" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****北斗" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****香菱" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****安柏" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****雷泽" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****凯亚" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****芭芭拉" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****丽莎" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****弓藏" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****祭礼弓" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****绝弦" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****西风猎弓" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****昭心" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****祭礼残章" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****流浪乐章" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****西风秘典" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****西风长枪" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****匣里灭辰" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****雨裁" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****祭礼大剑" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****钟剑" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****西风大剑" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****匣里龙吟" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****祭礼剑" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****笛剑" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****西风剑" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***猎弓" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***神射手之誓" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***鸦羽弓" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***翡玉法球" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***讨龙英杰谭" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***魔导绪论" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***黑缨枪" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***以理服人" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***沐浴龙血的剑" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***铁影阔剑" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***飞天御剑" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***黎明神剑" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***冷刃" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****温迪" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****可莉" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****达达利亚" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****钟离" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****阿贝多" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****甘雨" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****魈" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****胡桃" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****烟绯" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!!!!*****优菈" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****尘世之锁" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****贯虹之槊" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****无工之剑" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****斫峰之刃" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****磐岩结绿" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****护摩之杖" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****千岩古剑" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****千岩长枪" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****终末嗟叹之诗" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****暗巷闪光" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****暗巷的酒与诗" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****暗巷猎手" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "!!!!!*****松籁响起之时" << endl; pcount[85]++; } break;
                    case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                    case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                    case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                    case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                    case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                    case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                    case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                    case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                    case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                    case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                    case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                    case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                    case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                    case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                    case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                    case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                    case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                    case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                    case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                    case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                    case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                    case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                    case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                    case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                    case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                    case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                    case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                    case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                    case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                    case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                    case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                    case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                    case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                    case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                    case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                    case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                    case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                    case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                    case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                    case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                    case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                    case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                    default: break;
                    }
                    wishes_number--;
                    count++;
                    if (!((star == 4 && type == 1) || (star == 4 && type == 2))) unmet4_c++;
                    if (!(star == 4 && type == 3)) unmet4_w++;
                    five_star_assurance_number++;
                    four_star_assurance_number++;
                    for (int templuck = 0; templuck < 9; templuck++) {
                        lucklocation[templuck] = lucklocation[templuck + 1];
                        lucksublocation[templuck] = lucksublocation[templuck + 1];
                        luckkind[templuck] = luckkind[templuck + 1];
                        luckstar[templuck] = luckstar[templuck + 1];
                        lucktype[templuck] = lucktype[templuck + 1];
                    }
                    lucklocation[9] = count;
                    lucksublocation[9] = (long long int) five_star_assurance_number - 1;
                    luckkind[9] = kind;
                    luckstar[9] = star;
                    lucktype[9] = type;
                    luck = 0;
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 6229;
                            else if (luckstar[templuck] == 4 && lucktype[templuck] == 1) luck += 1141;
                            else if (luckstar[templuck] == 4 && lucktype[templuck] == 2) luck += 19489;
                            else if (luckstar[templuck] == 4 && lucktype[templuck] == 3) luck += 2645;
                            else luck += 0;
                        }
                    }
                    if (count == 10) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                    if (luck > luckiest) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                }
            }
            if (chosen_banner == 2) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 63 && four_star_assurance_number < 8) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 67) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number == 8) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 667) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 967) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number < 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 67) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number == 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 667) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 967) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number < 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 837) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number == 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 1437) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 1737) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                five_count_w++;
                                kind = rspick(up_five_g, 2);
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                kind = rspick(nup_five_w, 10);
                                if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                                type = 1;
                                four_count_w++;
                                unmet4_c = 0;
                                kind = rspick(up_four_g, 5);
                                four_star_guarantee_number = 0;
                            }
                            else {
                                if (unmet4_c < 15 && unmet4_w < 15) {
                                    if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else if (unmet4_w > 14) {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                }
                                else {
                                    if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {
                                        type = 3;
                                        four_count_w++;
                                        unmet4_w = 0;
                                        kind = rspick(nup_four_w, size_nup_four_w);
                                        if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = 0; else four_star_guarantee_number = 1;
                                    }
                                    else {
                                        type = 2;
                                        four_count_c++;
                                        unmet4_c = 0;
                                        kind = rspick(nup_four_c, size_nup_four_c);
                                        four_star_guarantee_number = 1;
                                    }
                                }
                            }
                        }
                    }
                    else {
                        star = 5;
                        five_count++;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) {
                            type = 1;
                            five_count_w++;
                            kind = rspick(up_five_g, 2);
                            five_star_guarantee_number = 0;
                        }
                        else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {
                            type = 1;
                            five_count_w++;
                            kind = rspick(up_five_g, 2);
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_count_w++;
                            kind = rspick(nup_five_w, 10);
                            if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****刻晴" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****莫娜" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****七七" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****迪卢克" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****琴" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****阿莫斯之弓" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****天空之翼" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****四风原典" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****天空之卷" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****和璞鸢" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****天空之脊" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****狼的末路" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****天空之傲" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****天空之刃" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****风鹰剑" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****罗莎莉亚" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****辛焱" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****砂糖" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****迪奥娜" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****重云" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****诺艾尔" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****班尼特" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****菲谢尔" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****凝光" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****行秋" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****北斗" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****香菱" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****安柏" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****雷泽" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****凯亚" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****芭芭拉" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****丽莎" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****弓藏" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****祭礼弓" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****绝弦" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****西风猎弓" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****昭心" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****祭礼残章" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****流浪乐章" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****西风秘典" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****西风长枪" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****匣里灭辰" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****雨裁" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****祭礼大剑" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****钟剑" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****西风大剑" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****匣里龙吟" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****祭礼剑" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****笛剑" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****西风剑" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***猎弓" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***神射手之誓" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***鸦羽弓" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***翡玉法球" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***讨龙英杰谭" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***魔导绪论" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***黑缨枪" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***以理服人" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***沐浴龙血的剑" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***铁影阔剑" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***飞天御剑" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***黎明神剑" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***冷刃" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****温迪" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****可莉" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****达达利亚" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****钟离" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****阿贝多" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****甘雨" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****魈" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****胡桃" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****烟绯" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!!!!*****优菈" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****尘世之锁" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****贯虹之槊" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****无工之剑" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****斫峰之刃" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****磐岩结绿" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****护摩之杖" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****千岩古剑" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****千岩长枪" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****终末嗟叹之诗" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****暗巷闪光" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****暗巷的酒与诗" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****暗巷猎手" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "!!!!!*****松籁响起之时" << endl; pcount[85]++; } break;
                    case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                    case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                    case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                    case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                    case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                    case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                    case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                    case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                    case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                    case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                    case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                    case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                    case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                    case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                    case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                    case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                    case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                    case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                    case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                    case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                    case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                    case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                    case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                    case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                    case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                    case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                    case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                    case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                    case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                    case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                    case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                    case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                    case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                    case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                    case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                    case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                    case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                    case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                    case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                    case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                    case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                    case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                    default: break;
                    }
                    wishes_number--;
                    count++;
                    if (!((star == 4 && type == 1) || (star == 4 && type == 2))) unmet4_c++;
                    if (!(star == 4 && type == 3)) unmet4_w++;
                    five_star_assurance_number++;
                    four_star_assurance_number++;
                    for (int templuck = 0; templuck < 9; templuck++) {
                        lucklocation[templuck] = lucklocation[templuck + 1];
                        lucksublocation[templuck] = lucksublocation[templuck + 1];
                        luckkind[templuck] = luckkind[templuck + 1];
                        luckstar[templuck] = luckstar[templuck + 1];
                        lucktype[templuck] = lucktype[templuck + 1];
                    }
                    lucklocation[9] = count;
                    lucksublocation[9] = (long long int) five_star_assurance_number - 1;
                    luckkind[9] = kind;
                    luckstar[9] = star;
                    lucktype[9] = type;
                    luck = 0;
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 5319;
                            else if (luckstar[templuck] == 4) luck += 674;
                            else luck += 0;
                        }
                    }
                    if (count == 10) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                    if (luck > luckiest) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                }
            }
            if (chosen_banner == 3) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                            }
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 57) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 567) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    kind = rspick(nup_five_w, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    kind = rspick(nup_five_c, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < (long long int) ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                            }
                            else {
                                if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    kind = rspick(nup_four_w, size_nup_four_w);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    kind = rspick(nup_four_c, size_nup_four_c);
                                }
                            }
                        }
                    }
                    else {
                        star = 5;
                        five_count++;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (unmet5_c < 148 && unmet5_w < 148) {
                            if (temp2 < (long long int) ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                unmet5_c = 0;
                                kind = rspick(nup_five_c, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                unmet5_w = 0;
                                kind = rspick(nup_five_w, 10);
                            }
                        }
                        else if (unmet5_c > 147) {
                            if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {
                                type = 1;
                                five_count_c++;
                                unmet5_c = 0;
                                kind = rspick(nup_five_c, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                unmet5_w = 0;
                                kind = rspick(nup_five_w, 10);
                            }
                        }
                        else {
                            if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {
                                type = 2;
                                five_count_w++;
                                unmet5_w = 0;
                                kind = rspick(nup_five_w, 10);
                            }
                            else {
                                type = 1;
                                five_count_c++;
                                unmet5_c = 0;
                                kind = rspick(nup_five_c, 5);
                            }
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****刻晴" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****莫娜" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****七七" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****迪卢克" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****琴" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****阿莫斯之弓" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****天空之翼" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****四风原典" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****天空之卷" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****和璞鸢" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****天空之脊" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****狼的末路" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****天空之傲" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****天空之刃" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****风鹰剑" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****罗莎莉亚" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****辛焱" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****砂糖" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****迪奥娜" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****重云" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****诺艾尔" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****班尼特" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****菲谢尔" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****凝光" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****行秋" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****北斗" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****香菱" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****安柏" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****雷泽" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****凯亚" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****芭芭拉" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****丽莎" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****弓藏" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****祭礼弓" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****绝弦" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****西风猎弓" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****昭心" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****祭礼残章" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****流浪乐章" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****西风秘典" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****西风长枪" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****匣里灭辰" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****雨裁" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****祭礼大剑" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****钟剑" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****西风大剑" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****匣里龙吟" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****祭礼剑" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****笛剑" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****西风剑" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***猎弓" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***神射手之誓" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***鸦羽弓" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***翡玉法球" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***讨龙英杰谭" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***魔导绪论" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***黑缨枪" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***以理服人" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***沐浴龙血的剑" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***铁影阔剑" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***飞天御剑" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***黎明神剑" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***冷刃" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****温迪" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****可莉" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****达达利亚" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****钟离" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****阿贝多" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****甘雨" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****魈" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****胡桃" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****烟绯" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!!!!*****优菈" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****尘世之锁" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****贯虹之槊" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****无工之剑" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****斫峰之刃" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****磐岩结绿" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****护摩之杖" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****千岩古剑" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****千岩长枪" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****终末嗟叹之诗" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****暗巷闪光" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****暗巷的酒与诗" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****暗巷猎手" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "!!!!!*****松籁响起之时" << endl; pcount[85]++; } break;
                    case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                    case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                    case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                    case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                    case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                    case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                    case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                    case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                    case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                    case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                    case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                    case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                    case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                    case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                    case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                    case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                    case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                    case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                    case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                    case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                    case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                    case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                    case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                    case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                    case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                    case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                    case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                    case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                    case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                    case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                    case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                    case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                    case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                    case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                    case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                    case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                    case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                    case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                    case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                    case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                    case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                    case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                    default: break;
                    }
                    wishes_number--;
                    count++;
                    if (!(star == 5 && type == 1)) unmet5_c++;
                    if (!(star == 5 && type == 2)) unmet5_w++;
                    if (!(star == 4 && type == 1)) unmet4_c++;
                    if (!(star == 4 && type == 2)) unmet4_w++;
                    five_star_assurance_number++;
                    four_star_assurance_number++;
                    for (int templuck = 0; templuck < 9; templuck++) {
                        lucklocation[templuck] = lucklocation[templuck + 1];
                        lucksublocation[templuck] = lucksublocation[templuck + 1];
                        luckkind[templuck] = luckkind[templuck + 1];
                        luckstar[templuck] = luckstar[templuck + 1];
                    }
                    lucklocation[9] = count;
                    lucksublocation[9] = (long long int) five_star_assurance_number - 1;
                    luckkind[9] = kind;
                    luckstar[9] = star;
                    luck = 0;
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 6229;
                            else if (luckstar[templuck] == 4) luck += 2297;
                            else luck += 0;
                        }
                    }
                    if (count == 10) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                    if (luck > luckiest) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                }
            }
            if (chosen_banner == 4) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    long long int temp3 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (is_noelle == 1 && count == 9) {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        type = 1;
                        kind = 21;
                        four_count_c++;
                        is_noelle = 0;
                    }
                    else if (four_star_assurance_number < 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            type = 1;
                            five_count_c++;
                            kind = rspick(nup_five_c, 5);
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            kind = rspick(nup_four_c, 11);
                            if (kind == 21) { is_noelle = 0; }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else if (four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            type = 1;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            five_count_c++;
                            kind = rspick(nup_five_c, 5);
                        }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            kind = rspick(nup_four_c, 11);
                            if (kind == 21) { is_noelle = 0; }
                        }
                        else {
                            star = 3;
                            type = 2;
                            kind = rspick(three_g, 13);
                        }
                    }
                    else {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count++;
                            type = 1;
                            ave_fives += five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
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
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****刻晴" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****莫娜" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****七七" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****迪卢克" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****琴" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****阿莫斯之弓" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****天空之翼" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****四风原典" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****天空之卷" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****和璞鸢" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****天空之脊" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****狼的末路" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****天空之傲" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****天空之刃" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****风鹰剑" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****罗莎莉亚" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****辛焱" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****砂糖" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****迪奥娜" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****重云" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****诺艾尔" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****班尼特" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****菲谢尔" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****凝光" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****行秋" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****北斗" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****香菱" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****安柏" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****雷泽" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****凯亚" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****芭芭拉" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****丽莎" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****弓藏" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****祭礼弓" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****绝弦" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****西风猎弓" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****昭心" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****祭礼残章" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****流浪乐章" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****西风秘典" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****西风长枪" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****匣里灭辰" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****雨裁" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****祭礼大剑" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****钟剑" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****西风大剑" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****匣里龙吟" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****祭礼剑" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****笛剑" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****西风剑" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***猎弓" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***神射手之誓" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***鸦羽弓" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***翡玉法球" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***讨龙英杰谭" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***魔导绪论" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***黑缨枪" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***以理服人" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***沐浴龙血的剑" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***铁影阔剑" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***飞天御剑" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***黎明神剑" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***冷刃" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****温迪" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****可莉" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****达达利亚" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****钟离" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****阿贝多" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****甘雨" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****魈" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****胡桃" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****烟绯" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!!!!*****优菈" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****尘世之锁" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****贯虹之槊" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****无工之剑" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****斫峰之刃" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****磐岩结绿" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****护摩之杖" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****千岩古剑" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****千岩长枪" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****终末嗟叹之诗" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****暗巷闪光" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****暗巷的酒与诗" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****暗巷猎手" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "!!!!!*****松籁响起之时" << endl; pcount[85]++; } break;
                    case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;
                    case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;
                    case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;
                    case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;
                    case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;
                    case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;
                    case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;
                    case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;
                    case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;
                    case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;
                    case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;
                    case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;
                    case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;
                    case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;
                    case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;
                    case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;
                    case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;
                    case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;
                    case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;
                    case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;
                    case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;
                    case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;
                    case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;
                    case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;
                    case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;
                    case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;
                    case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;
                    case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;
                    case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;
                    case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;
                    case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;
                    case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;
                    case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;
                    case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;
                    case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;
                    case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;
                    case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;
                    case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;
                    case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;
                    case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;
                    case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;
                    case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;
                    default: break;
                    }
                    wishes_number--;
                    count++;
                    five_star_assurance_number++;
                    four_star_assurance_number++;
                    for (int templuck = 0; templuck < 9; templuck++) {
                        lucklocation[templuck] = lucklocation[templuck + 1];
                        lucksublocation[templuck] = lucksublocation[templuck + 1];
                        luckkind[templuck] = luckkind[templuck + 1];
                        luckstar[templuck] = luckstar[templuck + 1];
                    }
                    lucklocation[9] = count;
                    lucksublocation[9] = (long long int) five_star_assurance_number - 1;
                    luckkind[9] = kind;
                    luckstar[9] = star;
                    luck = 0;
                    if (star == 4 || star == 5) {
                        for (int templuck = 0; templuck < 10; templuck++) {
                            if (luckstar[templuck] == 5) luck += 16667;
                            else if (luckstar[templuck] == 4) luck += 2297;
                            else luck += 0;
                        }
                    }
                    if (count == 10) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                    if (luck > luckiest) {
                        luckiest = luck;
                        for (int templuck = 0; templuck < 10; templuck++) {
                            luckiestlocation[templuck] = lucklocation[templuck];
                            luckiestsublocation[templuck] = lucksublocation[templuck];
                            luckiestkind[templuck] = luckkind[templuck];
                        }
                    }
                }
            }
            if (wishes_number >= 0) {
                if (five_count == 0) {
                    std::cout << endl << "你已经抽了 " << count << " 发。" << endl
                        << "五星角色或武器:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
                        << "四星角色或武器:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl
                        << "五星角色 : 五星武器 : 四星角色 : 四星武器   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
                }
                else {
                    std::cout << endl << "你已经抽了 " << count << " 发。" << endl
                        << "五星角色或武器:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
                        << "四星角色或武器:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl
                        << "连续非五星最高纪录:   " << max_fives << " 发。发生在第 " << max_fivesth << " 个保底单元, 即第 " << max_fivecount + 1 << " 次祈愿。" << endl
                        << "连续非五星最低纪录:   " << min_fives << " 发。发生在第 " << min_fivesth << " 个保底单元, 即第 " << min_fivecount + 1 << " 次祈愿。" << endl
                        << "连续非五星平均祈愿数:   " << ave_fives * 1.0 / five_count << endl
                        << "五星角色 : 五星武器 : 四星角色 : 四星武器   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
                }
                for (int iout = 0; iout < 15; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                for (int iout = 63; iout < 71; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                for (int iout = 72; iout < 79; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                if (pcount[81] > 0) std::cout << pname[80] << "(" << pcount[81] << ")" << " ";
                if (pcount[85] > 0) std::cout << pname[85] << "(" << pcount[85] << ")" << " ";
                std::cout << endl << endl;
                for (int iout = 15; iout < 50; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                if (pcount[71] > 0) std::cout << pname[71] << "(" << pcount[71] << ")" << " ";
                if (pcount[79] > 0) std::cout << pname[79] << "(" << pcount[79] << ")" << " ";
                if (pcount[80] > 0) std::cout << pname[80] << "(" << pcount[80] << ")" << " ";
                for (int iout = 82; iout < 85; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                std::cout << endl << endl; auto elapsed = std::chrono::steady_clock::now() - start;
                long long int microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
                std::cout << microseconds * 1.0 / 1000000 << " 秒过去了。" << endl;
            }
            //if (chosen_banner == 4 && chosen_event == 1 && count == 20) goto full_quit;
        }
    }
full_quit:
    int prepause = getchar();
    int pause = getchar();
    return 0;
}