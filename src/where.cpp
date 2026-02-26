#include "where.hpp"

int where(const std::string& str, char query) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == query) {
            return i;
        }
    }
    return -1;
}

int where(const std::string& str, const std::string& query) {
    for (int i = 0; i + query.size() <= str.size(); i++) {
        bool match = true;
        for (int j = 0; j < query.size(); j++) {
            if (str[i + j] != query[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1;
}