#include "../../../Include/Nominax/Assembler/AArch64/RegisterSet.hpp"
#include "../../../Include/Nominax/Assembler/AArch64/Routines.hpp"

namespace Nominax::Assembler::AArch64
{
    using Foundation::Print;

    auto DumpRegisterSet(std::FILE& stream, const GPRRegisterSet& regset) -> void
    {
        for (std::uint64_t i { 0 }; i < std::size(regset); ++i)
        {
            if (i % 2 == 0)
            {
                Print(stream, '\n');
            }
            Print(stream, "%v{}{} = {:016X} ", i, i < 10 ? " " : "", regset[i].AsU64);
        }
        Print(stream, '\n');
    }

    auto DumpRegisterSet(std::FILE& stream, const NeonRegisterSet& regset) -> void
    {
        for (std::uint64_t i { 0 }; i < std::size(regset); ++i)
        {
            Print(stream, "%v{}{} = ", i, i < 10 ? " " : "");
            Print(stream, "{:016X}{:016X}\n", regset[i].AsU64S[0], regset[i].AsU64S[1]);
        }
    }
}
