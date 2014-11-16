#include "interpolation.h"

int Interpolation::counter = 0;

Interpolation::Interpolation(string t)
{
    time = t;
    type = TYPE;
}

void Interpolation::addBlock(Block *bl)
{
    block = bl;
}

Block * Interpolation::getBlock()
{
    return block;
}

string Interpolation::getName()
{
    stringstream sstm;
    sstm << "interpolation_" << counter;
    string result = sstm.str();
    counter++;

    return result;
}

string Interpolation::getTime()
{
    return time;
}

