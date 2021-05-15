#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <string>
#define ULTRAPOS 437580000
using namespace std;

unsigned int seed = (unsigned int) std::chrono::high_resolution_clock::now().time_since_epoch().count();
std::mt19937_64 generator(seed);

string pname[128] = {
                "����",
                "Ī��",
                "����",
                "��¬��",
                "��",
                "��Ī˹֮��",
                "���֮��",
                "�ķ�ԭ��",
                "���֮��",
                "����",
                "���֮��",
                "�ǵ�ĩ·",
                "���֮��",
                "���֮��",
                "��ӥ��",
                "��ɯ����",
                "����",
                "ɰ��",
                "�ϰ���",
                "����",
                "ŵ����",
                "������",
                "��л��",
                "����",
                "����",
                "����",
                "����",
                "����",
                "����",
                "����",
                "�Ű���",
                "��ɯ",
                "����",
                "����",
                "����",
                "�����Թ�",
                "����",
                "�������",
                "��������",
                "�����ص�",
                "���糤ǹ",
                "ϻ����",
                "���",
                "�����",
                "�ӽ�",
                "�����",
                "ϻ������",
                "����",
                "�ѽ�",
                "���罣",
                "�Թ�",
                "������֮��",
                "ѻ��",
                "������",
                "����Ӣ��̷",
                "ħ������",
                "��ӧǹ",
                "��������",
                "��ԡ��Ѫ�Ľ�",
                "��Ӱ����",
                "��������",
                "������",
                "����",
                "�µ�",
                "����",
                "�������",
                "����",
                "������",
                "����",
                "��",
                "����",
                "���",
                "��ǉ",
                "����֮��",
                "���֮��",
                "�޹�֮��",
                "����֮��",
                "���ҽ���",
                "��Ħ֮��",
                "ǧ�ҹŽ�",
                "ǧ�ҳ�ǹ",
                "��ĩ�֮̾ʫ",
                "��������",
                "����ľ���ʫ",
                "��������",
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
                "Placeholder",
};

int rspick(int* kindx, int sizekind) {
    int kindout = kindx[1];
    int index = 0;
    int temp221 = 0;
    for (; index < sizekind; index++)
    {
        temp221 = generator() % ((long long int)(index) + 1);
        if (temp221 < 1)
            kindout = kindx[index];
    }
    return kindout;
}

