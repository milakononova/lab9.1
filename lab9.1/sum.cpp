
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

namespace nsSum
{
    void sum()
    {
        using namespace nsVar;

        n = 0;
        a = x;
        s = 0;

        while (fabs(a) > eps && n < 1000000)
        {
            s += a;
            n++;
            nsDod::dod();
        }
    }
}
