#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

int main() {
    int chosen_banner = 0;
    int chosen_event = 0;
    int wishes_number = 0;
    int four_star_assurance_number = 1;
    int five_star_assurance_number = 1;
    int five_star_guarantee_number = 0;
    int four_star_guarantee_number = 0;
    int quit = 1;
    std::cout << "ԭ��鿨ģ���������а�" << endl << endl;
    std::cout << "ѡ�񿨳�:" << endl;
    std::cout << "-1: �˳�; 1: ��ɫ���Ը; 2: �������Ը; 3: ��פ��Ը; 4: ������Ը" << endl << endl;
    std::cin >> chosen_banner;
    switch (chosen_banner) {
        case -1: break;
        case 1: {
            std::cout << endl << "ѡ�񿨳ػ����:" << endl
                << "1: ��װ֮ʫ/20200928-20201018 (�µ�, �Ű���, ��л��, ����)" << endl
                << "2: �����פ��/20201020-20201110 (����, ����, ŵ����, ɰ��)" << endl
                << "3: �ݱ𶬶�/20201111-20201201 (�������, �ϰ���, ����, ����)" << endl
                << "4: ��޴�г�/20201201-20201222 (����, ����, ����, ����)" << endl
                << "5: ����֮Ϣ/20201223-20210112 (������, ��л��, ɰ��, ������)" << endl
                << "6: ��������/20210112-20210202 (����, ����, ����, ŵ����)" << endl
                << "7: �̻�֮��/20210203-20210217 (��, �ϰ���, ����, ����)" << endl
                << "8: ��������/20210217-20210302 (����, ����, ������, �Ű���)" << endl
                << "9: ���ſ�ʱ/20210302-20210316 (����, ����, ����, ����)" << endl
                << "10: ��װ֮ʫ/20210317-20210406 (�µ�, ɰ��, ����, ŵ����)" << endl
                << "11: �ݱ𶬶�/20210406-20210427 (�������, ��ɯ����, �Ű���, ��л��)" << endl
                << "12: ��޴�г�/20210428-20210518 (����, ���, ŵ����, �ϰ���)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event > 0 && chosen_event < 13 && chosen_event == (int) chosen_event) quit = 0; else std::cout << endl << "������ڣ�" << endl;
        } break;
        case 2: {
            std::cout << endl << "ѡ�񿨳ػ����:" << endl
                << "1: ��������/20200928-20201018 (��ӥ��, ��Ī˹֮��, �ѽ�, �ӽ�, ��������, ����, ���糤ǹ)" << endl
                << "2: ��������/20201020-20201109 (�ķ�ԭ��, �ǵ�ĩ·, ����, ����, �����, �������, ϻ����)" << endl
                << "3: ��������/20201111-20201201 (����֮��, ���֮��, ���, ����, ����, ���糤ǹ)" << endl
                << "4: ��������/20201201-20201222 (���֮��, �޹�֮��, ϻ������, �ӽ�, �����ص�, �����Թ�, ϻ����)" << endl
                << "5: ��������/20201223-20210112 (��֮��, ���֮��, ���罣, �����, ���糤ǹ, �������, ����)" << endl
                << "6: ��������/20210112-20210202 (���֮��, ��Ī˹֮��, ����, �ӽ�, ϻ����, ����, �����Թ�)" << endl
                << "7: ��������/20210203-20210223 (���ҽ���, ����, ����, ����, ���糤ǹ, �����, �ѽ�)" << endl
                << "8: ��������/20210223-20210316 (��Ħ֮��, �ǵ�ĩ·, ǧ�ҳ�ǹ, ǧ�ҹŽ�, �ǵ�ĩ·, ����, ��������, ϻ������)" << endl
                << "9: ��������/20210317-20210406 (��ĩ�֮̾ʫ, ���֮��, ��������, ����ľ���ʫ, �����, �����Թ�, ϻ����)" << endl
                << "10: ��������/20210406-20210427 (���֮��, �ķ�ԭ��, ��������, ���罣, �����, �����ص�, ���糤ǹ)" << endl 
                << "11: ��������/20210428-20210518 (��֮��, ����֮��, ǧ�ҳ�ǹ, ǧ�ҹŽ�, ����, ����, �ѽ�)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event > 0 && chosen_event < 11 && chosen_event == (int) chosen_event) quit = 0; else std::cout << endl << "������ڣ�" << endl;
        } break;
        case 3: {
            std::cout << endl << "ѡ�񿨳ػ����:" << endl
            << "1: ��������/20200928-20201222 (����)" << endl
            << "2: ��������/20201223-20210427 (�����ϰ��Ⱥ�����)" << endl 
            << "3: ��������/20210428- (������ɯ����)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event > 0 && chosen_event < 3 && chosen_event == (int) chosen_event) quit = 0; else std::cout << endl << "������ڣ�" << endl;
        } break;
        case 4: chosen_event = 1; break;
        default: {chosen_banner = 0; chosen_event = 0; quit = 1; std::cout << "���ز����ڣ�" << endl;}
    }
    unsigned int seed = (unsigned int) std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 generator(seed);
    int count = 0;
    int five_count = 0;
    int four_count = 0;
    int threshold = 17;
    double unmet = 17.1;
    int unmet_count = 0;
    while (wishes_number >= 0) {
        if (quit == 1) break;
        std::cout << endl << "�鼸�Σ�-1���˳���1��һ����10��ʮ��"  << endl << endl;
        std::cin >> wishes_number;
        std::cout << endl;
        //if (!(wishes_number == -1||wishes_number == 10||wishes_number == 1)){std::cout << "Invalid number of wishes!" << endl;wishes_number = 0;}
        if (chosen_banner == 1 && chosen_event == 11) {
            while (wishes_number > 0) {
                long int temp1 = generator() % 12870000 + 1;
                long int temp2 = generator() % 12870000 + 1;
                long int temp3 = generator() % 12870000 + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (five_star_assurance_number <= 73 && four_star_assurance_number <= 8) {
                    if (temp1 <= 77220) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 733590) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 3217500 * (int)(10 * (unmet - threshold))) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1170000) kind = 10;
                            else if (temp3 <= 2340000) kind = 11;
                            else if (temp3 <= 3510000) kind = 12;
                            else if (temp3 <= 4680000) kind = 13;
                            else if (temp3 <= 5850000) kind = 14;
                            else if (temp3 <= 7020000) kind = 15;
                            else if (temp3 <= 8190000) kind = 16;
                            else if (temp3 <= 9360000) kind = 17;
                            else if (temp3 <= 10530000) kind = 18;
                            else if (temp3 <= 11700000) kind = 19;
                            else kind = 20;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 21;
                            else if (temp3 <= 1430000) kind = 22;
                            else if (temp3 <= 2145000) kind = 23;
                            else if (temp3 <= 2860000) kind = 24;
                            else if (temp3 <= 3575000) kind = 25;
                            else if (temp3 <= 4290000) kind = 26;
                            else if (temp3 <= 5005000) kind = 27;
                            else if (temp3 <= 5720000) kind = 28;
                            else if (temp3 <= 6435000) kind = 29;
                            else if (temp3 <= 7150000) kind = 30;
                            else if (temp3 <= 7865000) kind = 31;
                            else if (temp3 <= 8580000) kind = 32;
                            else if (temp3 <= 9295000) kind = 33;
                            else if (temp3 <= 10010000) kind = 34;
                            else if (temp3 <= 10725000) kind = 35;
                            else if (temp3 <= 11440000) kind = 36;
                            else if (temp3 <= 12155000) kind = 37;
                            else kind = 38;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 39;
                        else if (temp3 <= 1980000) kind = 40;
                        else if (temp3 <= 2970000) kind = 41;
                        else if (temp3 <= 3960000) kind = 42;
                        else if (temp3 <= 4950000) kind = 43;
                        else if (temp3 <= 5940000) kind = 44;
                        else if (temp3 <= 6930000) kind = 45;
                        else if (temp3 <= 7920000) kind = 46;
                        else if (temp3 <= 8910000) kind = 47;
                        else if (temp3 <= 9900000) kind = 48;
                        else if (temp3 <= 10890000) kind = 49;
                        else if (temp3 <= 11880000) kind = 50;
                        else kind = 51;
                    }
                }
                else if (five_star_assurance_number <= 73 && four_star_assurance_number == 9) {
                    if (temp1 <= 77220) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 7297290) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1170000) kind = 10;
                            else if (temp3 <= 2340000) kind = 11;
                            else if (temp3 <= 3510000) kind = 12;
                            else if (temp3 <= 4680000) kind = 13;
                            else if (temp3 <= 5850000) kind = 14;
                            else if (temp3 <= 7020000) kind = 15;
                            else if (temp3 <= 8190000) kind = 16;
                            else if (temp3 <= 9360000) kind = 17;
                            else if (temp3 <= 10530000) kind = 18;
                            else if (temp3 <= 11700000) kind = 19;
                            else kind = 20;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 21;
                            else if (temp3 <= 1430000) kind = 22;
                            else if (temp3 <= 2145000) kind = 23;
                            else if (temp3 <= 2860000) kind = 24;
                            else if (temp3 <= 3575000) kind = 25;
                            else if (temp3 <= 4290000) kind = 26;
                            else if (temp3 <= 5005000) kind = 27;
                            else if (temp3 <= 5720000) kind = 28;
                            else if (temp3 <= 6435000) kind = 29;
                            else if (temp3 <= 7150000) kind = 30;
                            else if (temp3 <= 7865000) kind = 31;
                            else if (temp3 <= 8580000) kind = 32;
                            else if (temp3 <= 9295000) kind = 33;
                            else if (temp3 <= 10010000) kind = 34;
                            else if (temp3 <= 10725000) kind = 35;
                            else if (temp3 <= 11440000) kind = 36;
                            else if (temp3 <= 12155000) kind = 37;
                            else kind = 38;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 39;
                        else if (temp3 <= 1980000) kind = 40;
                        else if (temp3 <= 2970000) kind = 41;
                        else if (temp3 <= 3960000) kind = 42;
                        else if (temp3 <= 4950000) kind = 43;
                        else if (temp3 <= 5940000) kind = 44;
                        else if (temp3 <= 6930000) kind = 45;
                        else if (temp3 <= 7920000) kind = 46;
                        else if (temp3 <= 8910000) kind = 47;
                        else if (temp3 <= 9900000) kind = 48;
                        else if (temp3 <= 10890000) kind = 49;
                        else if (temp3 <= 11880000) kind = 50;
                        else kind = 51;
                    }
                }
                else if (five_star_assurance_number <= 73 && four_star_assurance_number >= 10) {
                    if (temp1 <= 77220) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1170000) kind = 10;
                            else if (temp3 <= 2340000) kind = 11;
                            else if (temp3 <= 3510000) kind = 12;
                            else if (temp3 <= 4680000) kind = 13;
                            else if (temp3 <= 5850000) kind = 14;
                            else if (temp3 <= 7020000) kind = 15;
                            else if (temp3 <= 8190000) kind = 16;
                            else if (temp3 <= 9360000) kind = 17;
                            else if (temp3 <= 10530000) kind = 18;
                            else if (temp3 <= 11700000) kind = 19;
                            else kind = 20;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 21;
                            else if (temp3 <= 1430000) kind = 22;
                            else if (temp3 <= 2145000) kind = 23;
                            else if (temp3 <= 2860000) kind = 24;
                            else if (temp3 <= 3575000) kind = 25;
                            else if (temp3 <= 4290000) kind = 26;
                            else if (temp3 <= 5005000) kind = 27;
                            else if (temp3 <= 5720000) kind = 28;
                            else if (temp3 <= 6435000) kind = 29;
                            else if (temp3 <= 7150000) kind = 30;
                            else if (temp3 <= 7865000) kind = 31;
                            else if (temp3 <= 8580000) kind = 32;
                            else if (temp3 <= 9295000) kind = 33;
                            else if (temp3 <= 10010000) kind = 34;
                            else if (temp3 <= 10725000) kind = 35;
                            else if (temp3 <= 11440000) kind = 36;
                            else if (temp3 <= 12155000) kind = 37;
                            else kind = 38;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else if (five_star_assurance_number <= 89 && five_star_assurance_number >= 74 && four_star_assurance_number <= 8) {
                    if (temp1 <= 77220 + (five_star_assurance_number - 73) * 772200) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 733590 + (five_star_assurance_number - 73) * 772200) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1170000) kind = 10;
                            else if (temp3 <= 2340000) kind = 11;
                            else if (temp3 <= 3510000) kind = 12;
                            else if (temp3 <= 4680000) kind = 13;
                            else if (temp3 <= 5850000) kind = 14;
                            else if (temp3 <= 7020000) kind = 15;
                            else if (temp3 <= 8190000) kind = 16;
                            else if (temp3 <= 9360000) kind = 17;
                            else if (temp3 <= 10530000) kind = 18;
                            else if (temp3 <= 11700000) kind = 19;
                            else kind = 20;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 21;
                            else if (temp3 <= 1430000) kind = 22;
                            else if (temp3 <= 2145000) kind = 23;
                            else if (temp3 <= 2860000) kind = 24;
                            else if (temp3 <= 3575000) kind = 25;
                            else if (temp3 <= 4290000) kind = 26;
                            else if (temp3 <= 5005000) kind = 27;
                            else if (temp3 <= 5720000) kind = 28;
                            else if (temp3 <= 6435000) kind = 29;
                            else if (temp3 <= 7150000) kind = 30;
                            else if (temp3 <= 7865000) kind = 31;
                            else if (temp3 <= 8580000) kind = 32;
                            else if (temp3 <= 9295000) kind = 33;
                            else if (temp3 <= 10010000) kind = 34;
                            else if (temp3 <= 10725000) kind = 35;
                            else if (temp3 <= 11440000) kind = 36;
                            else if (temp3 <= 12155000) kind = 37;
                            else kind = 38;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 39;
                        else if (temp3 <= 1980000) kind = 40;
                        else if (temp3 <= 2970000) kind = 41;
                        else if (temp3 <= 3960000) kind = 42;
                        else if (temp3 <= 4950000) kind = 43;
                        else if (temp3 <= 5940000) kind = 44;
                        else if (temp3 <= 6930000) kind = 45;
                        else if (temp3 <= 7920000) kind = 46;
                        else if (temp3 <= 8910000) kind = 47;
                        else if (temp3 <= 9900000) kind = 48;
                        else if (temp3 <= 10890000) kind = 49;
                        else if (temp3 <= 11880000) kind = 50;
                        else kind = 51;
                    }
                }
                else if (five_star_assurance_number <= 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                    if (temp1 <= 77220 + (five_star_assurance_number - 73) * 772200) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 7297290 + (five_star_assurance_number - 73) * 772200) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1170000) kind = 10;
                            else if (temp3 <= 2340000) kind = 11;
                            else if (temp3 <= 3510000) kind = 12;
                            else if (temp3 <= 4680000) kind = 13;
                            else if (temp3 <= 5850000) kind = 14;
                            else if (temp3 <= 7020000) kind = 15;
                            else if (temp3 <= 8190000) kind = 16;
                            else if (temp3 <= 9360000) kind = 17;
                            else if (temp3 <= 10530000) kind = 18;
                            else if (temp3 <= 11700000) kind = 19;
                            else kind = 20;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 21;
                            else if (temp3 <= 1430000) kind = 22;
                            else if (temp3 <= 2145000) kind = 23;
                            else if (temp3 <= 2860000) kind = 24;
                            else if (temp3 <= 3575000) kind = 25;
                            else if (temp3 <= 4290000) kind = 26;
                            else if (temp3 <= 5005000) kind = 27;
                            else if (temp3 <= 5720000) kind = 28;
                            else if (temp3 <= 6435000) kind = 29;
                            else if (temp3 <= 7150000) kind = 30;
                            else if (temp3 <= 7865000) kind = 31;
                            else if (temp3 <= 8580000) kind = 32;
                            else if (temp3 <= 9295000) kind = 33;
                            else if (temp3 <= 10010000) kind = 34;
                            else if (temp3 <= 10725000) kind = 35;
                            else if (temp3 <= 11440000) kind = 36;
                            else if (temp3 <= 12155000) kind = 37;
                            else kind = 38;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 39;
                        else if (temp3 <= 1980000) kind = 40;
                        else if (temp3 <= 2970000) kind = 41;
                        else if (temp3 <= 3960000) kind = 42;
                        else if (temp3 <= 4950000) kind = 43;
                        else if (temp3 <= 5940000) kind = 44;
                        else if (temp3 <= 6930000) kind = 45;
                        else if (temp3 <= 7920000) kind = 46;
                        else if (temp3 <= 8910000) kind = 47;
                        else if (temp3 <= 9900000) kind = 48;
                        else if (temp3 <= 10890000) kind = 49;
                        else if (temp3 <= 11880000) kind = 50;
                        else kind = 51;
                    }
                }
                else if (five_star_assurance_number <= 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                    if (temp1 <= 77220 + (five_star_assurance_number - 73) * 772200) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1170000) kind = 10;
                            else if (temp3 <= 2340000) kind = 11;
                            else if (temp3 <= 3510000) kind = 12;
                            else if (temp3 <= 4680000) kind = 13;
                            else if (temp3 <= 5850000) kind = 14;
                            else if (temp3 <= 7020000) kind = 15;
                            else if (temp3 <= 8190000) kind = 16;
                            else if (temp3 <= 9360000) kind = 17;
                            else if (temp3 <= 10530000) kind = 18;
                            else if (temp3 <= 11700000) kind = 19;
                            else kind = 20;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 21;
                            else if (temp3 <= 1430000) kind = 22;
                            else if (temp3 <= 2145000) kind = 23;
                            else if (temp3 <= 2860000) kind = 24;
                            else if (temp3 <= 3575000) kind = 25;
                            else if (temp3 <= 4290000) kind = 26;
                            else if (temp3 <= 5005000) kind = 27;
                            else if (temp3 <= 5720000) kind = 28;
                            else if (temp3 <= 6435000) kind = 29;
                            else if (temp3 <= 7150000) kind = 30;
                            else if (temp3 <= 7865000) kind = 31;
                            else if (temp3 <= 8580000) kind = 32;
                            else if (temp3 <= 9295000) kind = 33;
                            else if (temp3 <= 10010000) kind = 34;
                            else if (temp3 <= 10725000) kind = 35;
                            else if (temp3 <= 11440000) kind = 36;
                            else if (temp3 <= 12155000) kind = 37;
                            else kind = 38;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else {
                    star = 5;
                    five_count = five_count + 1;
                    five_star_assurance_number = 0;
                    if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                    else if (temp2 <= 6435000) {
                        type = 1;
                        kind = 1;
                        five_star_guarantee_number = 0;
                    }
                    else {
                        type = 2;
                        five_star_guarantee_number = 1;
                        if (temp3 <= 2574000) kind = 2;
                        else if (temp3 <= 5148000) kind = 3;
                        else if (temp3 <= 7722000) kind = 4;
                        else if (temp3 <= 10296000) kind = 5;
                        else kind = 6;
                    }
                }
                std::cout << count + 1 << " ";
                switch (kind) {
                case 1: std::cout << "!!!!!*****�������" << endl; break;
                case 2: std::cout << "!!!!!*****��" << endl; break;
                case 3: std::cout << "!!!!!*****����" << endl; break;
                case 4: std::cout << "!!!!!*****����" << endl; break;
                case 5: std::cout << "!!!!!*****��¬��" << endl; break;
                case 6: std::cout << "!!!!!*****Ī��" << endl; break;
                case 7: std::cout << "!!****��л��" << endl; break;
                case 8: std::cout << "!!****��ɯ����" << endl; break;
                case 9: std::cout << "!!****�Ű���" << endl; break;
                case 10: std::cout << "!!****ɰ��" << endl; break;
                case 11: std::cout << "!!****����" << endl; break;
                case 12: std::cout << "!!****����" << endl; break;
                case 13: std::cout << "!!****����" << endl; break;
                case 14: std::cout << "!!****ŵ����" << endl; break;
                case 15: std::cout << "!!****����" << endl; break;
                case 16: std::cout << "!!****����" << endl; break;
                case 17: std::cout << "!!****������" << endl; break;
                case 18: std::cout << "!!****����" << endl; break;
                case 19: std::cout << "!!****�ϰ���" << endl; break;
                case 20: std::cout << "!!****����" << endl; break;
                case 21: std::cout << "!!****�����Թ�" << endl; break;
                case 22: std::cout << "!!****����" << endl; break;
                case 23: std::cout << "!!****����" << endl; break;
                case 24: std::cout << "!!****����" << endl; break;
                case 25: std::cout << "!!****�����ص�" << endl; break;
                case 26: std::cout << "!!****�������" << endl; break;
                case 27: std::cout << "!!****����" << endl; break;
                case 28: std::cout << "!!****��������" << endl; break;
                case 29: std::cout << "!!****�����" << endl; break;
                case 30: std::cout << "!!****�����" << endl; break;
                case 31: std::cout << "!!****���" << endl; break;
                case 32: std::cout << "!!****�ӽ�" << endl; break;
                case 33: std::cout << "!!****���糤ǹ" << endl; break;
                case 34: std::cout << "!!****ϻ����" << endl; break;
                case 35: std::cout << "!!****���罣" << endl; break;
                case 36: std::cout << "!!****����" << endl; break;
                case 37: std::cout << "!!****ϻ������" << endl; break;
                case 38: std::cout << "!!****�ѽ�" << endl; break;
                case 39: std::cout << "***�Թ�" << endl; break;
                case 40: std::cout << "***������֮��" << endl; break;
                case 41: std::cout << "***ѻ��" << endl; break;
                case 42: std::cout << "***������" << endl; break;
                case 43: std::cout << "***����Ӣ��̷" << endl; break;
                case 44: std::cout << "***ħ������" << endl; break;
                case 45: std::cout << "***�������" << endl; break;
                case 46: std::cout << "***��ԡ��Ѫ�Ľ�" << endl; break;
                case 47: std::cout << "***��Ӱ����" << endl; break;
                case 48: std::cout << "***��ӧǹ" << endl; break;
                case 49: std::cout << "***��������" << endl; break;
                case 50: std::cout << "***������" << endl; break;
                case 51: std::cout << "***����" << endl; break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (chosen_banner == 1 && chosen_event == 12) {
            while (wishes_number > 0) {
                long int temp1 = generator() % 12870000 + 1;
                long int temp2 = generator() % 12870000 + 1;
                long int temp3 = generator() % 12870000 + 1;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (unmet_count > threshold) unmet = (double)unmet_count;
                if (five_star_assurance_number <= 73 && four_star_assurance_number <= 8) {
                    if (temp1 <= 77220) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 733590) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 3217500 * (int)(10 * (unmet - threshold))) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1072500) kind = 10;
                            else if (temp3 <= 2145000) kind = 11;
                            else if (temp3 <= 3217500) kind = 12;
                            else if (temp3 <= 4290000) kind = 13;
                            else if (temp3 <= 5362500) kind = 14;
                            else if (temp3 <= 6435000) kind = 15;
                            else if (temp3 <= 7507500) kind = 16;
                            else if (temp3 <= 8580000) kind = 17;
                            else if (temp3 <= 9652500) kind = 18;
                            else if (temp3 <= 10725000) kind = 19;
                            else if (temp3 <= 11797500) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 22;
                            else if (temp3 <= 1430000) kind = 23;
                            else if (temp3 <= 2145000) kind = 24;
                            else if (temp3 <= 2860000) kind = 25;
                            else if (temp3 <= 3575000) kind = 26;
                            else if (temp3 <= 4290000) kind = 27;
                            else if (temp3 <= 5005000) kind = 28;
                            else if (temp3 <= 5720000) kind = 29;
                            else if (temp3 <= 6435000) kind = 30;
                            else if (temp3 <= 7150000) kind = 31;
                            else if (temp3 <= 7865000) kind = 32;
                            else if (temp3 <= 8580000) kind = 33;
                            else if (temp3 <= 9295000) kind = 34;
                            else if (temp3 <= 10010000) kind = 35;
                            else if (temp3 <= 10725000) kind = 36;
                            else if (temp3 <= 11440000) kind = 37;
                            else if (temp3 <= 12155000) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 40;
                        else if (temp3 <= 1980000) kind = 41;
                        else if (temp3 <= 2970000) kind = 42;
                        else if (temp3 <= 3960000) kind = 43;
                        else if (temp3 <= 4950000) kind = 44;
                        else if (temp3 <= 5940000) kind = 45;
                        else if (temp3 <= 6930000) kind = 46;
                        else if (temp3 <= 7920000) kind = 47;
                        else if (temp3 <= 8910000) kind = 48;
                        else if (temp3 <= 9900000) kind = 49;
                        else if (temp3 <= 10890000) kind = 50;
                        else if (temp3 <= 11880000) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number <= 73 && four_star_assurance_number == 9) {
                    if (temp1 <= 77220) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 7297290) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1072500) kind = 10;
                            else if (temp3 <= 2145000) kind = 11;
                            else if (temp3 <= 3217500) kind = 12;
                            else if (temp3 <= 4290000) kind = 13;
                            else if (temp3 <= 5362500) kind = 14;
                            else if (temp3 <= 6435000) kind = 15;
                            else if (temp3 <= 7507500) kind = 16;
                            else if (temp3 <= 8580000) kind = 17;
                            else if (temp3 <= 9652500) kind = 18;
                            else if (temp3 <= 10725000) kind = 19;
                            else if (temp3 <= 11797500) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 22;
                            else if (temp3 <= 1430000) kind = 23;
                            else if (temp3 <= 2145000) kind = 24;
                            else if (temp3 <= 2860000) kind = 25;
                            else if (temp3 <= 3575000) kind = 26;
                            else if (temp3 <= 4290000) kind = 27;
                            else if (temp3 <= 5005000) kind = 28;
                            else if (temp3 <= 5720000) kind = 29;
                            else if (temp3 <= 6435000) kind = 30;
                            else if (temp3 <= 7150000) kind = 31;
                            else if (temp3 <= 7865000) kind = 32;
                            else if (temp3 <= 8580000) kind = 33;
                            else if (temp3 <= 9295000) kind = 34;
                            else if (temp3 <= 10010000) kind = 35;
                            else if (temp3 <= 10725000) kind = 36;
                            else if (temp3 <= 11440000) kind = 37;
                            else if (temp3 <= 12155000) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 40;
                        else if (temp3 <= 1980000) kind = 41;
                        else if (temp3 <= 2970000) kind = 42;
                        else if (temp3 <= 3960000) kind = 43;
                        else if (temp3 <= 4950000) kind = 44;
                        else if (temp3 <= 5940000) kind = 45;
                        else if (temp3 <= 6930000) kind = 46;
                        else if (temp3 <= 7920000) kind = 47;
                        else if (temp3 <= 8910000) kind = 48;
                        else if (temp3 <= 9900000) kind = 49;
                        else if (temp3 <= 10890000) kind = 50;
                        else if (temp3 <= 11880000) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number <= 73 && four_star_assurance_number >= 10) {
                    if (temp1 <= 77220) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1072500) kind = 10;
                            else if (temp3 <= 2145000) kind = 11;
                            else if (temp3 <= 3217500) kind = 12;
                            else if (temp3 <= 4290000) kind = 13;
                            else if (temp3 <= 5362500) kind = 14;
                            else if (temp3 <= 6435000) kind = 15;
                            else if (temp3 <= 7507500) kind = 16;
                            else if (temp3 <= 8580000) kind = 17;
                            else if (temp3 <= 9652500) kind = 18;
                            else if (temp3 <= 10725000) kind = 19;
                            else if (temp3 <= 11797500) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 22;
                            else if (temp3 <= 1430000) kind = 23;
                            else if (temp3 <= 2145000) kind = 24;
                            else if (temp3 <= 2860000) kind = 25;
                            else if (temp3 <= 3575000) kind = 26;
                            else if (temp3 <= 4290000) kind = 27;
                            else if (temp3 <= 5005000) kind = 28;
                            else if (temp3 <= 5720000) kind = 29;
                            else if (temp3 <= 6435000) kind = 30;
                            else if (temp3 <= 7150000) kind = 31;
                            else if (temp3 <= 7865000) kind = 32;
                            else if (temp3 <= 8580000) kind = 33;
                            else if (temp3 <= 9295000) kind = 34;
                            else if (temp3 <= 10010000) kind = 35;
                            else if (temp3 <= 10725000) kind = 36;
                            else if (temp3 <= 11440000) kind = 37;
                            else if (temp3 <= 12155000) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else if (five_star_assurance_number <= 89 && five_star_assurance_number >= 74 && four_star_assurance_number <= 8) {
                    if (temp1 <= 77220 + (five_star_assurance_number - 73) * 772200) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 733590 + (five_star_assurance_number - 73) * 772200) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1072500) kind = 10;
                            else if (temp3 <= 2145000) kind = 11;
                            else if (temp3 <= 3217500) kind = 12;
                            else if (temp3 <= 4290000) kind = 13;
                            else if (temp3 <= 5362500) kind = 14;
                            else if (temp3 <= 6435000) kind = 15;
                            else if (temp3 <= 7507500) kind = 16;
                            else if (temp3 <= 8580000) kind = 17;
                            else if (temp3 <= 9652500) kind = 18;
                            else if (temp3 <= 10725000) kind = 19;
                            else if (temp3 <= 11797500) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 22;
                            else if (temp3 <= 1430000) kind = 23;
                            else if (temp3 <= 2145000) kind = 24;
                            else if (temp3 <= 2860000) kind = 25;
                            else if (temp3 <= 3575000) kind = 26;
                            else if (temp3 <= 4290000) kind = 27;
                            else if (temp3 <= 5005000) kind = 28;
                            else if (temp3 <= 5720000) kind = 29;
                            else if (temp3 <= 6435000) kind = 30;
                            else if (temp3 <= 7150000) kind = 31;
                            else if (temp3 <= 7865000) kind = 32;
                            else if (temp3 <= 8580000) kind = 33;
                            else if (temp3 <= 9295000) kind = 34;
                            else if (temp3 <= 10010000) kind = 35;
                            else if (temp3 <= 10725000) kind = 36;
                            else if (temp3 <= 11440000) kind = 37;
                            else if (temp3 <= 12155000) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 40;
                        else if (temp3 <= 1980000) kind = 41;
                        else if (temp3 <= 2970000) kind = 42;
                        else if (temp3 <= 3960000) kind = 43;
                        else if (temp3 <= 4950000) kind = 44;
                        else if (temp3 <= 5940000) kind = 45;
                        else if (temp3 <= 6930000) kind = 46;
                        else if (temp3 <= 7920000) kind = 47;
                        else if (temp3 <= 8910000) kind = 48;
                        else if (temp3 <= 9900000) kind = 49;
                        else if (temp3 <= 10890000) kind = 50;
                        else if (temp3 <= 11880000) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number <= 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                    if (temp1 <= 77220 + (five_star_assurance_number - 73) * 772200) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else if (temp1 <= 7297290 + (five_star_assurance_number - 73) * 772200) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1072500) kind = 10;
                            else if (temp3 <= 2145000) kind = 11;
                            else if (temp3 <= 3217500) kind = 12;
                            else if (temp3 <= 4290000) kind = 13;
                            else if (temp3 <= 5362500) kind = 14;
                            else if (temp3 <= 6435000) kind = 15;
                            else if (temp3 <= 7507500) kind = 16;
                            else if (temp3 <= 8580000) kind = 17;
                            else if (temp3 <= 9652500) kind = 18;
                            else if (temp3 <= 10725000) kind = 19;
                            else if (temp3 <= 11797500) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 22;
                            else if (temp3 <= 1430000) kind = 23;
                            else if (temp3 <= 2145000) kind = 24;
                            else if (temp3 <= 2860000) kind = 25;
                            else if (temp3 <= 3575000) kind = 26;
                            else if (temp3 <= 4290000) kind = 27;
                            else if (temp3 <= 5005000) kind = 28;
                            else if (temp3 <= 5720000) kind = 29;
                            else if (temp3 <= 6435000) kind = 30;
                            else if (temp3 <= 7150000) kind = 31;
                            else if (temp3 <= 7865000) kind = 32;
                            else if (temp3 <= 8580000) kind = 33;
                            else if (temp3 <= 9295000) kind = 34;
                            else if (temp3 <= 10010000) kind = 35;
                            else if (temp3 <= 10725000) kind = 36;
                            else if (temp3 <= 11440000) kind = 37;
                            else if (temp3 <= 12155000) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                    else {
                        star = 3;
                        type = 2;
                        if (temp3 <= 990000) kind = 40;
                        else if (temp3 <= 1980000) kind = 41;
                        else if (temp3 <= 2970000) kind = 42;
                        else if (temp3 <= 3960000) kind = 43;
                        else if (temp3 <= 4950000) kind = 44;
                        else if (temp3 <= 5940000) kind = 45;
                        else if (temp3 <= 6930000) kind = 46;
                        else if (temp3 <= 7920000) kind = 47;
                        else if (temp3 <= 8910000) kind = 48;
                        else if (temp3 <= 9900000) kind = 49;
                        else if (temp3 <= 10890000) kind = 50;
                        else if (temp3 <= 11880000) kind = 51;
                        else kind = 52;
                    }
                }
                else if (five_star_assurance_number <= 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                    if (temp1 <= 77220 + (five_star_assurance_number - 73) * 772200) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 <= 2574000) kind = 2;
                            else if (temp3 <= 5148000) kind = 3;
                            else if (temp3 <= 7722000) kind = 4;
                            else if (temp3 <= 10296000) kind = 5;
                            else kind = 6;
                        }
                    }
                    else {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        if (four_star_guarantee_number == 1) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9; 
                            four_star_guarantee_number = 0;
                            }
                        else if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
                            four_star_guarantee_number = 0;
                        }
                        else if (temp2 <= 9652500) {
                            type = 2;
                            unmet_count = 0;
                            unmet = (double)17.1;
                            if (temp3 <= 1072500) kind = 10;
                            else if (temp3 <= 2145000) kind = 11;
                            else if (temp3 <= 3217500) kind = 12;
                            else if (temp3 <= 4290000) kind = 13;
                            else if (temp3 <= 5362500) kind = 14;
                            else if (temp3 <= 6435000) kind = 15;
                            else if (temp3 <= 7507500) kind = 16;
                            else if (temp3 <= 8580000) kind = 17;
                            else if (temp3 <= 9652500) kind = 18;
                            else if (temp3 <= 10725000) kind = 19;
                            else if (temp3 <= 11797500) kind = 20;
                            else kind = 21;
                            four_star_guarantee_number = 1;
                        }
                        else {
                            type = 3;
                            unmet_count = unmet_count + 1;
                            if (temp3 <= 7150000) kind = 22;
                            else if (temp3 <= 1430000) kind = 23;
                            else if (temp3 <= 2145000) kind = 24;
                            else if (temp3 <= 2860000) kind = 25;
                            else if (temp3 <= 3575000) kind = 26;
                            else if (temp3 <= 4290000) kind = 27;
                            else if (temp3 <= 5005000) kind = 28;
                            else if (temp3 <= 5720000) kind = 29;
                            else if (temp3 <= 6435000) kind = 30;
                            else if (temp3 <= 7150000) kind = 31;
                            else if (temp3 <= 7865000) kind = 32;
                            else if (temp3 <= 8580000) kind = 33;
                            else if (temp3 <= 9295000) kind = 34;
                            else if (temp3 <= 10010000) kind = 35;
                            else if (temp3 <= 10725000) kind = 36;
                            else if (temp3 <= 11440000) kind = 37;
                            else if (temp3 <= 12155000) kind = 38;
                            else kind = 39;
                            four_star_guarantee_number = 1;
                        }
                    }
                }
                else {
                    star = 5;
                    five_count = five_count + 1;
                    five_star_assurance_number = 0;
                    if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                    else if (temp2 <= 6435000) {
                        type = 1;
                        kind = 1;
                        five_star_guarantee_number = 0;
                    }
                    else {
                        type = 2;
                        five_star_guarantee_number = 1;
                        if (temp3 <= 2574000) kind = 2;
                        else if (temp3 <= 5148000) kind = 3;
                        else if (temp3 <= 7722000) kind = 4;
                        else if (temp3 <= 10296000) kind = 5;
                        else kind = 6;
                    }
                }
                std::cout << count + 1 << " ";
                switch (kind) {
                case 1: std::cout << "!!!!!*****����" << endl; break;
                case 2: std::cout << "!!!!!*****��" << endl; break;
                case 3: std::cout << "!!!!!*****����" << endl; break;
                case 4: std::cout << "!!!!!*****����" << endl; break;
                case 5: std::cout << "!!!!!*****��¬��" << endl; break;
                case 6: std::cout << "!!!!!*****Ī��" << endl; break;
                case 7: std::cout << "!!****���" << endl; break;
                case 8: std::cout << "!!****ŵ����" << endl; break;
                case 9: std::cout << "!!****�ϰ���" << endl; break;
                case 10: std::cout << "!!****ɰ��" << endl; break;
                case 11: std::cout << "!!****����" << endl; break;
                case 12: std::cout << "!!****����" << endl; break;
                case 13: std::cout << "!!****����" << endl; break;
                case 14: std::cout << "!!****��ɯ����" << endl; break;
                case 15: std::cout << "!!****����" << endl; break;
                case 16: std::cout << "!!****����" << endl; break;
                case 17: std::cout << "!!****������" << endl; break;
                case 18: std::cout << "!!****����" << endl; break;
                case 19: std::cout << "!!****�Ű���" << endl; break;
                case 20: std::cout << "!!****����" << endl; break;
                case 21: std::cout << "!!****��л��" << endl; break;
                case 22: std::cout << "!!****�����Թ�" << endl; break;
                case 23: std::cout << "!!****����" << endl; break;
                case 24: std::cout << "!!****����" << endl; break;
                case 25: std::cout << "!!****����" << endl; break;
                case 26: std::cout << "!!****�����ص�" << endl; break;
                case 27: std::cout << "!!****�������" << endl; break;
                case 28: std::cout << "!!****����" << endl; break;
                case 29: std::cout << "!!****��������" << endl; break;
                case 30: std::cout << "!!****�����" << endl; break;
                case 31: std::cout << "!!****�����" << endl; break;
                case 32: std::cout << "!!****���" << endl; break;
                case 33: std::cout << "!!****�ӽ�" << endl; break;
                case 34: std::cout << "!!****���糤ǹ" << endl; break;
                case 35: std::cout << "!!****ϻ����" << endl; break;
                case 36: std::cout << "!!****���罣" << endl; break;
                case 37: std::cout << "!!****����" << endl; break;
                case 38: std::cout << "!!****ϻ������" << endl; break;
                case 39: std::cout << "!!****�ѽ�" << endl; break;
                case 40: std::cout << "***�Թ�" << endl; break;
                case 41: std::cout << "***������֮��" << endl; break;
                case 42: std::cout << "***ѻ��" << endl; break;
                case 43: std::cout << "***������" << endl; break;
                case 44: std::cout << "***����Ӣ��̷" << endl; break;
                case 45: std::cout << "***ħ������" << endl; break;
                case 46: std::cout << "***�������" << endl; break;
                case 47: std::cout << "***��ԡ��Ѫ�Ľ�" << endl; break;
                case 48: std::cout << "***��Ӱ����" << endl; break;
                case 49: std::cout << "***��ӧǹ" << endl; break;
                case 50: std::cout << "***��������" << endl; break;
                case 51: std::cout << "***������" << endl; break;
                case 52: std::cout << "***����" << endl; break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (wishes_number >= 0) std::cout << endl << "���Ѿ����� " << count << " ����" << endl
            << "5�ǽ�ɫ������:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
            << "4�ǽ�ɫ������:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl << endl;
    }
    int prepause = getchar();
    int pause = getchar();
}
