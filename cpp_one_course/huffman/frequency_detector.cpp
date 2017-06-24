#include"huffman_lib.h"

frequency_detector::frequency_detector(): freq(256) {}

void frequency_detector::add_block(uint8_t const* block, const uint32_t size_block) {
    for(uint32_t i = 0; i < size_block; ++i) {
        freq[block[i]]++;
    }
    return;
}

std::string frequency_detector::to_string() {
    std::string str = "";
    for (uint32_t i = 0; i < 256; ++i) {
        if (freq[i]) {
            str += char(i);
            str += " => cnt = ";
            str += std::to_string(freq[i]);
            str += "\n";
        }
    }
    return str;
}
