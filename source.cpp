#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
#include "source.h"
#include <sstream>

double meanOfEvenNumbers(const int array[], int arrayLength)
{
    int sum = 0;
    int count = 0;
    double mean = 0;
    for(int i = 0; i < arrayLength; i++)
    {
        if(array[i] % 2 == 0)
        {
            sum += array[i];
            count++;
        }
    }
    if(count == 0)
    {
        return 0;
    }

    mean = sum / count;
    return mean;
}

std::string* wordBuilder(const char array[], int arrayLength, size_t *returnSize)
{
    std::string* words = new std::string[arrayLength * arrayLength];

    int count = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        for(int j = 0; j < arrayLength; j++)
        {
            std::stringstream s;
            s << array[i] << array[j];
            words[(i * arrayLength) + j] = s.str();
            count++;
        }
    }

    *returnSize = arrayLength * arrayLength;
    return words;
}

std::string* wordBuilderTC(const char array[], int arrayLength, size_t *returnSize)
{
    std::string *words = new std::string[arrayLength * arrayLength * arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        for(int j = 0; j < arrayLength; j++)
        {
            for (int k = 0; k < arrayLength; k++)
            {
                std::stringstream s;
                s << array[i] << array[j] << array[k];
                int index = (i * arrayLength * arrayLength) + (j * arrayLength) + k;
                words[index] = s.str();
            }
        }
    }
    *returnSize = arrayLength * arrayLength * arrayLength;
    return words;
}

size_t countTheOnes(const std::vector<std::vector<int>>& array)
{
    int count = 0;
    for(int i = 0; i < array.size(); i++)
    {
        for(int j = 0; j < array[i].size(); j++)
        {
            if(array[i][j] == 1)
            {
                count++;
            }
        }
    }
    return count;
}

#pragma clang diagnostic pop