int main() {
    std::cout << "ԭ��鿨ģ�����������У�" << endl << endl;
    while (1) {
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
        int is_ŵ���� = 1;
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
    enter_chosen_banner:
        chosen_banner = 0;
        std::cout << "ѡ�񿨳�����:" << endl;
        std::cout << "-1: �˳�; 1: ��ɫ���Ը; 2: �������Ը; 3: ��פ��Ը; 4: ������Ը;" << endl << endl;
        std::cin >> chosen_banner;
        switch (chosen_banner) {
        case -1: goto full_quit;
        case 1: {
        enter_chosen_event_1:
            chosen_event = 0;
            std::cout << endl << "ѡ������:" << endl
                << "-1: ����ѡ�񿨳�����" << endl
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
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 13 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "��Ч�����!" << endl << endl; goto enter_chosen_event_1; }
        } break;
        case 2: {
        enter_chosen_event_2:
            chosen_event = 0;
            std::cout << endl << "ѡ������:" << endl
                << "-1: ����ѡ�񿨳�����" << endl
                << "1: ��������/20200928-20201018 (��ӥ��, ��Ī˹֮��, �ѽ�, �ӽ�, ��������, ����, ���糤ǹ)" << endl
                << "2: ��������/20201020-20201109 (�ķ�ԭ��, �ǵ�ĩ·, ����, ����, �����, �������, ϻ����)" << endl
                << "3: ��������/20201111-20201201 (����֮��, ���֮��, ���, ����, ����, ���糤ǹ)" << endl
                << "4: ��������/20201201-20201222 (���֮��, �޹�֮��, ϻ������, �ӽ�, �����ص�, �����Թ�, ϻ����)" << endl
                << "5: ��������/20201223-20210112 (����֮��, ���֮��, ���罣, �����, ���糤ǹ, �������, ����)" << endl
                << "6: ��������/20210112-20210202 (���֮��, ��Ī˹֮��, ����, �ӽ�, ϻ����, ����, �����Թ�)" << endl
                << "7: ��������/20210203-20210223 (���ҽ���, ����, ����, ����, ���糤ǹ, �����, �ѽ�)" << endl
                << "8: ��������/20210223-20210316 (��Ħ֮��, ǧ�ҹŽ�, ǧ�ҳ�ǹ, �ǵ�ĩ·, ����, ��������, ϻ������)" << endl
                << "9: ��������/20210317-20210406 (��ĩ�֮̾ʫ, ���֮��, ��������, ����ľ���ʫ, �����, �����Թ�, ϻ����)" << endl
                << "10: ��������/20210406-20210427 (���֮��, �ķ�ԭ��, ��������, ���罣, �����, �����ص�, ���糤ǹ)" << endl
                << "11: ��������/20210428-20210518 (����֮��, ����֮��, �ѽ�, ǧ�ҹŽ�, ǧ�ҳ�ǹ, ����, ����)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 12 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "��Ч�����!" << endl << endl; goto enter_chosen_event_2; }
        } break;
        case 3: {
        enter_chosen_event_3:
            chosen_event = 0;
            std::cout << endl << "ѡ������:" << endl
                << "-1: ����ѡ�񿨳�����" << endl
                << "1: ��������/20200928-20201222 (����)" << endl
                << "2: ��������/20201223-20210427 (�����ϰ��Ⱥ�����)" << endl
                << "3: ��������/20210428- (������ɯ����)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 4 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "��Ч�����!" << endl << endl; goto enter_chosen_event_3; }
        } break;
        case 4: {
        enter_chosen_event_4:
            chosen_event = 0;
            std::cout << endl << "ѡ������:" << endl
                << "-1: ����ѡ�񿨳�����" << endl
                << "1: ������Ը" << endl << endl;
            std::cin >> chosen_event; quit = 0; } break;
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event == 1 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "��Ч�����!" << endl << endl; goto enter_chosen_event_4; }
        default: {chosen_banner = 0; chosen_event = 0; quit = 1; std::cout << "��Ч��������!" << endl << endl; goto enter_chosen_banner; }
        }
        while (wishes_number >= 0) {
            if (quit == 1) goto full_quit;
            enter_wishes_number:
            std::cout << endl << "�鼸��?" << endl << "-1: ����ѡ�񿨳�����; 1: 1��; 10: 10��" << endl << endl;
            std::cin >> wishes_number;
            std::cout << endl;
            if (chosen_banner == 4 && chosen_event == 1 && wishes_number == -1) { wishes_number = 0; goto full_quit; }
            //if (chosen_banner == 4 && chosen_event == 1 && wishes_number != 10) { wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
            //if (!(wishes_number == -1||wishes_number == 10||wishes_number == 1)){ wishes_number = 0; std::cout << "Invalid number of wishes!" << endl; goto enter_wishes_number; }
            auto start = std::chrono::steady_clock::now();
            /*
            if (chosen_banner == 1 && chosen_event == 11) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS + 1;
                    long long int temp2 = generator() % ULTRAPOS + 1;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (unmet_count > threshold) unmet = (double)unmet_count;
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 66;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                int templist[] = {1, 2, 3, 4, 5};
                                kind = rspick(templist, 5);
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000*57) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/4 * (int)(10 * (unmet - threshold))) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                int templist[] = {17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 29};
                                kind = rspick(templist, 11);
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                int templist[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
                                kind = rspick(templist, 18);
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = {51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63};
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 66;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                int templist[] = {1, 2, 3, 4, 5};
                                kind = rspick(templist, 5);
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                int templist[] = {17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 29};
                                kind = rspick(templist, 11);
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                int templist[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
                                kind = rspick(templist, 18);
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = {51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63};
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 66;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                int templist[] = {1, 2, 3, 4, 5};
                                kind = rspick(templist, 5);
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                int templist[] = {17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 29};
                                kind = rspick(templist, 11);
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                int templist[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
                                kind = rspick(templist, 18);
                                four_star_guarantee_number = 1;
                            }
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 66;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                int templist[] = {1, 2, 3, 4, 5};
                                kind = rspick(templist, 5);
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000 * 57 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                int templist[] = {17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 29};
                                kind = rspick(templist, 11);
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                int templist[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
                                kind = rspick(templist, 18);
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = {51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63};
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 66;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                int templist[] = {1, 2, 3, 4, 5};
                                kind = rspick(templist, 5);
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000 * 567 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                int templist[] = {17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 29};
                                kind = rspick(templist, 11);
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                int templist[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
                                kind = rspick(templist, 18);
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = {51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63};
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 66;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                int templist[] = {1, 2, 3, 4, 5};
                                kind = rspick(templist, 5);
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                int templist[] = {16, 23, 31};
                                kind = rspick(templist, 3);
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                int templist[] = {17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 29};
                                kind = rspick(templist, 11);
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                int templist[] = {33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
                                kind = rspick(templist, 18);
                                four_star_guarantee_number = 1;
                            }
                        }
                    }
                    else {
                        star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 66; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 66;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            int templist[] = {1, 2, 3, 4, 5};
                            kind = rspick(templist, 5);
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****����" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****Ī��" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****����" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****��¬��" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****��" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****��Ī˹֮��" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****���֮��" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****�ķ�ԭ��" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****���֮��" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****����" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****���֮��" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****�ǵ�ĩ·" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****���֮��" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****���֮��" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****��ӥ��" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****��ɯ����" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****����" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****ɰ��" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****�ϰ���" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****����" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****ŵ����" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****������" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****��л��" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****����" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****����" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****����" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****����" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****����" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****����" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****����" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****�Ű���" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****��ɯ" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****����" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****����" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****����" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****�����Թ�" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****����" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****�������" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****��������" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****�����ص�" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****���糤ǹ" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****ϻ����" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****���" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****�����" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****�ӽ�" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****�����" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****ϻ������" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****����" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****�ѽ�" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****���罣" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***�Թ�" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***������֮��" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***ѻ��" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***������" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***����Ӣ��̷" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***ħ������" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***��ӧǹ" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***��������" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***��ԡ��Ѫ�Ľ�" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***��Ӱ����" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***��������" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***������" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***����" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****�µ�" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****����" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****�������" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****����" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****������" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****����" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****��" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****����" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****���" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!****��ǉ" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****����֮��" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****���֮��" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****�޹�֮��" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****����֮��" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****���ҽ���" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****��Ħ֮��" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****ǧ�ҹŽ�" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****ǧ�ҳ�ǹ" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****��ĩ�֮̾ʫ" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****��������" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****����ľ���ʫ" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****��������" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
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
                    }
                    wishes_number = wishes_number - 1;
                    count = count + 1;
                    five_star_assurance_number = five_star_assurance_number + 1;
                    four_star_assurance_number = four_star_assurance_number + 1;
                }
            }
            if (chosen_banner == 1 && chosen_event == 12) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS + 1;
                    long long int temp2 = generator() % ULTRAPOS + 1;
                    long long int temp3 = generator() % ULTRAPOS + 1;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (unmet_count > threshold) unmet = (double)unmet_count;
                    if (five_star_assurance_number < 1 + 73 && four_star_assurance_number < 1 + 8) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 1;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                                else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                                else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                                else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                                else kind = 6;
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000 * 57) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/4 * (int)(10 * (unmet - threshold))) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                                else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                                else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                                else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                                else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                                else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                                else kind = 21;
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                                else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                                else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                                else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                                else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                                else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                                else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                                else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                                else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                                else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                                else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                                else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                                else kind = 39;
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                            else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                            else kind = 52;
                        }
                    }
                    else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number == 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 1;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                                else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                                else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                                else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                                else kind = 6;
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000 * 567) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                                else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                                else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                                else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                                else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                                else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                                else kind = 21;
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                                else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                                else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                                else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                                else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                                else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                                else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                                else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                                else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                                else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                                else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                                else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                                else kind = 39;
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                            else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                            else kind = 52;
                        }
                    }
                    else if (five_star_assurance_number < 1 + 73 && four_star_assurance_number >= 10) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 1;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                                else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                                else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                                else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                                else kind = 6;
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                                else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                                else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                                else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                                else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                                else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                                else kind = 21;
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                                else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                                else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                                else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                                else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                                else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                                else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                                else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                                else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                                else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                                else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                                else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                                else kind = 39;
                                four_star_guarantee_number = 1;
                            }
                        }
                    }
                    else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number < 1 + 8) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 1;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                                else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                                else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                                else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                                else kind = 6;
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000 * 57 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                                else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                                else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                                else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                                else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                                else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                                else kind = 21;
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                                else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                                else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                                else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                                else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                                else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                                else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                                else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                                else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                                else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                                else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                                else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                                else kind = 39;
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                            else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                            else kind = 52;
                        }
                    }
                    else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number == 9) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 1;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                                else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                                else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                                else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                                else kind = 6;
                            }
                        }
                        else if (temp1 < 1 + ULTRAPOS/1000 * 567 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                                else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                                else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                                else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                                else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                                else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                                else kind = 21;
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                                else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                                else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                                else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                                else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                                else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                                else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                                else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                                else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                                else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                                else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                                else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                                else kind = 39;
                                four_star_guarantee_number = 1;
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            if (temp3 < 1 + ULTRAPOS/13) kind = 40;
                            else if (temp3 < 1 + ULTRAPOS/13 * 2) kind = 41;
                            else if (temp3 < 1 + ULTRAPOS/13 * 3) kind = 42;
                            else if (temp3 < 1 + ULTRAPOS/13 * 4) kind = 43;
                            else if (temp3 < 1 + ULTRAPOS/13 * 5) kind = 44;
                            else if (temp3 < 1 + ULTRAPOS/13 * 6) kind = 45;
                            else if (temp3 < 1 + ULTRAPOS/13 * 7) kind = 46;
                            else if (temp3 < 1 + ULTRAPOS/13 * 8) kind = 47;
                            else if (temp3 < 1 + ULTRAPOS/13 * 9) kind = 48;
                            else if (temp3 < 1 + ULTRAPOS/13 * 10) kind = 49;
                            else if (temp3 < 1 + ULTRAPOS/13 * 11) kind = 50;
                            else if (temp3 < 1 + ULTRAPOS/13 * 12) kind = 51;
                            else kind = 52;
                        }
                    }
                    else if (five_star_assurance_number < 1 + 89 && five_star_assurance_number >= 74 && four_star_assurance_number >= 10) {
                        if (temp1 < 1 + ULTRAPOS/1000 * 6 + (five_star_assurance_number - 73) * ULTRAPOS/1000 * 60) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                            else if (temp2 < 1 + ULTRAPOS/2) {
                                type = 1;
                                kind = 1;
                                five_star_guarantee_number = 0;
                            }
                            else {
                                type = 2;
                                five_star_guarantee_number = 1;
                                if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                                else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                                else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                                else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                                else kind = 6;
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (four_star_guarantee_number == 1) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                                }
                            else if (temp2 < 1 + ULTRAPOS/2 * (int)(10 * (unmet - threshold))) {
                                type = 1;
                                if (temp3 < 1 + ULTRAPOS/3) kind = 7;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 8;
                                else kind = 9;
                                four_star_guarantee_number = 0;
                            }
                            else if (temp2 < 1 + ULTRAPOS/6 * 5) {
                                type = 2;
                                unmet_count = 0;
                                unmet = (double)17.1;
                                if (temp3 < 1 + ULTRAPOS/12) kind = 10;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 11;
                                else if (temp3 < 1 + ULTRAPOS/4) kind = 12;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 13;
                                else if (temp3 < 1 + ULTRAPOS/12 * 5) kind = 14;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 15;
                                else if (temp3 < 1 + ULTRAPOS/12 * 7) kind = 16;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 17;
                                else if (temp3 < 1 + ULTRAPOS/4 * 3) kind = 18;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 19;
                                else if (temp3 < 1 + ULTRAPOS/12 * 11) kind = 20;
                                else kind = 21;
                                four_star_guarantee_number = 1;
                            }
                            else {
                                type = 3;
                                unmet_count = unmet_count + 1;
                                if (temp3 < 1 + ULTRAPOS/18) kind = 22;
                                else if (temp3 < 1 + ULTRAPOS/9) kind = 23;
                                else if (temp3 < 1 + ULTRAPOS/6) kind = 24;
                                else if (temp3 < 1 + ULTRAPOS/9 * 2) kind = 25;
                                else if (temp3 < 1 + ULTRAPOS/18 * 5) kind = 26;
                                else if (temp3 < 1 + ULTRAPOS/3) kind = 27;
                                else if (temp3 < 1 + ULTRAPOS/18 * 7) kind = 28;
                                else if (temp3 < 1 + ULTRAPOS/9 * 4) kind = 29;
                                else if (temp3 < 1 + ULTRAPOS/2) kind = 30;
                                else if (temp3 < 1 + ULTRAPOS/9 * 5) kind = 31;
                                else if (temp3 < 1 + ULTRAPOS/18 * 11) kind = 32;
                                else if (temp3 < 1 + ULTRAPOS/3 * 2) kind = 33;
                                else if (temp3 < 1 + ULTRAPOS/18 * 13) kind = 34;
                                else if (temp3 < 1 + ULTRAPOS/9 * 7) kind = 35;
                                else if (temp3 < 1 + ULTRAPOS/6 * 5) kind = 36;
                                else if (temp3 < 1 + ULTRAPOS/9 * 8) kind = 37;
                                else if (temp3 < 1 + ULTRAPOS/18 * 17) kind = 38;
                                else kind = 39;
                                four_star_guarantee_number = 1;
                            }
                        }
                    }
                    else {
                        star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; five_star_guarantee_number = 0;}
                        else if (temp2 < 1 + ULTRAPOS/2) {
                            type = 1;
                            kind = 1;
                            five_star_guarantee_number = 0;
                        }
                        else {
                            type = 2;
                            five_star_guarantee_number = 1;
                            if (temp3 < 1 + ULTRAPOS/5) kind = 2;
                            else if (temp3 < 1 + ULTRAPOS/5 * 2) kind = 3;
                            else if (temp3 < 1 + ULTRAPOS/5 * 3) kind = 4;
                            else if (temp3 < 1 + ULTRAPOS/5 * 4) kind = 5;
                            else kind = 6;
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****����" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****Ī��" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****����" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****��¬��" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****��" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****��Ī˹֮��" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****���֮��" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****�ķ�ԭ��" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****���֮��" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****����" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****���֮��" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****�ǵ�ĩ·" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****���֮��" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****���֮��" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****��ӥ��" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****��ɯ����" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****����" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****ɰ��" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****�ϰ���" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****����" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****ŵ����" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****������" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****��л��" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****����" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****����" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****����" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****����" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****����" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****����" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****����" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****�Ű���" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****��ɯ" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****����" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****����" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****����" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****�����Թ�" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****����" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****�������" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****��������" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****�����ص�" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****���糤ǹ" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****ϻ����" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****���" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****�����" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****�ӽ�" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****�����" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****ϻ������" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****����" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****�ѽ�" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****���罣" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***�Թ�" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***������֮��" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***ѻ��" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***������" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***����Ӣ��̷" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***ħ������" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***��ӧǹ" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***��������" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***��ԡ��Ѫ�Ľ�" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***��Ӱ����" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***��������" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***������" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***����" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****�µ�" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****����" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****�������" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****����" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****������" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****����" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****��" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****����" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****���" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!****��ǉ" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****����֮��" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****���֮��" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****�޹�֮��" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****����֮��" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****���ҽ���" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****��Ħ֮��" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****ǧ�ҹŽ�" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****ǧ�ҳ�ǹ" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****��ĩ�֮̾ʫ" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****��������" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****����ľ���ʫ" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****��������" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
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
                    }
                    wishes_number = wishes_number - 1;
                    count = count + 1;
                    five_star_assurance_number = five_star_assurance_number + 1;
                    four_star_assurance_number = four_star_assurance_number + 1;
                }
            }
            */
            if (chosen_banner == 3 && chosen_event == 1) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                            }
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + (long long int)(((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60))) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int)(ULTRAPOS / 1000 * 57) + (long long int)(((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60))) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + (long long int)(((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60))) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int)(ULTRAPOS / 1000 * 567) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 14);
                                }
                            }
                        }
                    }
                    else {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (unmet5_c < 148 && unmet5_w < 148) {
                            if (temp2 < ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                        }
                        else if (unmet5_c > 147) {
                            if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                        }
                        else {
                            if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                            else {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****����" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****Ī��" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****����" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****��¬��" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****��" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****��Ī˹֮��" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****���֮��" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****�ķ�ԭ��" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****���֮��" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****����" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****���֮��" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****�ǵ�ĩ·" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****���֮��" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****���֮��" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****��ӥ��" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****��ɯ����" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****����" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****ɰ��" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****�ϰ���" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****����" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****ŵ����" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****������" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****��л��" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****����" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****����" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****����" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****����" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****����" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****����" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****����" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****�Ű���" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****��ɯ" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****����" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****����" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****����" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****�����Թ�" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****����" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****�������" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****��������" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****�����ص�" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****���糤ǹ" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****ϻ����" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****���" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****�����" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****�ӽ�" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****�����" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****ϻ������" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****����" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****�ѽ�" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****���罣" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***�Թ�" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***������֮��" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***ѻ��" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***������" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***����Ӣ��̷" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***ħ������" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***��ӧǹ" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***��������" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***��ԡ��Ѫ�Ľ�" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***��Ӱ����" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***��������" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***������" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***����" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****�µ�" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****����" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****�������" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****����" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****������" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****����" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****��" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****����" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****���" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!****��ǉ" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****����֮��" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****���֮��" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****�޹�֮��" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****����֮��" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****���ҽ���" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****��Ħ֮��" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****ǧ�ҹŽ�" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****ǧ�ҳ�ǹ" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****��ĩ�֮̾ʫ" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****��������" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****����ľ���ʫ" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****��������" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
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
                    }
                    wishes_number = wishes_number - 1;
                    count = count + 1;
                    if (!(star == 5 && type == 1)) unmet5_c++;
                    if (!(star == 5 && type == 2)) unmet5_w++;
                    if (!(star == 4 && type == 1)) unmet4_c++;
                    if (!(star == 4 && type == 2)) unmet4_w++;
                    five_star_assurance_number = five_star_assurance_number + 1;
                    four_star_assurance_number = four_star_assurance_number + 1;
                }
            }

            if (chosen_banner == 3 && chosen_event == 2) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                            }
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int)(ULTRAPOS / 1000 * 57) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int)(ULTRAPOS / 1000 * 567) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 16);
                                }
                            }
                        }
                    }
                    else {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (unmet5_c < 148 && unmet5_w < 148) {
                            if (temp2 < ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                        }
                        else if (unmet5_c > 147) {
                            if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                        }
                        else {
                            if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                            else {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****����" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****Ī��" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****����" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****��¬��" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****��" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****��Ī˹֮��" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****���֮��" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****�ķ�ԭ��" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****���֮��" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****����" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****���֮��" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****�ǵ�ĩ·" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****���֮��" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****���֮��" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****��ӥ��" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****��ɯ����" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****����" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****ɰ��" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****�ϰ���" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****����" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****ŵ����" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****������" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****��л��" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****����" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****����" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****����" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****����" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****����" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****����" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****����" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****�Ű���" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****��ɯ" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****����" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****����" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****����" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****�����Թ�" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****����" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****�������" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****��������" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****�����ص�" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****���糤ǹ" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****ϻ����" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****���" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****�����" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****�ӽ�" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****�����" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****ϻ������" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****����" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****�ѽ�" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****���罣" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***�Թ�" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***������֮��" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***ѻ��" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***������" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***����Ӣ��̷" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***ħ������" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***��ӧǹ" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***��������" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***��ԡ��Ѫ�Ľ�" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***��Ӱ����" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***��������" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***������" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***����" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****�µ�" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****����" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****�������" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****����" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****������" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****����" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****��" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****����" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****���" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!****��ǉ" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****����֮��" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****���֮��" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****�޹�֮��" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****����֮��" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****���ҽ���" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****��Ħ֮��" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****ǧ�ҹŽ�" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****ǧ�ҳ�ǹ" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****��ĩ�֮̾ʫ" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****��������" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****����ľ���ʫ" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****��������" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
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
                    }
                    wishes_number = wishes_number - 1;
                    count = count + 1;
                    if (!(star == 5 && type == 1)) unmet5_c++;
                    if (!(star == 5 && type == 2)) unmet5_w++;
                    if (!(star == 4 && type == 1)) unmet4_c++;
                    if (!(star == 4 && type == 2)) unmet4_w++;
                    five_star_assurance_number = five_star_assurance_number + 1;
                    four_star_assurance_number = four_star_assurance_number + 1;
                }
            }

            if (chosen_banner == 3 && chosen_event == 3) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                            }
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int)(ULTRAPOS / 1000 * 57) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else if (temp1 < (long long int)(ULTRAPOS / 1000 * 567) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                            }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int)(ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            if (unmet5_c < 148 && unmet5_w < 148) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else if (unmet5_c > 147) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                                else {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                    type = 2;
                                    five_count_w++;
                                    unmet5_w = 0;
                                    int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                    kind = rspick(templist, 10);
                                }
                                else {
                                    type = 1;
                                    five_count_c++;
                                    unmet5_c = 0;
                                    int templist[] = { 1, 2, 3, 4, 5 };
                                    kind = rspick(templist, 5);
                                }
                            }
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            if (unmet4_c < 18 && unmet4_w < 18) {
                                if (temp2 < ULTRAPOS / 2) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else if (unmet4_c > 17) {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_c - 168))) {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                                else {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                            }
                            else {
                                if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet4_w - 168))) {
                                    type = 2;
                                    four_count_w++;
                                    unmet4_w = 0;
                                    int templist[] = { 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 };
                                    kind = rspick(templist, 18);
                                }
                                else {
                                    type = 1;
                                    four_count_c++;
                                    unmet4_c = 0;
                                    int templist[] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
                                    kind = rspick(templist, 17);
                                }
                            }
                        }
                    }
                    else {
                        star = 5;
                        five_count = five_count + 1;
                        ave_fives = ave_fives + five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                        five_star_assurance_number = 0;
                        if (unmet5_c < 148 && unmet5_w < 148) {
                            if (temp2 < ULTRAPOS / 2) {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                        }
                        else if (unmet5_c > 147) {
                            if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_c - 1468))) {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                            else {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                        }
                        else {
                            if (temp2 < ULTRAPOS * (1 - 1.0 / (10 * unmet5_w - 1468))) {
                                type = 2;
                                five_count_w++;
                                
                                
                                
                                unmet5_w = 0;
                                int templist[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
                                kind = rspick(templist, 10);
                            }
                            else {
                                type = 1;
                                five_count_c++;
                                
                                
                                
                                unmet5_c = 0;
                                int templist[] = { 1, 2, 3, 4, 5 };
                                kind = rspick(templist, 5);
                            }
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****����" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****Ī��" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****����" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****��¬��" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****��" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****��Ī˹֮��" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****���֮��" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****�ķ�ԭ��" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****���֮��" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****����" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****���֮��" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****�ǵ�ĩ·" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****���֮��" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****���֮��" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****��ӥ��" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****��ɯ����" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****����" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****ɰ��" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****�ϰ���" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****����" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****ŵ����" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****������" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****��л��" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****����" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****����" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****����" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****����" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****����" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****����" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****����" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****�Ű���" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****��ɯ" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****����" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****����" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****����" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****�����Թ�" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****����" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****�������" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****��������" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****�����ص�" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****���糤ǹ" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****ϻ����" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****���" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****�����" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****�ӽ�" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****�����" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****ϻ������" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****����" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****�ѽ�" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****���罣" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***�Թ�" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***������֮��" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***ѻ��" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***������" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***����Ӣ��̷" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***ħ������" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***��ӧǹ" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***��������" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***��ԡ��Ѫ�Ľ�" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***��Ӱ����" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***��������" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***������" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***����" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****�µ�" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****����" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****�������" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****����" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****������" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****����" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****��" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****����" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****���" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!****��ǉ" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****����֮��" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****���֮��" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****�޹�֮��" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****����֮��" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****���ҽ���" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****��Ħ֮��" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****ǧ�ҹŽ�" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****ǧ�ҳ�ǹ" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****��ĩ�֮̾ʫ" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****��������" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****����ľ���ʫ" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****��������" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
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
                    }
                    wishes_number = wishes_number - 1;
                    count = count + 1;
                    if (!(star == 5 && type == 1)) unmet5_c++;
                    if (!(star == 5 && type == 2)) unmet5_w++;
                    if (!(star == 4 && type == 1)) unmet4_c++;
                    if (!(star == 4 && type == 2)) unmet4_w++;
                    five_star_assurance_number = five_star_assurance_number + 1;
                    four_star_assurance_number = four_star_assurance_number + 1;
                }
            }
            if (chosen_banner == 4 && chosen_event == 1) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    long long int temp3 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (is_ŵ���� == 1 && count == 9) {
                        star = 4;
                        four_count = four_count + 1;
                        four_star_assurance_number = 0;
                        type = 1;
                        kind = 21;
                        four_count_c++;
                        is_ŵ���� = 0;
                    }
                    else if (four_star_assurance_number < 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            type = 1;
                            five_count_c++;
                            int templist[] = { 1, 2, 3, 4, 5 };
                            kind = rspick(templist, 5);
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                            kind = rspick(templist, 11);
                            if (kind == 21) { is_ŵ���� = 0; }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else if (four_star_assurance_number == 9) {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            type = 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            five_count_c++;
                            int templist[] = { 1, 2, 3, 4, 5 };
                            kind = rspick(templist, 5);
                        }
                        else if (temp1 < ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                            kind = rspick(templist, 11);
                            if (kind == 21) { is_ŵ���� = 0; }
                        }
                        else {
                            star = 3;
                            type = 2;
                            int templist[] = { 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63 };
                            kind = rspick(templist, 13);
                        }
                    }
                    else {
                        if (temp1 < ULTRAPOS / 1000 * 6) {
                            star = 5;
                            five_count = five_count + 1;
                            type = 1;
                            ave_fives = ave_fives + five_star_assurance_number;
                            if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = count; }
                            if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = count; }
                            five_star_assurance_number = 0;
                            five_count_c++;
                            int templist[] = { 1, 2, 3, 4, 5 };
                            kind = rspick(templist, 5);
                        }
                        else {
                            star = 4;
                            four_count = four_count + 1;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            int templist[] = { 18, 20, 21, 22, 23, 24, 25, 26, 27, 29, 31 };
                            kind = rspick(templist, 11);
                            if (kind == 21) { is_ŵ���� = 0; }
                        }
                    }
                    std::cout << count + 1 << "(" << five_star_assurance_number << ")" << " ";
                    switch (kind) {
                    case 1: { std::cout << "!!!!!*****����" << endl; pcount[0]++; } break;
                    case 2: { std::cout << "!!!!!*****Ī��" << endl; pcount[1]++; } break;
                    case 3: { std::cout << "!!!!!*****����" << endl; pcount[2]++; } break;
                    case 4: { std::cout << "!!!!!*****��¬��" << endl; pcount[3]++; } break;
                    case 5: { std::cout << "!!!!!*****��" << endl; pcount[4]++; } break;
                    case 6: { std::cout << "!!!!!*****��Ī˹֮��" << endl; pcount[5]++; } break;
                    case 7: { std::cout << "!!!!!*****���֮��" << endl; pcount[6]++; } break;
                    case 8: { std::cout << "!!!!!*****�ķ�ԭ��" << endl; pcount[7]++; } break;
                    case 9: { std::cout << "!!!!!*****���֮��" << endl; pcount[8]++; } break;
                    case 10: { std::cout << "!!!!!*****����" << endl; pcount[9]++; } break;
                    case 11: { std::cout << "!!!!!*****���֮��" << endl; pcount[10]++; } break;
                    case 12: { std::cout << "!!!!!*****�ǵ�ĩ·" << endl; pcount[11]++; } break;
                    case 13: { std::cout << "!!!!!*****���֮��" << endl; pcount[12]++; } break;
                    case 14: { std::cout << "!!!!!*****���֮��" << endl; pcount[13]++; } break;
                    case 15: { std::cout << "!!!!!*****��ӥ��" << endl; pcount[14]++; } break;
                    case 16: { std::cout << "!!****��ɯ����" << endl; pcount[15]++; } break;
                    case 17: { std::cout << "!!****����" << endl; pcount[16]++; } break;
                    case 18: { std::cout << "!!****ɰ��" << endl; pcount[17]++; } break;
                    case 19: { std::cout << "!!****�ϰ���" << endl; pcount[18]++; } break;
                    case 20: { std::cout << "!!****����" << endl; pcount[19]++; } break;
                    case 21: { std::cout << "!!****ŵ����" << endl; pcount[20]++; } break;
                    case 22: { std::cout << "!!****������" << endl; pcount[21]++; } break;
                    case 23: { std::cout << "!!****��л��" << endl; pcount[22]++; } break;
                    case 24: { std::cout << "!!****����" << endl; pcount[23]++; } break;
                    case 25: { std::cout << "!!****����" << endl; pcount[24]++; } break;
                    case 26: { std::cout << "!!****����" << endl; pcount[25]++; } break;
                    case 27: { std::cout << "!!****����" << endl; pcount[26]++; } break;
                    case 28: { std::cout << "!!****����" << endl; pcount[27]++; } break;
                    case 29: { std::cout << "!!****����" << endl; pcount[28]++; } break;
                    case 30: { std::cout << "!!****����" << endl; pcount[29]++; } break;
                    case 31: { std::cout << "!!****�Ű���" << endl; pcount[30]++; } break;
                    case 32: { std::cout << "!!****��ɯ" << endl; pcount[31]++; } break;
                    case 33: { std::cout << "!!****����" << endl; pcount[32]++; } break;
                    case 34: { std::cout << "!!****����" << endl; pcount[33]++; } break;
                    case 35: { std::cout << "!!****����" << endl; pcount[34]++; } break;
                    case 36: { std::cout << "!!****�����Թ�" << endl; pcount[35]++; } break;
                    case 37: { std::cout << "!!****����" << endl; pcount[36]++; } break;
                    case 38: { std::cout << "!!****�������" << endl; pcount[37]++; } break;
                    case 39: { std::cout << "!!****��������" << endl; pcount[38]++; } break;
                    case 40: { std::cout << "!!****�����ص�" << endl; pcount[39]++; } break;
                    case 41: { std::cout << "!!****���糤ǹ" << endl; pcount[40]++; } break;
                    case 42: { std::cout << "!!****ϻ����" << endl; pcount[41]++; } break;
                    case 43: { std::cout << "!!****���" << endl; pcount[42]++; } break;
                    case 44: { std::cout << "!!****�����" << endl; pcount[43]++; } break;
                    case 45: { std::cout << "!!****�ӽ�" << endl; pcount[44]++; } break;
                    case 46: { std::cout << "!!****�����" << endl; pcount[45]++; } break;
                    case 47: { std::cout << "!!****ϻ������" << endl; pcount[46]++; } break;
                    case 48: { std::cout << "!!****����" << endl; pcount[47]++; } break;
                    case 49: { std::cout << "!!****�ѽ�" << endl; pcount[48]++; } break;
                    case 50: { std::cout << "!!****���罣" << endl; pcount[49]++; } break;
                    case 51: { std::cout << "***�Թ�" << endl; pcount[50]++; } break;
                    case 52: { std::cout << "***������֮��" << endl; pcount[51]++; } break;
                    case 53: { std::cout << "***ѻ��" << endl; pcount[52]++; } break;
                    case 54: { std::cout << "***������" << endl; pcount[53]++; } break;
                    case 55: { std::cout << "***����Ӣ��̷" << endl; pcount[54]++; } break;
                    case 56: { std::cout << "***ħ������" << endl; pcount[55]++; } break;
                    case 57: { std::cout << "***��ӧǹ" << endl; pcount[56]++; } break;
                    case 58: { std::cout << "***��������" << endl; pcount[57]++; } break;
                    case 59: { std::cout << "***��ԡ��Ѫ�Ľ�" << endl; pcount[58]++; } break;
                    case 60: { std::cout << "***��Ӱ����" << endl; pcount[59]++; } break;
                    case 61: { std::cout << "***��������" << endl; pcount[60]++; } break;
                    case 62: { std::cout << "***������" << endl; pcount[61]++; } break;
                    case 63: { std::cout << "***����" << endl; pcount[62]++; } break;
                    case 64: { std::cout << "!!!!!*****�µ�" << endl; pcount[63]++; } break;
                    case 65: { std::cout << "!!!!!*****����" << endl; pcount[64]++; } break;
                    case 66: { std::cout << "!!!!!*****�������" << endl; pcount[65]++; } break;
                    case 67: { std::cout << "!!!!!*****����" << endl; pcount[66]++; } break;
                    case 68: { std::cout << "!!!!!*****������" << endl; pcount[67]++; } break;
                    case 69: { std::cout << "!!!!!*****����" << endl; pcount[68]++; } break;
                    case 70: { std::cout << "!!!!!*****��" << endl; pcount[69]++; } break;
                    case 71: { std::cout << "!!!!!*****����" << endl; pcount[70]++; } break;
                    case 72: { std::cout << "!!****���" << endl; pcount[71]++; } break;
                    case 73: { std::cout << "!!****��ǉ" << endl; pcount[72]++; } break;
                    case 74: { std::cout << "!!!!!*****����֮��" << endl; pcount[73]++; } break;
                    case 75: { std::cout << "!!!!!*****���֮��" << endl; pcount[74]++; } break;
                    case 76: { std::cout << "!!!!!*****�޹�֮��" << endl; pcount[75]++; } break;
                    case 77: { std::cout << "!!!!!*****����֮��" << endl; pcount[76]++; } break;
                    case 78: { std::cout << "!!!!!*****���ҽ���" << endl; pcount[77]++; } break;
                    case 79: { std::cout << "!!!!!*****��Ħ֮��" << endl; pcount[78]++; } break;
                    case 80: { std::cout << "!!****ǧ�ҹŽ�" << endl; pcount[79]++; } break;
                    case 81: { std::cout << "!!****ǧ�ҳ�ǹ" << endl; pcount[80]++; } break;
                    case 82: { std::cout << "!!!!!*****��ĩ�֮̾ʫ" << endl; pcount[81]++; } break;
                    case 83: { std::cout << "!!****��������" << endl; pcount[82]++; } break;
                    case 84: { std::cout << "!!****����ľ���ʫ" << endl; pcount[83]++; } break;
                    case 85: { std::cout << "!!****��������" << endl; pcount[84]++; } break;
                    case 86: { std::cout << "Placeholder" << endl; pcount[85]++; } break;
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
                    }
                    wishes_number = wishes_number - 1;
                    count = count + 1;
                    if (!(star == 5 && type == 1)) unmet5_c++;
                    if (!(star == 5 && type == 2)) unmet5_w++;
                    if (!(star == 4 && type == 1)) unmet4_c++;
                    if (!(star == 4 && type == 2)) unmet4_w++;
                    five_star_assurance_number = five_star_assurance_number + 1;
                    four_star_assurance_number = four_star_assurance_number + 1;
                }
            }
            if (wishes_number >= 0) {
                if (five_count == 0) {
                    std::cout << endl << "���Ѿ����� " << count << " ����" << endl
                        << "���ǽ�ɫ������:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
                        << "���ǽ�ɫ������:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl
                        << "���ǽ�ɫ : �������� : ���ǽ�ɫ : ��������   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
                }
                else {
                    std::cout << endl << "���Ѿ����� " << count << " ����" << endl
                        << "���ǽ�ɫ������:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
                        << "���ǽ�ɫ������:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl
                        << "������������߼�¼:   " << max_fives << " ���������ڵ� " << max_fivesth << " �α��׵�Ԫ���� " << max_fivecount + 1 << " ����Ը��" << endl
                        << "������������ͼ�¼:   " << min_fives << " ���������ڵ� " << min_fivesth << " �α��׵�Ԫ���� " << min_fivecount + 1 << " ����Ը��" << endl
                        << "����������ƽ����Ը��:   " << ave_fives * 1.0 / five_count << endl
                        << "���ǽ�ɫ : �������� : ���ǽ�ɫ : ��������   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
                }
                for (int iout = 0; iout < 15; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                for (int iout = 63; iout < 71; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                for (int iout = 73; iout < 79; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                if (pcount[81] > 0) std::cout << 81 << "(" << pcount[81] << ")" << " ";
                std::cout << endl << endl;
                for (int iout = 15; iout < 50; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                if (pcount[71] > 0) std::cout << pname[71] << "(" << pcount[71] << ")" << " ";
                if (pcount[72] > 0) std::cout << pname[72] << "(" << pcount[72] << ")" << " ";
                if (pcount[79] > 0) std::cout << pname[79] << "(" << pcount[79] << ")" << " ";
                if (pcount[80] > 0) std::cout << pname[80] << "(" << pcount[80] << ")" << " ";
                for (int iout = 82; iout < 85; iout++) { if (pcount[iout] > 0) std::cout << pname[iout] << "(" << pcount[iout] << ")" << " "; }
                std::cout << endl << endl; auto elapsed = std::chrono::steady_clock::now() - start;
                long long int microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
                std::cout << microseconds * 1.0 / 1000000 << " ���ȥ�ˡ�" << endl;
            }
            if (chosen_banner == 4 && chosen_event == 1 && count == 20) goto full_quit;
        }
    }
full_quit:
    int prepause = getchar();
    int pause = getchar();
}