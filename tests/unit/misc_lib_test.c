#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmockery.h>


#include "misc_lib.h"

static void test_unsigned_modulus(void **state)
{
    assert_int_equal(UnsignedModulus(0, 3), 0);
    assert_int_equal(UnsignedModulus(1, 3), 1);
    assert_int_equal(UnsignedModulus(2, 3), 2);
    assert_int_equal(UnsignedModulus(3, 3), 0);
    assert_int_equal(UnsignedModulus(4, 3), 1);

    assert_int_equal(UnsignedModulus(-1, 3), 2);
    assert_int_equal(UnsignedModulus(-2, 3), 1);
    assert_int_equal(UnsignedModulus(-3, 3), 0);
    assert_int_equal(UnsignedModulus(-4, 3), 2);
}


int main()
{
    const UnitTest tests[] =
    {
        unit_test(test_unsigned_modulus),
    };

    return run_tests(tests);
}

// STUBS
