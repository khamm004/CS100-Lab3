#ifndef __OPMOCK_HPP__
#define __OPMOCK_HPP__

#include "base.hpp"

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
}

class NegativeOpMock: public Base {
    public:
        NegativeOpMock() { }

        virtual double evaluate() { return -7.5; }
        virtual string stringify() { return "-7.5"; }
}

class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { }

        virtual double evaluate() { return 0; }
        virtual string stringify() { return "0"; }
}

class LargeOpMock: public Base {
    public:
        LargeOpMock() { }

        virtual double evaluate() { return 5678; }
        virtual string stringify() { return "5678"; }
}

#endif //__OPMOCK_HPP__
