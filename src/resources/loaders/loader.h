#include "../handle.h"

class Loader
{
public:
    virtual ResourceHandle Load() = 0;
    virtual void Unload() = 0;
};