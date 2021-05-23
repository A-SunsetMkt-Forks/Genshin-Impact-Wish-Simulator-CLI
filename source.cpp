#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <string>
#define ULTRAPOS 437580000
#define output_string() {std::cout << countx + 1 << "(" << five_star_assurance_number << ")" << " ";\
                    switch (kind) {\
                    case 1: { std::cout << "!!!!!*****Keqing" << endl; pcount[0]++; } break;\
                    case 2: { std::cout << "!!!!!*****Mona" << endl; pcount[1]++; } break;\
                    case 3: { std::cout << "!!!!!*****Qiqi" << endl; pcount[2]++; } break;\
                    case 4: { std::cout << "!!!!!*****Diluc" << endl; pcount[3]++; } break;\
                    case 5: { std::cout << "!!!!!*****Jean" << endl; pcount[4]++; } break;\
                    case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; pcount[5]++; } break;\
                    case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; pcount[6]++; } break;\
                    case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; pcount[7]++; } break;\
                    case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; pcount[8]++; } break;\
                    case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; pcount[9]++; } break;\
                    case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; pcount[10]++; } break;\
                    case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; pcount[11]++; } break;\
                    case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; pcount[12]++; } break;\
                    case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; pcount[13]++; } break;\
                    case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; pcount[14]++; } break;\
                    case 16: { std::cout << "!!****Rosaria" << endl; pcount[15]++; } break;\
                    case 17: { std::cout << "!!****Xinyan" << endl; pcount[16]++; } break;\
                    case 18: { std::cout << "!!****Sucrose" << endl; pcount[17]++; } break;\
                    case 19: { std::cout << "!!****Diona" << endl; pcount[18]++; } break;\
                    case 20: { std::cout << "!!****Chongyun" << endl; pcount[19]++; } break;\
                    case 21: { std::cout << "!!****Noelle" << endl; pcount[20]++; } break;\
                    case 22: { std::cout << "!!****Bennett" << endl; pcount[21]++; } break;\
                    case 23: { std::cout << "!!****Fischl" << endl; pcount[22]++; } break;\
                    case 24: { std::cout << "!!****Ningguang" << endl; pcount[23]++; } break;\
                    case 25: { std::cout << "!!****Xingqiu" << endl; pcount[24]++; } break;\
                    case 26: { std::cout << "!!****Beidou" << endl; pcount[25]++; } break;\
                    case 27: { std::cout << "!!****Xiangling" << endl; pcount[26]++; } break;\
                    case 28: { std::cout << "!!****Amber" << endl; pcount[27]++; } break;\
                    case 29: { std::cout << "!!****Razor" << endl; pcount[28]++; } break;\
                    case 30: { std::cout << "!!****Kaeya" << endl; pcount[29]++; } break;\
                    case 31: { std::cout << "!!****Barbara" << endl; pcount[30]++; } break;\
                    case 32: { std::cout << "!!****Lisa" << endl; pcount[31]++; } break;\
                    case 33: { std::cout << "!!****Rust" << endl; pcount[32]++; } break;\
                    case 34: { std::cout << "!!****Sacrificial Bow" << endl; pcount[33]++; } break;\
                    case 35: { std::cout << "!!****The Stringless" << endl; pcount[34]++; } break;\
                    case 36: { std::cout << "!!****Favonius Warbow" << endl; pcount[35]++; } break;\
                    case 37: { std::cout << "!!****Eye of Perception" << endl; pcount[36]++; } break;\
                    case 38: { std::cout << "!!****Sacrificial Fragments" << endl; pcount[37]++; } break;\
                    case 39: { std::cout << "!!****The Widsith" << endl; pcount[38]++; } break;\
                    case 40: { std::cout << "!!****Favonius Codex" << endl; pcount[39]++; } break;\
                    case 41: { std::cout << "!!****Favonius Lance" << endl; pcount[40]++; } break;\
                    case 42: { std::cout << "!!****Dragon's Bane" << endl; pcount[41]++; } break;\
                    case 43: { std::cout << "!!****Rainslasher" << endl; pcount[42]++; } break;\
                    case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; pcount[43]++; } break;\
                    case 45: { std::cout << "!!****The Bell" << endl; pcount[44]++; } break;\
                    case 46: { std::cout << "!!****Favonius Greatsword" << endl; pcount[45]++; } break;\
                    case 47: { std::cout << "!!****Lion's Roar" << endl; pcount[46]++; } break;\
                    case 48: { std::cout << "!!****Sacrificial Sword" << endl; pcount[47]++; } break;\
                    case 49: { std::cout << "!!****The Flute" << endl; pcount[48]++; } break;\
                    case 50: { std::cout << "!!****Favonius Sword" << endl; pcount[49]++; } break;\
                    case 51: { std::cout << "***Slingshot" << endl; pcount[50]++; } break;\
                    case 52: { std::cout << "***Sharpshooter's Oath" << endl; pcount[51]++; } break;\
                    case 53: { std::cout << "***Raven Bow" << endl; pcount[52]++; } break;\
                    case 54: { std::cout << "***Emerald Orb" << endl; pcount[53]++; } break;\
                    case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; pcount[54]++; } break;\
                    case 56: { std::cout << "***Magic Guide" << endl; pcount[55]++; } break;\
                    case 57: { std::cout << "***Black Tassel" << endl; pcount[56]++; } break;\
                    case 58: { std::cout << "***Debate Club" << endl; pcount[57]++; } break;\
                    case 59: { std::cout << "***Bloodtainted Greatsword" << endl; pcount[58]++; } break;\
                    case 60: { std::cout << "***Ferrous Shadow" << endl; pcount[59]++; } break;\
                    case 61: { std::cout << "***Skyrider Sword" << endl; pcount[60]++; } break;\
                    case 62: { std::cout << "***Harbinger of Dawn" << endl; pcount[61]++; } break;\
                    case 63: { std::cout << "***Cool Steel" << endl; pcount[62]++; } break;\
                    case 64: { std::cout << "!!!!!*****Venti" << endl; pcount[63]++; } break;\
                    case 65: { std::cout << "!!!!!*****Klee" << endl; pcount[64]++; } break;\
                    case 66: { std::cout << "!!!!!*****Tartaglia" << endl; pcount[65]++; } break;\
                    case 67: { std::cout << "!!!!!*****Zhongli" << endl; pcount[66]++; } break;\
                    case 68: { std::cout << "!!!!!*****Albedo" << endl; pcount[67]++; } break;\
                    case 69: { std::cout << "!!!!!*****Ganyu" << endl; pcount[68]++; } break;\
                    case 70: { std::cout << "!!!!!*****Xiao" << endl; pcount[69]++; } break;\
                    case 71: { std::cout << "!!!!!*****Hu Tao" << endl; pcount[70]++; } break;\
                    case 72: { std::cout << "!!****Yanfei" << endl; pcount[71]++; } break;\
                    case 73: { std::cout << "!!!!!*****Eula" << endl; pcount[72]++; } break;\
                    case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; pcount[73]++; } break;\
                    case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; pcount[74]++; } break;\
                    case 76: { std::cout << "!!!!!*****The Unforged" << endl; pcount[75]++; } break;\
                    case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; pcount[76]++; } break;\
                    case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; pcount[77]++; } break;\
                    case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; pcount[78]++; } break;\
                    case 80: { std::cout << "!!****Lithic Blade" << endl; pcount[79]++; } break;\
                    case 81: { std::cout << "!!****Lithic Spear" << endl; pcount[80]++; } break;\
                    case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; pcount[81]++; } break;\
                    case 83: { std::cout << "!!****The Alley Flash" << endl; pcount[82]++; } break;\
                    case 84: { std::cout << "!!****Wine and Song" << endl; pcount[83]++; } break;\
                    case 85: { std::cout << "!!****Alley Hunter" << endl; pcount[84]++; } break;\
                    case 86: { std::cout << "!!!!!*****Song of Broken Pines" << endl; pcount[85]++; } break;\
                    case 87: { std::cout << "Placeholder" << endl; pcount[86]++; } break;\
                    case 88: { std::cout << "Placeholder" << endl; pcount[87]++; } break;\
                    case 89: { std::cout << "Placeholder" << endl; pcount[88]++; } break;\
                    case 90: { std::cout << "Placeholder" << endl; pcount[89]++; } break;\
                    case 91: { std::cout << "Placeholder" << endl; pcount[90]++; } break;\
                    case 92: { std::cout << "Placeholder" << endl; pcount[91]++; } break;\
                    case 93: { std::cout << "Placeholder" << endl; pcount[92]++; } break;\
                    case 94: { std::cout << "Placeholder" << endl; pcount[93]++; } break;\
                    case 95: { std::cout << "Placeholder" << endl; pcount[94]++; } break;\
                    case 96: { std::cout << "Placeholder" << endl; pcount[95]++; } break;\
                    case 97: { std::cout << "Placeholder" << endl; pcount[96]++; } break;\
                    case 98: { std::cout << "Placeholder" << endl; pcount[97]++; } break;\
                    case 99: { std::cout << "Placeholder" << endl; pcount[98]++; } break;\
                    case 100: { std::cout << "Placeholder" << endl; pcount[99]++; } break;\
                    case 101: { std::cout << "Placeholder" << endl; pcount[100]++; } break;\
                    case 102: { std::cout << "Placeholder" << endl; pcount[101]++; } break;\
                    case 103: { std::cout << "Placeholder" << endl; pcount[102]++; } break;\
                    case 104: { std::cout << "Placeholder" << endl; pcount[103]++; } break;\
                    case 105: { std::cout << "Placeholder" << endl; pcount[104]++; } break;\
                    case 106: { std::cout << "Placeholder" << endl; pcount[105]++; } break;\
                    case 107: { std::cout << "Placeholder" << endl; pcount[106]++; } break;\
                    case 108: { std::cout << "Placeholder" << endl; pcount[107]++; } break;\
                    case 109: { std::cout << "Placeholder" << endl; pcount[108]++; } break;\
                    case 110: { std::cout << "Placeholder" << endl; pcount[109]++; } break;\
                    case 111: { std::cout << "Placeholder" << endl; pcount[110]++; } break;\
                    case 112: { std::cout << "Placeholder" << endl; pcount[111]++; } break;\
                    case 113: { std::cout << "Placeholder" << endl; pcount[112]++; } break;\
                    case 114: { std::cout << "Placeholder" << endl; pcount[113]++; } break;\
                    case 115: { std::cout << "Placeholder" << endl; pcount[114]++; } break;\
                    case 116: { std::cout << "Placeholder" << endl; pcount[115]++; } break;\
                    case 117: { std::cout << "Placeholder" << endl; pcount[116]++; } break;\
                    case 118: { std::cout << "Placeholder" << endl; pcount[117]++; } break;\
                    case 119: { std::cout << "Placeholder" << endl; pcount[118]++; } break;\
                    case 120: { std::cout << "Placeholder" << endl; pcount[119]++; } break;\
                    case 121: { std::cout << "Placeholder" << endl; pcount[120]++; } break;\
                    case 122: { std::cout << "Placeholder" << endl; pcount[121]++; } break;\
                    case 123: { std::cout << "Placeholder" << endl; pcount[122]++; } break;\
                    case 124: { std::cout << "Placeholder" << endl; pcount[123]++; } break;\
                    case 125: { std::cout << "Placeholder" << endl; pcount[124]++; } break;\
                    case 126: { std::cout << "Placeholder" << endl; pcount[125]++; } break;\
                    case 127: { std::cout << "Placeholder" << endl; pcount[126]++; } break;\
                    case 128: { std::cout << "Placeholder" << endl; pcount[127]++; } break;\
                    default: break;\
                    }\
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
                else if (temp2 < (long long int) ULTRAPOS / 2) {\
                    type = 1;\
                    five_count_c++;\
                    kind = up_five;\
                    five_star_guarantee_number = 0;\
                }\
                else {\
                    type = 2;\
                    five_count_c++;\
                    kind = rspick(nup_five_c, 5);\
                    if(five_check[0] == 1) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;\
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
                else if (temp2 < (long long int) ULTRAPOS / 2) {\
                    type = 1;\
                    four_count_c++;\
                    unmet4_c = 0;\
                    kind = rspick(up_four_g, 3);\
                    four_star_guarantee_number = 0;\
                }\
                else {\
                    if (unmet4_c < 17 && unmet4_w < 17) {\
                        if (temp2 > (long long int) 3 * ULTRAPOS / 4 - 1) {\
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
                    else if (unmet4_w > 16) {\
                        if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_c - 336) - 1) {\
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
                        if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (20 * unmet4_w - 336) - 1) {\
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
                    if (five_star_guarantee_number == 1) {\
                        type = 1;\
                        five_count_w++;\
                        kind = rspick(up_five_g, 2);\
                        five_star_guarantee_number = 0;\
                    }\
                    else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {\
                        type = 1;\
                        five_count_w++;\
                        kind = rspick(up_five_g, 2);\
                        five_star_guarantee_number = 0;\
                    }\
                    else {\
                        type = 2;\
                        five_count_w++;\
                        kind = rspick(nup_five_w, 10);\
                        if((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = 0; else five_star_guarantee_number = 1;\
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
                else if (temp2 < (long long int) ULTRAPOS / 4 * 3) {\
                    type = 1;\
                    four_count_w++;\
                    unmet4_c = 0;\
                    kind = rspick(up_four_g, 5);\
                    four_star_guarantee_number = 0;\
                }\
                    else {\
                        if (unmet4_c < 15 && unmet4_w < 15) {\
                            if (temp2 > (long long int) 7 * ULTRAPOS / 8 - 1) {\
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
                            if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_c - 592) - 1) {\
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
                            if (temp2 > (long long int) ULTRAPOS - ULTRAPOS / (40 * unmet4_w - 592) - 1) {\
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
                    if (temp2 < (long long int) ULTRAPOS / 2) {\
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
                    if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_c - 1468))) {\
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
                    if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet5_w - 1468))) {\
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
                    if (temp2 < (long long int) ULTRAPOS / 2) {\
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
                    if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_c - 168))) {\
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
                    if (temp2 < (long long int) (ULTRAPOS - ULTRAPOS / (10 * unmet4_w - 168))) {\
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
                "Keqing",
                "Mona",
                "Qiqi",
                "Diluc",
                "Jean",
                "Amos' Bow",
                "Skyward Harp",
                "Lost Prayer to the Sacred Winds",
                "Skyward Atlas",
                "Primordial Jade Winged-Spear",
                "Skyward Spine",
                "Wolf's Gravestone",
                "Skyward Pride",
                "Skyward Blade",
                "Aquila Favonia",
                "Rosaria",
                "Xinyan",
                "Sucrose",
                "Diona",
                "Chongyun",
                "Noelle",
                "Bennett",
                "Fischl",
                "Ningguang",
                "Xingqiu",
                "Beidou",
                "Xiangling",
                "Amber",
                "Razor",
                "Kaeya",
                "Barbara",
                "Lisa",
                "Rust",
                "Sacrificial Bow",
                "The Stringless",
                "Favonius Warbow",
                "Eye of Perception",
                "Sacrificial Fragments",
                "The Widsith",
                "Favonius Codex",
                "Favonius Lance",
                "Dragon's Bane",
                "Rainslasher",
                "Sacrificial Greatsword",
                "The Bell",
                "Favonius Greatsword",
                "Lion's Roar",
                "Sacrificial Sword",
                "The Flute",
                "Favonius Sword",
                "Slingshot",
                "Sharpshooter's Oath",
                "Raven Bow",
                "Emerald Orb",
                "Thrilling Tales of Dragon Slayers",
                "Magic Guide",
                "Black Tassel",
                "Debate Club",
                "Bloodtainted Greatsword",
                "Ferrous Shadow",
                "Skyrider Sword",
                "Harbinger of Dawn",
                "Cool Steel",
                "Venti",
                "Klee",
                "Tartaglia",
                "Zhongli",
                "Albedo",
                "Ganyu",
                "Xiao",
                "Hu Tao",
                "Yanfei",
                "Eula",
                "Memory of Dust",
                "Vortex Vanquisher",
                "The Unforged",
                "Summit Shaper",
                "Primordial Jade Cutter",
                "Staff of Homa",
                "Lithic Blade",
                "Lithic Spear",
                "Elegy of the End",
                "The Alley Flash",
                "Wine and Song",
                "Alley Hunter",
                "Song of Broken Pines",
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
    std::cout << "WELCOME TO GENSHIN IMPACT WISH SIMULATOR CLI V1.5.6" << endl << endl;
    while (1) {
    enter_chosen_banner:
        int chosen_banner = 0,
        chosen_event = 0,
        wishes_number = 0,
        four_star_assurance_number = 1,
        five_star_assurance_number = 1,
        five_star_guarantee_number = 0,
        four_star_guarantee_number = 0,
        quit = 1,
        is_noelle = 1,
        ave_fives = 0,
        max_fives = 1,
        min_fives = 90,
        luck = 0,
        luckkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        luckstar[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },
        lucktype[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        luckiest = 0,
        luckiestkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        up_five = 0,
        up_five_g[32] = { 0 },
        nup_five_c[32] = { 0 },
        nup_five_w[32] = { 0 },
        size_nup_five_c = 1,
        size_nup_five_w = 1,
        up_four_g[64] = { 0 },
        nup_four_c[64] = { 0 },
        nup_four_w[64] = { 0 },
        size_nup_four_c = 1,
        size_nup_four_w = 1,
        three_g[18] = { 0 },
        five_check[8] = { 127 },
        four_check[8] = { 127 };
        long long int countx = 0,
        five_count = 0,
        five_count_c = 0,
        five_count_w = 0,
        four_count = 0,
        four_count_c = 0,
        four_count_w = 0,
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
        std::cout << "Choose Your Wishes (Banners):" << endl;
        std::cout << "-1: Quit; 1: Character Event Wish; 2: Weapon Event Wish; 3: Permanent Wish; 4: Novice Wish;" << endl << endl;
        std::cin >> chosen_banner;
        if (cin.fail()) {chosen_banner = 0; std::cout << endl << "Character(s) cannot be read!" << endl; cin.clear(); cin.ignore(32767,'\n'); goto enter_chosen_banner;}
        enter_chosen_event:
        switch (chosen_banner) {
        case -1: goto full_quit;
        case 1: {
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners) (Records will be reset!)" << endl
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
                << "11: Farewell of Snezhnaya/20210406-20210427 (Tartaglia, Rosaria, Barbara, Fischl)" << endl
                << "12: Gentry of Hermitage/20210428-20210518 (Zhongli, Yanfei, Noelle, Diona)" << endl
                << "13: Born of Ocean Swell/20210518-20210608 (EUla, Xinyan, Xingqiu, Beidou)" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) {chosen_event = 0; std::cout << endl << "Character(s) cannot be read!" << endl; cin.clear(); cin.ignore(32767,'\n'); goto enter_chosen_event;}
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 14 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event; }
        } break;
        case 2: {
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners) (Records will be reset!)" << endl
                << "1: Epitome Invocation/20200928-20201018 (Aquila Favonia, Amos' Bow, The Flute, The Bell, The Widsith, The Stringless, Favonius Lance)" << endl
                << "2: Epitome Invocation/20201020-20201109 (Lost Prayer to the Sacred Winds, Wolf's Gravestone, Sacrificial Sword, Sacrificial Bow, Sacrificial Greatsword, Sacrificial Fragments, Dragon's Bane)" << endl
                << "3: Epitome Invocation/20201111-20201201 (Memory of Dust, Skyward Harp, Rainslasher, Eye of Perception, Rust, Favonius Lance, The Flute)" << endl
                << "4: Epitome Invocation/20201201-20201222 (Vortex Vanquisher, The Unforged, Lion's Roar, The Bell, Favonius Codex, Favonius Warbow, Dragon's Bane)" << endl
                << "5: Epitome Invocation/20201223-20210112 (Summit Shaper, Skyward Atlas, Favonius Sword, Favonius Greatsword, Favonius Lance, Sacrificial Fragments, The Stringless)" << endl
                << "6: Epitome Invocation/20210112-20210202 (Skyward Pride, Amos' Bow, Sacrificial Sword, The Bell, Dragon's Bane, Eye of Perception, Favonius Warbow)" << endl
                << "7: Epitome Invocation/20210203-20210223 (Primordial Jade Cutter, Primordial Jade Winged-Spear, Rust, Eye of Perception, Favonius Lance, Sacrificial Greatsword, The Flute)" << endl
                << "8: Epitome Invocation/20210223-20210316 (Staff of Homa, Wolf's Gravestone, Lithic Blade, Lithic Spear, Sacrificial Bow, The Widsith, Lion's Roar)" << endl
                << "9: Epitome Invocation/20210317-20210406 (Elegy for the End, Skyward Blade, The Alley Flash, Wine and Song, Favonius Greatsword, Favonius Warbow, Dragon's Bane)" << endl
                << "10: Epitome Invocation/20210406-20210427 (Skyward Harp, Lost Prayer to the Sacred Winds, Alley Hunter, Favonius Sword, Sacrificial Greatsword, Favonius Codex, Favonius Lance)" << endl
                << "11: Epitome Invocation/20210428-20210518 (Summit Shaper, Memory of Dust, The Flute, Lithic Blade, Lithic Spear, Eye of Perception, Sacrificial Bow)" << endl
                << "12: Epitome Invocation/20210518-20210608 (Song of Broken Pines, Aquila Favonia, Sacrificial Sword, Rainslasher, Dragon's Bane, Sacrificial Fragments, Rust)" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) {chosen_event = 0; std::cout << endl << "Character(s) cannot be read!" << endl; cin.clear(); cin.ignore(32767,'\n'); goto enter_chosen_event;}
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 13 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event; }
        } break;
        case 3: {
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners) (Records will be reset!)" << endl
                << "1: Wanderlust Invocation/20200928-20201222 (Released)" << endl
                << "2: Wanderlust Invocation/20201223-20210427 (Adds Diona and Xinyan)" << endl
                << "3: Wanderlust Invocation/20210428- (Adds Rosaria)" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) {chosen_event = 0; std::cout << endl << "Character(s) cannot be read!" << endl; cin.clear(); cin.ignore(32767,'\n'); goto enter_chosen_event;}
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event > 0 && chosen_event < 4 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event; }
        } break;
        case 4: {
            chosen_event = 0;
            std::cout << endl << "Choose Your Events:" << endl
                << "-1: Re-choose Wishes (Banners) (Records will be reset!)" << endl
                << "1: Beginners' wish" << endl << endl;
            std::cin >> chosen_event;
            if (cin.fail()) {chosen_event = 0; std::cout << endl << "Character(s) cannot be read!" << endl; cin.clear(); cin.ignore(32767,'\n'); goto enter_chosen_event;}
            if (chosen_event == -1) { chosen_event = 0; std::cout << endl; goto enter_chosen_banner; }
            if (chosen_event == 1 && chosen_event == (int)chosen_event) quit = 0; else { std::cout << endl << "Invalid event!" << endl << endl; goto enter_chosen_event; } } break;
        default: {chosen_banner = 0; chosen_event = 0; quit = 1; std::cout << "Invalid banner!" << endl << endl; goto enter_chosen_banner; }
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
        else if (chosen_banner == 2) {
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
        else if (chosen_banner == 3) {
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
        else {
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
            std::cout << endl << "How many wishes?" << endl << "-1: Re-choose Events; 1: 1 Wish; 10: 10 Wishes; -2: Show Luckiest 10 Pulls (unbroken); -3: Reset records" << endl << endl;
            std::cin >> wishes_number;
            if (cin.fail()) {wishes_number = 0; std::cout << endl << "Character(s) cannot be read!" << endl; cin.clear(); cin.ignore(32767,'\n'); goto enter_wishes_number;}
            std::cout << endl;
            if (wishes_number == -1){wishes_number = 0; goto enter_chosen_event;}
            if (wishes_number == -2){
                if(countx < 10) {std::cout << "Default" << endl; goto enter_wishes_number; }
                std::cout << "Luckiness: " << luckiest << endl;
                for (int templuck = 0; templuck < 10; templuck++) {
                    std::cout << luckiestlocation[templuck] << "(" << luckiestsublocation[templuck] << ")" << " ";
                    switch (luckiestkind[templuck]) {
                    case 1: { std::cout << "!!!!!*****Keqing" << endl; } break;
                    case 2: { std::cout << "!!!!!*****Mona" << endl; } break;
                    case 3: { std::cout << "!!!!!*****Qiqi" << endl; } break;
                    case 4: { std::cout << "!!!!!*****Diluc" << endl; } break;
                    case 5: { std::cout << "!!!!!*****Jean" << endl; } break;
                    case 6: { std::cout << "!!!!!*****Amos' Bow" << endl; } break;
                    case 7: { std::cout << "!!!!!*****Skyward Harp" << endl; } break;
                    case 8: { std::cout << "!!!!!*****Lost Prayer to the Sacred Winds" << endl; } break;
                    case 9: { std::cout << "!!!!!*****Skyward Atlas" << endl; } break;
                    case 10: { std::cout << "!!!!!*****Primordial Jade Winged-Spear" << endl; } break;
                    case 11: { std::cout << "!!!!!*****Skyward Spine" << endl; } break;
                    case 12: { std::cout << "!!!!!*****Wolf's Gravestone" << endl; } break;
                    case 13: { std::cout << "!!!!!*****Skyward Pride" << endl; } break;
                    case 14: { std::cout << "!!!!!*****Skyward Blade" << endl; } break;
                    case 15: { std::cout << "!!!!!*****Aquila Favonia" << endl; } break;
                    case 16: { std::cout << "!!****Rosaria" << endl; } break;
                    case 17: { std::cout << "!!****Xinyan" << endl; } break;
                    case 18: { std::cout << "!!****Sucrose" << endl; } break;
                    case 19: { std::cout << "!!****Diona" << endl; } break;
                    case 20: { std::cout << "!!****Chongyun" << endl; } break;
                    case 21: { std::cout << "!!****Noelle" << endl; } break;
                    case 22: { std::cout << "!!****Bennett" << endl; } break;
                    case 23: { std::cout << "!!****Fischl" << endl; } break;
                    case 24: { std::cout << "!!****Ningguang" << endl; } break;
                    case 25: { std::cout << "!!****Xingqiu" << endl; } break;
                    case 26: { std::cout << "!!****Beidou" << endl; } break;
                    case 27: { std::cout << "!!****Xiangling" << endl; } break;
                    case 28: { std::cout << "!!****Amber" << endl; } break;
                    case 29: { std::cout << "!!****Razor" << endl; } break;
                    case 30: { std::cout << "!!****Kaeya" << endl; } break;
                    case 31: { std::cout << "!!****Barbara" << endl; } break;
                    case 32: { std::cout << "!!****Lisa" << endl; } break;
                    case 33: { std::cout << "!!****Rust" << endl; } break;
                    case 34: { std::cout << "!!****Sacrificial Bow" << endl; } break;
                    case 35: { std::cout << "!!****The Stringless" << endl; } break;
                    case 36: { std::cout << "!!****Favonius Warbow" << endl; } break;
                    case 37: { std::cout << "!!****Eye of Perception" << endl; } break;
                    case 38: { std::cout << "!!****Sacrificial Fragments" << endl; } break;
                    case 39: { std::cout << "!!****The Widsith" << endl; } break;
                    case 40: { std::cout << "!!****Favonius Codex" << endl; } break;
                    case 41: { std::cout << "!!****Favonius Lance" << endl; } break;
                    case 42: { std::cout << "!!****Dragon's Bane" << endl; } break;
                    case 43: { std::cout << "!!****Rainslasher" << endl; } break;
                    case 44: { std::cout << "!!****Sacrificial Greatsword" << endl; } break;
                    case 45: { std::cout << "!!****The Bell" << endl; } break;
                    case 46: { std::cout << "!!****Favonius Greatsword" << endl; } break;
                    case 47: { std::cout << "!!****Lion's Roar" << endl; } break;
                    case 48: { std::cout << "!!****Sacrificial Sword" << endl; } break;
                    case 49: { std::cout << "!!****The Flute" << endl; } break;
                    case 50: { std::cout << "!!****Favonius Sword" << endl; } break;
                    case 51: { std::cout << "***Slingshot" << endl; } break;
                    case 52: { std::cout << "***Sharpshooter's Oath" << endl; } break;
                    case 53: { std::cout << "***Raven Bow" << endl; } break;
                    case 54: { std::cout << "***Emerald Orb" << endl; } break;
                    case 55: { std::cout << "***Thrilling Tales of Dragon Slayers" << endl; } break;
                    case 56: { std::cout << "***Magic Guide" << endl; } break;
                    case 57: { std::cout << "***Black Tassel" << endl; } break;
                    case 58: { std::cout << "***Debate Club" << endl; } break;
                    case 59: { std::cout << "***Bloodtainted Greatsword" << endl; } break;
                    case 60: { std::cout << "***Ferrous Shadow" << endl; } break;
                    case 61: { std::cout << "***Skyrider Sword" << endl; } break;
                    case 62: { std::cout << "***Harbinger of Dawn" << endl; } break;
                    case 63: { std::cout << "***Cool Steel" << endl; } break;
                    case 64: { std::cout << "!!!!!*****Venti" << endl; } break;
                    case 65: { std::cout << "!!!!!*****Klee" << endl; } break;
                    case 66: { std::cout << "!!!!!*****Tartaglia" << endl; } break;
                    case 67: { std::cout << "!!!!!*****Zhongli" << endl; } break;
                    case 68: { std::cout << "!!!!!*****Albedo" << endl; } break;
                    case 69: { std::cout << "!!!!!*****Ganyu" << endl; } break;
                    case 70: { std::cout << "!!!!!*****Xiao" << endl; } break;
                    case 71: { std::cout << "!!!!!*****Hu Tao" << endl; } break;
                    case 72: { std::cout << "!!****Yanfei" << endl; } break;
                    case 73: { std::cout << "!!!!!*****Eula" << endl; } break;
                    case 74: { std::cout << "!!!!!*****Memory of Dust" << endl; } break;
                    case 75: { std::cout << "!!!!!*****Vortex Vanquisher" << endl; } break;
                    case 76: { std::cout << "!!!!!*****The Unforged" << endl; } break;
                    case 77: { std::cout << "!!!!!*****Summit Shaper" << endl; } break;
                    case 78: { std::cout << "!!!!!*****Primordial Jade Cutter" << endl; } break;
                    case 79: { std::cout << "!!!!!*****Staff of Homa" << endl; } break;
                    case 80: { std::cout << "!!****Lithic Blade" << endl; } break;
                    case 81: { std::cout << "!!****Lithic Spear" << endl; } break;
                    case 82: { std::cout << "!!!!!*****Elegy of the End" << endl; } break;
                    case 83: { std::cout << "!!****The Alley Flash" << endl; } break;
                    case 84: { std::cout << "!!****Wine and Song" << endl; } break;
                    case 85: { std::cout << "!!****Alley Hunter" << endl; } break;
                    case 86: { std::cout << "!!!!!*****Song of Broken Pines" << endl; } break;
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
            else {}
            auto start = std::chrono::steady_clock::now();
            if (chosen_banner == 1) {
                while (wishes_number > 0) {
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) { I_5() }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 57) { I_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) { I_5() }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 567) { I_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) { I_5() }
                        else { I_4() }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { I_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 57) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { I_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { I_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 567) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { I_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { I_5() }
                        else { I_4() }
                    }
                    else { I_5() }
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
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 63 && four_star_assurance_number < 8) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) { II_5() }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 67) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number == 8) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) { II_5() }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 667) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) { II_5() }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 967) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 63 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 7) { II_5() }
                        else { II_4() }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number < 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) { II_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 67) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number == 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) { II_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 667) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) { II_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 967) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 74 && five_star_assurance_number > 62 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 7) + ((long long int)(five_star_assurance_number) - 62) * (long long int)(ULTRAPOS / 1000 * 70)) { II_5() }
                        else { II_4() }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number < 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) { II_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 837) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number == 8) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) { II_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 1437) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) { II_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 1737) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) { II_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 80 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 777) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 35)) { II_5() }
                        else { II_4() }
                    }
                    else { II_5() }
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
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    int star = 0; //4-star or 5-star
                    int type = 0; //Up or non-up, character or weapon
                    int kind = 0; //which exactly
                    if (five_star_assurance_number < 74 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) { III_5() }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 57) { III_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) { III_5() }
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 567) { III_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 74 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) { III_5() }
                        else { III_4() }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number < 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { III_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 57) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { III_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number == 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { III_5() }
                        else if (temp1 < (long long int) (ULTRAPOS / 1000 * 567) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { III_4() }
                        else { Tri() }
                    }
                    else if (five_star_assurance_number < 90 && five_star_assurance_number > 73 && four_star_assurance_number > 9) {
                        if (temp1 < (long long int) (ULTRAPOS / 1000 * 6) + ((long long int)(five_star_assurance_number) - 73) * (long long int)(ULTRAPOS / 1000 * 60)) { III_5() }
                        else { III_4() }
                    }
                    else { III_5() }
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
                    long long int temp1 = generator() % ULTRAPOS;
                    long long int temp2 = generator() % ULTRAPOS;
                    long long int temp3 = generator() % ULTRAPOS;
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
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
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
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 57) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            kind = rspick(nup_four_c, 11);
                            if (kind == 21) { is_noelle = 0; }
                        }
                        else { Tri() }
                    }
                    else if (four_star_assurance_number == 9) {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
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
                        else if (temp1 < (long long int) ULTRAPOS / 1000 * 567) {
                            star = 4;
                            four_count++;
                            four_star_assurance_number = 0;
                            type = 1;
                            four_count_c++;
                            kind = rspick(nup_four_c, 11);
                            if (kind == 21) { is_noelle = 0; }
                        }
                        else { Tri() }
                    }
                    else {
                        if (temp1 < (long long int) ULTRAPOS / 1000 * 6) {
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
                std::cout << endl << "You have pulled " << countx << " wishes." << endl
                    << "5-stars:   " << five_count << "  " << five_count * 100.0 / countx << "%" << endl
                    << "4-stars:   " << four_count << "  " << four_count * 100.0 / countx << "%" << endl
                    << "5-star-characters : 5-star-weapons : 4-star-characters : 4-star-weapons   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
            }
            else {
                std::cout << endl << "You have pulled " << countx << " wishes." << endl
                    << "5-stars:   " << five_count << "  " << five_count * 100.0 / countx << "%" << endl
                    << "4-stars:   " << four_count << "  " << four_count * 100.0 / countx << "%" << endl
                    << "max non-5-stars-max:   " << max_fives << " at " << max_fivesth << "-th non-5-stars  " << max_fivecount + 1 << "-th wishes" << endl
                    << "min non-5-stars-max:   " << min_fives << " at " << min_fivesth << "-th non-5-stars  " << min_fivecount + 1 << "-th wishes" << endl
                    << "ave non-5-star-max:   " << ave_fives * 1.0 / five_count << endl
                    << "5-star-characters : 5-star-weapons : 4-star-characters : 4-star-weapons   " << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
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
            std::cout << microseconds * 1.0 / 1000000 << " seconds elapsed." << endl;
            //if (chosen_banner == 4 && chosen_event == 1 && count == 20) goto full_quit;
        }
    }
full_quit:
    int prepause = getchar();
    int pause = getchar();
    return 0;
}