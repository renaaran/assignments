/**
 * @file assignfuns.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-31
 * 
 * @copyright Copyright (c) 2022
 * 
 * All assignment common functions and classes are declared here.
 * 
 */
#pragma once

#include <iostream>
#include <vector>

/**
 * @brief Convert a string to uppercase.
 * 
 * @param str the string to be converted.
 * @return std::string the uppercase representation of str.
 */
std::string ToUpper(const std::string &str);
/**
 * @brief Convert a string to lowercase.
 * 
 * @param str the string to be converted.
 * @return std::string the lowercase representation of str.
 */
std::string ToLower(const std::string &str);

/**
 * @brief Indicates that the search in the function Find must
 * case sensitive or case insensitive.
 * 
 */
enum class Case{SENSITIVE, INSENSITIVE};

/**
 * @brief Execute a find that can be case insensitive/sensitive.
 * 
 * @param source The source string where the search will happen.
 * @param search_string The string to be searched.
 * @param searchCase Search can be case sensitive or insensitive.
 * @param offset The position inside source where the search will start.
 * @return size_t Return the position inside source where the first character
 * of search_string was found or std::string::npos.
 */
size_t Find(
 const std::string &source,          // Source string to be searched
 const std::string &search_string,   // The string to search for
 Case searchCase = Case::INSENSITIVE,// Choose case sensitive/insensitive search
 size_t offset = 0 );                // Start the search from this offset 


/**
 * @brief returns the starting indices of all the found substrings in a target string.
 * 
 * @param target The target string to search
 * @param search_string The string to search for
 * @param searchCase Choose case sensitive/insensitive search
 * @param offset Start the search from this offset
 * @return std::vector<int> Return indices of found strings, else an empty vector
 */
std::vector<int> FindAll(
 const std::string &target,              //Target string to be searched
 const std::string &search_string,       //The string to search for
 Case searchCase = Case::INSENSITIVE,    //Choose case sensitive/insensitive search
 size_t offset = 0);                     //Start the search from this offset
