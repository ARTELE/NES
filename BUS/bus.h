#pragma once
#include <CPU/cpu.h>

template<typename ADDR_BITS, typename DATA_BITS>
class Bus
{
public:
    Bus();
    ~Bus();

    void write(ADDR_BITS addr, DATA_BITS data);
    DATA_BITS read(ADDR_BITS addr, bool readOnly = false);

    CPU* cpu = nullptr;
};