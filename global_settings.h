#pragma once

#define B(i) (1<<i)

// TODO general config object
// #define __CONFIG__ int _i

enum RunningModes
{
    Nothing = 0,
    TestMode = B(0),
    ServerMode = B(1),
    ClientMode = B(2),
};

Uint16 g_runningMode = RunningModes::Nothing;
