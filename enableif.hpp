#ifndef __ENABLEIF_HPP_2012_01_28__
#define __ENABLEIF_HPP_2012_01_28__

namespace reinvented_wheels
{
    template <bool, class = void>
    struct enable_if
    {
    };

    template <class T>
    struct enable_if<true, T>
    {
        typedef T type;
    };
}

#endif

