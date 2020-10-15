#include "boundingBox.hpp"

namespace aliceVision
{

std::ostream& operator<<(std::ostream& os, const BoundingBox& in)
{
    os << in.left << " ";
    os << in.top << " ";
    os << in.width << " ";
    os << in.height;
    
    return os;
}

}