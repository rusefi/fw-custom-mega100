#include "pch.h"
#include "bench_test.h"

static void setBoard_04_pinout() {
    engineConfiguration->injectionPins[0] = Gpio::D8;
    engineConfiguration->injectionPins[1] = Gpio::D9;
    engineConfiguration->injectionPins[2] = Gpio::D10;
    engineConfiguration->injectionPins[3] = Gpio::D11;
}

static void setBoard_ua4c_pinout() {
    engineConfiguration->injectionPins[0] = Gpio::D8;
    engineConfiguration->injectionPins[0] = Gpio::B15;
}

/*PUBLIC_API_WEAK*/ void boardTsAction(uint16_t index) {
    if (index == 0) {
        setBoard_04_pinout();
    } else if (index == 1) {
        setBoard_ua4c_pinout();
    }
    fatalErrorForPresetApply();
}