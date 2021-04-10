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
    std::cout << "WELCOME TO GENSHIN IMPACT WISH SIMULATOR CLI" << endl << endl;
    std::cout << "Choose Your Wishes (Banners):" << endl;
    std::cout << "1: Character Event Wish; 2: Weapon Event Wish; 3: Permanent Wish; 4: Novice Wish" << endl << endl;
    std::cin >> chosen_banner;
    switch (chosen_banner) {
    case 1: {
        std::cout << endl << "Choose Your Events:" << endl
            << "1: Ballad in Goblets/20200928-20201018 (Venti, Barbara, Fischl, Xiangling)" << endl
            << "2: Sparkling Steps/20201020-20201110 (Klee, Xingqiu, Noelle, Sucrose)" << endl
            << "3: Farewell of Snezhnaya/20201111-20201201 (Tartaglia, Diona, Beidou, Ningguang)" << endl
            << "4: Gentry of Hermitage/20201201-20201222 (Zhongli, Xinyan, Razor, Chongyun)" << endl
            << "5: Secretum Secretorum/20201223-20210112 (Albedo, Fischl, Sucrose, Bennett)" << endl
            << "6: Adrift in the Harbor/20210112-20210202 (Ganyu, Xiangling, Xingqiu, Noelle)" << endl
            << "7: Invitation to Mundane Life/20210203-20210217 (Xiao, Diona, Beidou, Xinyan)" << endl
            << "8: Dance of Lanterns/20210217-20210302 (Keqing, Ningguang, Bennett, Barbara)" << endl
            << "9: Moment of Bloom/20210302-20210316 (Hu Tao, Xingqiu, Xiangling, Chongyun)" << endl
            << "10: Ballad in Goblets/20210317-20210406 (Venti, Sucrose, Razor, Noelle)" << endl
            << "11: Farewell of Snezhnaya/20210406-20210427 (Tartaglia, Rosaria, Barbara, Fischl)" << endl << endl;
        std::cin >> chosen_event;
    } break;
    case 2: {
        std::cout << endl << "Choose Your Events:" << endl
            << "1: Epitome Invocation/20200928-20201018 (Aquila Favonia, Amos' Bow, The Flute, The Bell, The Widsith, The Stringless, Favonius Lance)" << endl
            << "2: Epitome Invocation/20201020-20201109 (Lost Prayer to the Sacred Winds, Wolf's Gravestone, Sacrificial Sword, Sacrificial Bow, Sacrificial Greatsword, Sacrificial Fragments, Dragon's Bane)" << endl
            << "3: Epitome Invocation/20201111-20201201 (Memory of Dust, Skyward Harp, Rainslasher, Eye of Perception, Rust, Favonius Lance)" << endl
            << "4: Epitome Invocation/20201201-20201222 (Vortex Vanquisher, The Unforged, Lion's Roar, The Bell, Favonius Codex, Favonius Warbow, Dragon's Bane)" << endl
            << "5: Epitome Invocation/20201223-20210112 (Summit Shaper, Skyward Atlas, Favonius Sword, Favonius Greatsword, Favonius Lance, Favonius Fragments, The Stringless)" << endl
            << "6: Epitome Invocation/20210112-20210202 (Skyward Pride, Amos' Bow, Sacrificial Sword, The Bell, Dragon's Bane, Eye of Perception, Favonius Warbow)" << endl
            << "7: Epitome Invocation/20210203-20210223 (Primordial Jade Cutter, Primordial Jade Winged-Spear, Rust, Eye of Perception, Favonius Lance, Sacrificial Greatsword, The Flute)" << endl
            << "8: Epitome Invocation/20210223-20210316 (Staff of Homa, Lithic Spear, Lithic Spear, Wolf's Gravestone, Sacrificial Bow, The Widsith, Lion's Roar)" << endl
            << "9: Epitome Invocation/20210317-20210406 (Elegy for the End, Skyward Blade, The Alley Flash, Wine and Song, Favonius Greatsword, Favonius Warbow, Dragon's Bane)" << endl
            << "10: Epitome Invocation/20210406-20210427 (Skyward Harp, Lost Prayer to the Sacred Winds, Alley Hunter, Favonius Sword, Sacrificial Greatsword, Favonius Codex, Favonius Lance)" << endl << endl;
        std::cin >> chosen_event;
    } break;
    case 3: {
        std::cout << endl << "Choose Your Events:" << endl
            << "1: Wanderlust Invocation/20200928-20201222 (Released)" << endl
            << "2: Wanderlust Invocation/20201223- (Adds Diona and Xinyan)" << endl << endl;
        std::cin >> chosen_event;
    } break;
    case 4: chosen_event = 1; break;
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
        std::cout << endl << "How many wishes? -1: Quit; 1: 1 Wish; 10: 10 Wishes" << endl << endl;
        std::cin >> wishes_number;
        std::cout << endl;
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
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
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
                        if (temp2 <= 6435000) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
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
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
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
                        if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
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
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
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
                        if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
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
                        }
                    }
                }
                else if (five_star_assurance_number <= 89 && five_star_assurance_number >= 74 && four_star_assurance_number <= 8) {
                    if (temp1 <= 77220 + (five_star_assurance_number - 73) * 772200) {
                        star = 5;
                        five_count = five_count + 1;
                        five_star_assurance_number = 0;
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
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
                        if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
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
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
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
                        if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
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
                        if (five_star_guarantee_number == 1) { type = 1; kind = 1; }
                        else if (temp2 <= 6435000) {
                            type = 1;
                            kind = 1;
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
                        if (temp2 <= 6435000 * (int)(10 * (unmet - threshold))) {
                            type = 1;
                            if (temp3 <= 4290000) kind = 7;
                            else if (temp3 <= 8580000) kind = 8;
                            else kind = 9;
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
                        }
                    }
                }
                else {
                    star = 5;
                    five_count = five_count + 1;
                    five_star_assurance_number = 0;
                    if (five_star_guarantee_number == 1) { type = 1; kind = 1; }
                    else if (temp2 <= 6435000) {
                        type = 1;
                        kind = 1;
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
                case 1: std::cout << "!!!!!*****Tartaglia" << endl; break;
                case 2: std::cout << "!!!!!*****Jean" << endl; break;
                case 3: std::cout << "!!!!!*****Qiqi" << endl; break;
                case 4: std::cout << "!!!!!*****Keqing" << endl; break;
                case 5: std::cout << "!!!!!*****Diluc" << endl; break;
                case 6: std::cout << "!!!!!*****Mona" << endl; break;
                case 7: std::cout << "!!****Fischl" << endl; break;
                case 8: std::cout << "!!****Rosaria" << endl; break;
                case 9: std::cout << "!!****Barbara" << endl; break;
                case 10: std::cout << "!!****Sucrose" << endl; break;
                case 11: std::cout << "!!****Chongyun" << endl; break;
                case 12: std::cout << "!!****Beidou" << endl; break;
                case 13: std::cout << "!!****Razor" << endl; break;
                case 14: std::cout << "!!****Noelle" << endl; break;
                case 15: std::cout << "!!****Ningguang" << endl; break;
                case 16: std::cout << "!!****Xingqiu" << endl; break;
                case 17: std::cout << "!!****Bennett" << endl; break;
                case 18: std::cout << "!!****Xiangling" << endl; break;
                case 19: std::cout << "!!****Diona" << endl; break;
                case 20: std::cout << "!!****Xinyan" << endl; break;
                case 21: std::cout << "!!****Favonius Warbow" << endl; break;
                case 22: std::cout << "!!****Sacrificial Bow" << endl; break;
                case 23: std::cout << "!!****Rust" << endl; break;
                case 24: std::cout << "!!****The Stringless" << endl; break;
                case 25: std::cout << "!!****Favonius Codex" << endl; break;
                case 26: std::cout << "!!****Sacrificial Fragments" << endl; break;
                case 27: std::cout << "!!****Eye of Perception" << endl; break;
                case 28: std::cout << "!!****The Widsith" << endl; break;
                case 29: std::cout << "!!****Favonius Greatsword" << endl; break;
                case 30: std::cout << "!!****Sacrificial Greatsword" << endl; break;
                case 31: std::cout << "!!****Rainslasher" << endl; break;
                case 32: std::cout << "!!****The Bell" << endl; break;
                case 33: std::cout << "!!****Favonius Lance" << endl; break;
                case 34: std::cout << "!!****Dragon's Bane" << endl; break;
                case 35: std::cout << "!!****Favonius Sword" << endl; break;
                case 36: std::cout << "!!****Sacrificial Sword" << endl; break;
                case 37: std::cout << "!!****Lion's Roar" << endl; break;
                case 38: std::cout << "!!****The Flute" << endl; break;
                case 39: std::cout << "***Slingshot" << endl; break;
                case 40: std::cout << "***Sharpshooter's Oath" << endl; break;
                case 41: std::cout << "***Raven Bow" << endl; break;
                case 42: std::cout << "***Emerald Orb" << endl; break;
                case 43: std::cout << "***Thrilling Tales of Dragon Slayers" << endl; break;
                case 44: std::cout << "***Magic Guide" << endl; break;
                case 45: std::cout << "***Debate Club" << endl; break;
                case 46: std::cout << "***Bloodtainted Greatsword" << endl; break;
                case 47: std::cout << "***Ferrous Shadow" << endl; break;
                case 48: std::cout << "***Black Tassel" << endl; break;
                case 49: std::cout << "***Skyrider Sword" << endl; break;
                case 50: std::cout << "***Harbinger of Dawn" << endl; break;
                case 51: std::cout << "***Cool Steel" << endl; break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (wishes_number >= 0) std::cout << endl << "You have pulled " << count << " wishes." << endl
            << "5-stars:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
            << "4-stars:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl << endl;
    }
    int prepause = getchar();
    int pause = getchar();
}
