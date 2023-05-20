CUR_DIR := $(shell pwd)
DIR_Config   = $(CUR_DIR)/lib/Config
DIR_OLED     = $(CUR_DIR)/lib/OLED
DIR_FONTS    = $(CUR_DIR)/lib/Fonts
DIR_GUI      = $(CUR_DIR)/lib/GUI
DIR_Examples = $(CUR_DIR)/examples
DIR_BIN      = $(CUR_DIR)/bin

OBJ_C = $(wildcard ${DIR_OLED}/*.c ${DIR_Config}/*.c ${DIR_GUI}/*.c ${DIR_Examples}/*.c ${DIR_FONTS}/*.c)
OBJ_O = $(patsubst %.c,${DIR_BIN}/%.o,$(notdir ${OBJ_C}))

TARGET = main

USELIB = USE_RK_LIB
DEBUG = -D $(USELIB)
ifeq ($(USELIB), USE_RK_LIB)
    $(warning "Use rk dev lib")
endif

LIB += -lm
DEBUG += -DUSE_SPI=1
CC = aarch64-linux-gnu-gcc
MSG = -g -O0 -Wall
CFLAGS += $(MSG) $(DEBUG)

${TARGET}:${OBJ_O}
	$(CC) $(CFLAGS) $(OBJ_O) -o $@ $(LIB)

${DIR_BIN}/%.o:$(DIR_Examples)/%.c
	$(CC) $(CFLAGS) -c  $< -o $@ -I $(DIR_Config) -I $(DIR_GUI) -I $(DIR_OLED)

${DIR_BIN}/%.o:$(DIR_OLED)/%.c
	$(CC) $(CFLAGS) -c  $< -o $@ -I $(DIR_Config)

${DIR_BIN}/%.o:$(DIR_FONTS)/%.c
	$(CC) $(CFLAGS) -c  $< -o $@

${DIR_BIN}/%.o:$(DIR_GUI)/%.c
	$(CC) $(CFLAGS) -c  $< -o $@ -I $(DIR_Config)  -I $(DIR_OLED) -I $(DIR_Examples)

${DIR_BIN}/%.o:$(DIR_Config)/%.c
	$(CC) $(CFLAGS) -c  $< -o $@ $(LIB)

clean :
	rm $(DIR_BIN)/*.*
	rm $(TARGET)
