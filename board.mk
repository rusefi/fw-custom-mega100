BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp

DDEFS += -DFIRMWARE_ID=\"XXX\"
SHORT_BOARD_NAME=XXX

# assign critical LED to a non-existent pin if you do not have it on your board
# good old PD14 is still the default value
# DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15