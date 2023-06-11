/*
    There is a string a (unknown to you), consisting of lowercase Latin letters, 
    encrypted according to the following rule into string s:

    after each character of string a, an arbitrary (possibly zero) number of any 
    lowercase Latin letters, different from the character itself, is added;
    
    after each such addition, the character that we supplemented is added.
    
    You are given string s, and you need to output the initial string a. 
    In other words, you need to decrypt string s.

    Note that each string encrypted in this way is decrypted uniquely.

    input
        3
        8
        abacabac
        5
        qzxcq
        20
        ccooddeeffoorrcceess
    output
        ac
        q
        codeforces
*/

#include <iostream>
#include <string>

std::string decrypt(std::string input, int inputSize) {
    std::string result{""};
    for (size_t i{0}; i < inputSize; ++i) {
        for (size_t k{i + 1}; k < inputSize; ++k) {
            if (input[i] == input[k]) {
                result += input[i];
                i = k;
                break;
            }
        }
    }
    return result;
}

int main() {
    // initialization phase
    int numberOfTestCases{0}, numberOfCharacters{0}; std::string input;
    std::cin >> numberOfTestCases;
    // get input from user
    std::string decryptedAnswer{""};
    for (int i{0}; i < numberOfTestCases; ++i) {
        std::cin >> numberOfCharacters >> input;
        decryptedAnswer += (decrypt(input, numberOfCharacters)+ "\n") ;
    }
    std::cout << decryptedAnswer << std::endl;
    return 0;
}