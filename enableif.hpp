#ifndef __ENABLEIF_HPP_2012_01_28__
#define __ENABLEIF_HPP_2012_01_28__

namespace NReinventedWheels
{
    template <bool, class = void>
    struct TEnableIf
    {
    };

    template <class TType>
    struct TEnableIf<true, TType>
    {
        typedef TType TType_;
    };
}

#endif

