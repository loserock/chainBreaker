#pragma once

#include <SDL_assert.h>
#include <string>
#include "global_structs.h"

using namespace std;

#define ASSERT_L(Level, Condition)      \
    if (Level <= 1)                     \
        SDL_assert_release(Condition);  \
    else if (Level == 2)                \
        SDL_assert(Condition);          \
    else                                \
        SDL_assert_paranoid(Condition); \

    // TODO enhance assert handling

#define ASSERT(C) ASSERT_L(2, C)

