#include "pch.h"
#include "bench_test.h"
#include "flash_main.h"
#include "tunerstudio.h"

static void setBoard_04_pinout() {
	engineConfiguration->injectionPins[0] = Gpio::B15;
	engineConfiguration->injectionPins[1] = Gpio::B14;
	engineConfiguration->injectionPins[2] = Gpio::B12;
	engineConfiguration->injectionPins[3] = Gpio::B13;

	engineConfiguration->ignitionPins[0] = Gpio::E2;
	engineConfiguration->ignitionPins[1] = Gpio::E3;
	engineConfiguration->ignitionPins[2] = Gpio::C13;
	engineConfiguration->ignitionPins[3] = Gpio::E7;
}

static void setBoard_ua4c_pinout() {
	engineConfiguration->injectionPins[0] = Gpio::B15;
	engineConfiguration->injectionPins[1] = Gpio::D8;
	engineConfiguration->injectionPins[2] = Gpio::D9;
	engineConfiguration->injectionPins[3] = Gpio::D10;

	engineConfiguration->ignitionPins[0] = Gpio::E15;
	engineConfiguration->ignitionPins[1] = Gpio::E4;
	engineConfiguration->ignitionPins[2] = Gpio::D13;
	engineConfiguration->ignitionPins[3] = Gpio::E5;

}

/*PUBLIC_API_WEAK*/ void boardTsAction(uint16_t index) {
    if (index == 0) {
        setBoard_04_pinout();
    } else if (index == 1) {
        setBoard_ua4c_pinout();
    }
    writeToFlashNow();
    onApplyPreset();
}