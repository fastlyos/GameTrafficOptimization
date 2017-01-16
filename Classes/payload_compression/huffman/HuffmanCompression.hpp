//
//  HuffmanCompression.hpp
//  GameTrafficOptimization
//
//  Created by Dainius Kreivys on 2017-01-13.
//
//

#ifndef HuffmanCompression_hpp
#define HuffmanCompression_hpp

#include <stdio.h>
#include <iostream>
#include <string>
/*struct EncodingResults {
    int cyclesMin;
    int cyclesMax;
    int cyclesAverage;
    int cyclesTotal;
} ;

struct DecodingResults {
    int cyclesMin;
    int cyclesMax;
    int cyclesAverage;
    int cyclesTotal;
} ;*/

class HuffmanCompression
{
public:
    static unsigned char * encode(std::string str, int &compSize);
	static std::string decode(unsigned char * sour, int csize);
    //static std::pair<EncodingResults, DecodingResults> performTest();
};

#endif /* HuffmanCompression_hpp */
