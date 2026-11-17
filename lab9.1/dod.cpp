
#include "dod.h"
#include "var.h"

namespace nsDod
{
    double NextTerm(double current, double x, int n)
    {
        return current * x * x * (2.0 * n - 1)
            / (2.0 * n + 1);
    }

    void dod()
    {
        using namespace nsVar;
        a = NextTerm(a, x, n);
    }
}
