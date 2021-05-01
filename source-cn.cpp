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
    std::cout << "Ô­Éñ³é¿¨Ä£ÄâÆ÷ÃüÁîĞĞ°æ" << endl << endl;
    std::cout << "Ñ¡Ôñ¿¨³Ø:" << endl;
    std::cout << "-1: ÍË³ö; 1: ½ÇÉ«»î¶¯ÆíÔ¸; 2: ÎäÆ÷»î¶¯ÆíÔ¸; 3: ³£×¤ÆíÔ¸; 4: ĞÂÊÖÆíÔ¸" << endl << endl;
    std::cin >> chosen_banner;
    switch (chosen_banner) {
        case -1: break;
        case 1: {
            std::cout << endl << "Ñ¡Ôñ¿¨³Ø»î¶¯ÀàĞÍ:" << endl
                << "1: ±­×°Ö®Ê«/20200928-20201018 (ÎÂµÏ, °Å°ÅÀ­, ·ÆĞ»¶û, ÏãÁâ)" << endl
                << "2: ÉÁÑæµÄ×¤×ã/20201020-20201110 (¿ÉÀò, ĞĞÇï, Åµ°¬¶û, É°ÌÇ)" << endl
                << "3: Ôİ±ğ¶¬¶¼/20201111-20201201 (´ï´ïÀûÑÇ, µÏ°ÂÄÈ, ±±¶·, Äı¹â)" << endl
                << "4: ÁêŞ´ÊĞ³¯/20201201-20201222 (ÖÓÀë, ĞÁìÍ, À×Ôó, ÖØÔÆ)" << endl
                << "5: ÉîÃØÖ®Ï¢/20201223-20210112 (°¢±´¶à, ·ÆĞ»¶û, É°ÌÇ, °àÄáÌØ)" << endl
                << "6: ¸¡ÉúÊëÀ´/20210112-20210202 (¸ÊÓê, ÏãÁâ, ĞĞÇï, Åµ°¬¶û)" << endl
                << "7: ÑÌ»ğÖ®Ñû/20210203-20210217 (÷Ì, µÏ°ÂÄÈ, ±±¶·, ĞÁìÍ)" << endl
                << "8: ÓãÁúµÆÖç/20210217-20210302 (¿ÌÇç, Äı¹â, °àÄáÌØ, °Å°ÅÀ­)" << endl
                << "9: ³àÍÅ¿ªÊ±/20210302-20210316 (ºúÌÒ, ĞĞÇï, ÏãÁâ, ÖØÔÆ)" << endl
                << "10: ±­×°Ö®Ê«/20210317-20210406 (ÎÂµÏ, É°ÌÇ, À×Ôó, Åµ°¬¶û)" << endl
                << "11: Ôİ±ğ¶¬¶¼/20210406-20210427 (´ï´ïÀûÑÇ, ÂŞÉ¯ÀòÑÇ, °Å°ÅÀ­, ·ÆĞ»¶û)" << endl
                << "12: ÁêŞ´ÊĞ³¯/20210428-20210518 (ÖÓÀë, ÑÌç³, Åµ°¬¶û, µÏ°ÂÄÈ)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event > 0 && chosen_event < 13 && chosen_event == (int) chosen_event) quit = 0; else std::cout << endl << "»î¶¯²»´æÔÚ£¡" << endl;
        } break;
        case 2: {
            std::cout << endl << "Ñ¡Ôñ¿¨³Ø»î¶¯ÀàĞÍ:" << endl
                << "1: ÉñÖı¸³ĞÎ/20200928-20201018 (·çÓ¥½£, °¢ÄªË¹Ö®¹­, µÑ½£, ÖÓ½£, Á÷ÀËÀÖÕÂ, ¾øÏÒ, Î÷·ç³¤Ç¹)" << endl
                << "2: ÉñÖı¸³ĞÎ/20201020-20201109 (ËÄ·çÔ­µä, ÀÇµÄÄ©Â·, ¼ÀÀñ½£, ¼ÀÀñ¹­, ¼ÀÀñ´ó½£, ¼ÀÀñ²ĞÕÂ, Ï»ÀïÃğ³½)" << endl
                << "3: ÉñÖı¸³ĞÎ/20201111-20201201 (³¾ÊÀÖ®Ëø, Ìì¿ÕÖ®Òí, Óê²Ã, ÕÑĞÄ, ¹­²Ø, Î÷·ç³¤Ç¹)" << endl
                << "4: ÉñÖı¸³ĞÎ/20201201-20201222 (¹áºçÖ®éÃ, ÎŞ¹¤Ö®½£, Ï»ÀïÁúÒ÷, ÖÓ½£, Î÷·çÃØµä, Î÷·çÁÔ¹­, Ï»ÀïÃğ³½)" << endl
                << "5: ÉñÖı¸³ĞÎ/20201223-20210112 (í½·åÖ®ÈĞ, Ìì¿ÕÖ®¾í, Î÷·ç½£, Î÷·ç´ó½£, Î÷·ç³¤Ç¹, ¼ÀÀñ²ĞÕÂ, ¾øÏÒ)" << endl
                << "6: ÉñÖı¸³ĞÎ/20210112-20210202 (Ìì¿ÕÖ®°Á, °¢ÄªË¹Ö®¹­, ¼ÀÀñ½£, ÖÓ½£, Ï»ÀïÃğ³½, ÕÑĞÄ, Î÷·çÁÔ¹­)" << endl
                << "7: ÉñÖı¸³ĞÎ/20210203-20210223 (ÅÍÑÒ½áÂÌ, ºÍè±ğ°, ¹­²Ø, ÕÑĞÄ, Î÷·ç³¤Ç¹, ¼ÀÀñ´ó½£, µÑ½£)" << endl
                << "8: ÉñÖı¸³ĞÎ/20210223-20210316 (»¤Ä¦Ö®ÕÈ, ÀÇµÄÄ©Â·, Ç§ÑÒ³¤Ç¹, Ç§ÑÒ¹Å½£, ÀÇµÄÄ©Â·, ¼ÀÀñ¹­, Á÷ÀËÀÖÕÂ, Ï»ÀïÁúÒ÷)" << endl
                << "9: ÉñÖı¸³ĞÎ/20210317-20210406 (ÖÕÄ©àµÌ¾Ö®Ê«, Ìì¿ÕÖ®ÈĞ, °µÏïÉÁ¹â, °µÏïµÄ¾ÆÓëÊ«, Î÷·ç´ó½£, Î÷·çÁÔ¹­, Ï»ÀïÃğ³½)" << endl
                << "10: ÉñÖı¸³ĞÎ/20210406-20210427 (Ìì¿ÕÖ®Òí, ËÄ·çÔ­µä, °µÏïÁÔÊÖ, Î÷·ç½£, ¼ÀÀñ´ó½£, Î÷·çÃØµä, Î÷·ç³¤Ç¹)" << endl 
                << "11: ÉñÖı¸³ĞÎ/20210428-20210518 (í½·åÖ®ÈĞ, ³¾ÊÀÖ®Ëø, Ç§ÑÒ³¤Ç¹, Ç§ÑÒ¹Å½£, ¼ÀÀñ¹­, ÕÑĞÄ, µÑ½£)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event > 0 && chosen_event < 11 && chosen_event == (int) chosen_event) quit = 0; else std::cout << endl << "»î¶¯²»´æÔÚ£¡" << endl;
        } break;
        case 3: {
            std::cout << endl << "Ñ¡Ôñ¿¨³Ø»î¶¯ÀàĞÍ:" << endl
            << "1: ±¼ĞĞÊÀ¼ä/20200928-20201222 (¿ª·ş)" << endl
            << "2: ±¼ĞĞÊÀ¼ä/20201223-20210427 (ĞÂÔöµÏ°ÂÄÈºÍĞÁìÍ)" << endl 
            << "3: ±¼ĞĞÊÀ¼ä/20210428- (ĞÂÔöÂŞÉ¯ÀòÑÇ)" << endl << endl;
            std::cin >> chosen_event;
            if (chosen_event > 0 && chosen_event < 3 && chosen_event == (int) chosen_event) quit = 0; else std::cout << endl << "»î¶¯²»´æÔÚ£¡" << endl;
        } break;
        case 4: chosen_event = 1; break;
        default: {chosen_banner = 0; chosen_event = 0; quit = 1; std::cout << "¿¨³Ø²»´æÔÚ£¡" << endl;}
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
        std::cout << endl << "³é¼¸´Î£¿-1£ºÍË³ö£»1£ºÒ»·¢£»10£ºÊ®·¢"  << endl << endl;
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
                case 1: std::cout << "!!!!!*****´ï´ïÀûÑÇ" << endl; break;
                case 2: std::cout << "!!!!!*****ÇÙ" << endl; break;
                case 3: std::cout << "!!!!!*****ÆßÆß" << endl; break;
                case 4: std::cout << "!!!!!*****¿ÌÇç" << endl; break;
                case 5: std::cout << "!!!!!*****µÏÂ¬¿Ë" << endl; break;
                case 6: std::cout << "!!!!!*****ÄªÄÈ" << endl; break;
                case 7: std::cout << "!!****·ÆĞ»¶û" << endl; break;
                case 8: std::cout << "!!****ÂŞÉ¯ÀòÑÇ" << endl; break;
                case 9: std::cout << "!!****°Å°ÅÀ­" << endl; break;
                case 10: std::cout << "!!****É°ÌÇ" << endl; break;
                case 11: std::cout << "!!****ÖØÔÆ" << endl; break;
                case 12: std::cout << "!!****±±¶·" << endl; break;
                case 13: std::cout << "!!****À×Ôó" << endl; break;
                case 14: std::cout << "!!****Åµ°¬¶û" << endl; break;
                case 15: std::cout << "!!****Äı¹â" << endl; break;
                case 16: std::cout << "!!****ĞĞÇï" << endl; break;
                case 17: std::cout << "!!****°àÄáÌØ" << endl; break;
                case 18: std::cout << "!!****ÏãÁâ" << endl; break;
                case 19: std::cout << "!!****µÏ°ÂÄÈ" << endl; break;
                case 20: std::cout << "!!****ĞÁìÍ" << endl; break;
                case 21: std::cout << "!!****Î÷·çÁÔ¹­" << endl; break;
                case 22: std::cout << "!!****¼ÀÀñ¹­" << endl; break;
                case 23: std::cout << "!!****¹­²Ø" << endl; break;
                case 24: std::cout << "!!****¾øÏÒ" << endl; break;
                case 25: std::cout << "!!****Î÷·çÃØµä" << endl; break;
                case 26: std::cout << "!!****¼ÀÀñ²ĞÕÂ" << endl; break;
                case 27: std::cout << "!!****ÕÑĞÄ" << endl; break;
                case 28: std::cout << "!!****Á÷ÀËÀÖÕÂ" << endl; break;
                case 29: std::cout << "!!****Î÷·ç´ó½£" << endl; break;
                case 30: std::cout << "!!****¼ÀÀñ´ó½£" << endl; break;
                case 31: std::cout << "!!****Óê²Ã" << endl; break;
                case 32: std::cout << "!!****ÖÓ½£" << endl; break;
                case 33: std::cout << "!!****Î÷·ç³¤Ç¹" << endl; break;
                case 34: std::cout << "!!****Ï»ÀïÃğ³½" << endl; break;
                case 35: std::cout << "!!****Î÷·ç½£" << endl; break;
                case 36: std::cout << "!!****¼ÀÀñ½£" << endl; break;
                case 37: std::cout << "!!****Ï»ÀïÁúÒ÷" << endl; break;
                case 38: std::cout << "!!****µÑ½£" << endl; break;
                case 39: std::cout << "***ÁÔ¹­" << endl; break;
                case 40: std::cout << "***ÉñÉäÊÖÖ®ÊÄ" << endl; break;
                case 41: std::cout << "***Ñ»Óğ¹­" << endl; break;
                case 42: std::cout << "***ôäÓñ·¨Çò" << endl; break;
                case 43: std::cout << "***ÌÖÁúÓ¢½ÜÌ·" << endl; break;
                case 44: std::cout << "***Ä§µ¼Ğ÷ÂÛ" << endl; break;
                case 45: std::cout << "***ÒÔÀí·şÈË" << endl; break;
                case 46: std::cout << "***ãåÔ¡ÁúÑªµÄ½£" << endl; break;
                case 47: std::cout << "***ÌúÓ°À«½£" << endl; break;
                case 48: std::cout << "***ºÚÓ§Ç¹" << endl; break;
                case 49: std::cout << "***·ÉÌìÓù½£" << endl; break;
                case 50: std::cout << "***ÀèÃ÷Éñ½£" << endl; break;
                case 51: std::cout << "***ÀäÈĞ" << endl; break;
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
                case 1: std::cout << "!!!!!*****ÖÓÀë" << endl; break;
                case 2: std::cout << "!!!!!*****ÇÙ" << endl; break;
                case 3: std::cout << "!!!!!*****ÆßÆß" << endl; break;
                case 4: std::cout << "!!!!!*****¿ÌÇç" << endl; break;
                case 5: std::cout << "!!!!!*****µÏÂ¬¿Ë" << endl; break;
                case 6: std::cout << "!!!!!*****ÄªÄÈ" << endl; break;
                case 7: std::cout << "!!****ÑÌç³" << endl; break;
                case 8: std::cout << "!!****Åµ°¬¶û" << endl; break;
                case 9: std::cout << "!!****µÏ°ÂÄÈ" << endl; break;
                case 10: std::cout << "!!****É°ÌÇ" << endl; break;
                case 11: std::cout << "!!****ÖØÔÆ" << endl; break;
                case 12: std::cout << "!!****±±¶·" << endl; break;
                case 13: std::cout << "!!****À×Ôó" << endl; break;
                case 14: std::cout << "!!****ÂŞÉ¯ÀòÑÇ" << endl; break;
                case 15: std::cout << "!!****Äı¹â" << endl; break;
                case 16: std::cout << "!!****ĞĞÇï" << endl; break;
                case 17: std::cout << "!!****°àÄáÌØ" << endl; break;
                case 18: std::cout << "!!****ÏãÁâ" << endl; break;
                case 19: std::cout << "!!****°Å°ÅÀ­" << endl; break;
                case 20: std::cout << "!!****ĞÁìÍ" << endl; break;
                case 21: std::cout << "!!****·ÆĞ»¶û" << endl; break;
                case 22: std::cout << "!!****Î÷·çÁÔ¹­" << endl; break;
                case 23: std::cout << "!!****¼ÀÀñ¹­" << endl; break;
                case 24: std::cout << "!!****¹­²Ø" << endl; break;
                case 25: std::cout << "!!****¾øÏÒ" << endl; break;
                case 26: std::cout << "!!****Î÷·çÃØµä" << endl; break;
                case 27: std::cout << "!!****¼ÀÀñ²ĞÕÂ" << endl; break;
                case 28: std::cout << "!!****ÕÑĞÄ" << endl; break;
                case 29: std::cout << "!!****Á÷ÀËÀÖÕÂ" << endl; break;
                case 30: std::cout << "!!****Î÷·ç´ó½£" << endl; break;
                case 31: std::cout << "!!****¼ÀÀñ´ó½£" << endl; break;
                case 32: std::cout << "!!****Óê²Ã" << endl; break;
                case 33: std::cout << "!!****ÖÓ½£" << endl; break;
                case 34: std::cout << "!!****Î÷·ç³¤Ç¹" << endl; break;
                case 35: std::cout << "!!****Ï»ÀïÃğ³½" << endl; break;
                case 36: std::cout << "!!****Î÷·ç½£" << endl; break;
                case 37: std::cout << "!!****¼ÀÀñ½£" << endl; break;
                case 38: std::cout << "!!****Ï»ÀïÁúÒ÷" << endl; break;
                case 39: std::cout << "!!****µÑ½£" << endl; break;
                case 40: std::cout << "***ÁÔ¹­" << endl; break;
                case 41: std::cout << "***ÉñÉäÊÖÖ®ÊÄ" << endl; break;
                case 42: std::cout << "***Ñ»Óğ¹­" << endl; break;
                case 43: std::cout << "***ôäÓñ·¨Çò" << endl; break;
                case 44: std::cout << "***ÌÖÁúÓ¢½ÜÌ·" << endl; break;
                case 45: std::cout << "***Ä§µ¼Ğ÷ÂÛ" << endl; break;
                case 46: std::cout << "***ÒÔÀí·şÈË" << endl; break;
                case 47: std::cout << "***ãåÔ¡ÁúÑªµÄ½£" << endl; break;
                case 48: std::cout << "***ÌúÓ°À«½£" << endl; break;
                case 49: std::cout << "***ºÚÓ§Ç¹" << endl; break;
                case 50: std::cout << "***·ÉÌìÓù½£" << endl; break;
                case 51: std::cout << "***ÀèÃ÷Éñ½£" << endl; break;
                case 52: std::cout << "***ÀäÈĞ" << endl; break;
                }
                wishes_number = wishes_number - 1;
                count = count + 1;
                five_star_assurance_number = five_star_assurance_number + 1;
                four_star_assurance_number = four_star_assurance_number + 1;
            }
        }
        if (wishes_number >= 0) std::cout << endl << "ÄãÒÑ¾­³éÁË " << count << " ·¢¡£" << endl
            << "5ĞÇ½ÇÉ«»òÎäÆ÷:   " << five_count << "  " << five_count * 100.0 / count << "%" << endl
            << "4ĞÇ½ÇÉ«»òÎäÆ÷:   " << four_count << "  " << four_count * 100.0 / count << "%" << endl << endl;
    }
    int prepause = getchar();
    int pause = getchar();
}
