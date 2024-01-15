BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp

BOARDINC += $(BOARD_DIR)/generated/controllers/generated

# todo: use meta-info.txt
SHORT_BOARD_NAME=XXX

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

# assign critical LED to a non-existent pin if you do not have it on your board
# good old PD14 is still the default value
# DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15
