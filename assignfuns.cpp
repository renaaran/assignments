/**
 * @file assignfuns.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <cstring>
#include <iostream>
#include "assignfuns.h"

std::string ToUpper(const std::string &str) {
    std::string s(str);
    for (int i = 0; i < str.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}

std::string ToLower(const std::string &str) {
    std::string s(str);
    for (int i = 0; i < str.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

size_t Find(
 const std::string &source,        // Source string to be searched
 const std::string &search_string, // The string to search for
 Case searchCase,                  // Choose case sensitive/insensitive search
 size_t offset) {                  // Start the search from this offset 
   auto first = std::string::npos;
   int j = 0;
   if (offset > source.length() || search_string.length() > source.length()) {
      return std::string::npos;
   }
   for (int i = offset; i < source.length(); i++) {
      auto c1 = source[i]; 
      auto c2 = search_string[j];
      if (searchCase == Case::INSENSITIVE) {
         c1 = tolower(source[i]);
         c2 = tolower(search_string[j]);
      }
      // keep incrementing j while the current character is a match.
      j = (c1 == c2) ? j+1 : 0;
      // if we have a hole string match we can stop here.
      if (j == search_string.length()) {
         first = i-j+1;
         break;
      }
   }
   return first;
}

std::vector<int> FindAll(
 const std::string &target,       //Target string to be searched
 const std::string &search_string,//The string to search for
 Case searchCase,                 //Choose case senssitive/insensitive search
 size_t offset) {                 //Start the search from this offset
    std::vector<int> idxs = std::vector<int>();
    int i = offset;
    while (i < target.length()) {
        int f = Find(target, search_string, searchCase, i);
        if (f != std::string::npos) {
            idxs.push_back(f);
            i = f + search_string.length();
        } else {
            break;
        }
    }
    return idxs;
 }
