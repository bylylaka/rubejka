#include <cassert>
#include "task2.h"

void simple_test() {
    RoughList *list;
    list = init();

    insert(list, 1, 2);

    {
        FindResult result = find(list, 1);
        assert(result.exists);
        assert(result.value == 2);
    }

    {
        FindResult result = find(list, 0);
        assert(!result.exists);
    }

    insert(list, 0, 1);

    {
        FindResult result = find(list, 0);
        assert(result.exists);
        assert(result.value == 1);
    }

    insert(list, 2, 3);
    {
        FindResult result = find(list, 2);
        assert(result.exists);
        assert(result.value == 3);
    }
    assert(remove(list, 1));

    {
        FindResult result = find(list, 1);
        assert(!result.exists);
    }

    assert(remove(list, 0));
    assert(remove(list, 2));

    {
        FindResult result = find(list, 0);
        assert(!result.exists);
    }

    {
        FindResult result = find(list, 1);
        assert(!result.exists);
    }

    {
        FindResult result = find(list, 2);
        assert(!result.exists);
    }
}

int main() {
    simple_test();
    return 0;
}