CC = g++

AR = ar

DEL = rm

  OBJ_DIR = Release
  OUTPUT_DIR = Release
  TARGET = libfgw.a
  C_INCLUDE_DIRS = 
  C_PREPROC = 
  CFLAGS = -pipe  -Wall -g0 -O2 -frtti -fexceptions 
  RC_INCLUDE_DIRS = 
  RC_PREPROC = 
  RCFLAGS = 
  ARFLAGS =  rcs


  NULL = nul

SRC_OBJS = \
  $(OBJ_DIR)/adler32.o	\
  $(OBJ_DIR)/deflate.o	\
  $(OBJ_DIR)/flood_fill.o	\
  $(OBJ_DIR)/infblock.o	\
  $(OBJ_DIR)/infcodes.o	\
  $(OBJ_DIR)/inffast.o	\
  $(OBJ_DIR)/inflate.o	\
  $(OBJ_DIR)/inftrees.o	\
  $(OBJ_DIR)/infutil.o	\
  $(OBJ_DIR)/line_drawing.o	\
  $(OBJ_DIR)/minipng.o	\
  $(OBJ_DIR)/playpen.o	\
  $(OBJ_DIR)/point2d.o	\
  $(OBJ_DIR)/point2dx.o	\
  $(OBJ_DIR)/shape.o	\
  $(OBJ_DIR)/trees.o	\
  $(OBJ_DIR)/zutil.o

define build_target
@echo Creating library...
@$(AR) $(ARFLAGS) "$(OUTPUT_DIR)/$(TARGET)" $(SRC_OBJS)
endef

define compile_source
@echo Compiling $<
@$(CC) $(CFLAGS) $(C_PREPROC) $(C_INCLUDE_DIRS) -c "$<" -o "$@"
endef

.PHONY: print_header directories

$(TARGET): print_header directories $(SRC_OBJS)
	$(build_target)

.PHONY: clean cleanall

cleanall:
	@echo Deleting intermediate files for 'build_fgw - $(CFG)'
	-@$(DEL) $(OBJ_DIR)/*.o
	-@$(DEL) "$(OUTPUT_DIR)/$(TARGET)"
	-@rmdir "$(OUTPUT_DIR)"

clean:
	@echo Deleting intermediate files for 'build_fgw - $(CFG)'
	-@$(DEL) $(OBJ_DIR)/*.o

print_header:
	@echo ----------Configuration: build_fgw - $(CFG)----------

directories:
	-@if [ ! -d $(OUTPUT_DIR) ]; then mkdir $(OUTPUT_DIR); fi
	-@if [ ! -d $(OBJ_DIR) ]; then mkdir $(OBJ_DIR); fi

$(OBJ_DIR)/adler32.o: adler32.c	\
zlib.h
	$(compile_source)

$(OBJ_DIR)/deflate.o: deflate.c	\
deflate.h
	$(compile_source)

$(OBJ_DIR)/flood_fill.o: flood_fill.cpp	\
playpen.h
	$(compile_source)

$(OBJ_DIR)/infblock.o: infblock.c	\
zutil.h	\
infblock.h	\
inftrees.h	\
infcodes.h	\
infutil.h
	$(compile_source)

$(OBJ_DIR)/infcodes.o: infcodes.c	\
zutil.h	\
inftrees.h	\
infblock.h	\
infcodes.h	\
infutil.h	\
inffast.h
	$(compile_source)

$(OBJ_DIR)/inffast.o: inffast.c	\
zutil.h	\
inftrees.h	\
infblock.h	\
infcodes.h	\
infutil.h	\
inffast.h
	$(compile_source)

$(OBJ_DIR)/inflate.o: inflate.c	\
zutil.h	\
infblock.h
	$(compile_source)

$(OBJ_DIR)/inftrees.o: inftrees.c	\
zutil.h	\
inftrees.h	\
inffixed.h
	$(compile_source)

$(OBJ_DIR)/infutil.o: infutil.c	\
zutil.h	\
infblock.h	\
inftrees.h	\
infcodes.h	\
infutil.h
	$(compile_source)

$(OBJ_DIR)/line_drawing.o: line_drawing.cpp	\
line_drawing.h
	$(compile_source)

$(OBJ_DIR)/minipng.o: minipng.cpp	\
minipng.h	\
zlib.h	\
playpen.h
	$(compile_source)

ifeq ($(OS), Windows_NT)
	PLAYEN_CPP=playpen.cpp
else
	PLAYEN_CPP=playpen_unix1.cpp
endif

$(OBJ_DIR)/playpen.o: $(PLAYEN_CPP)	\
playpen.h	\
mouse.h	\
keyboard.h
	$(compile_source)


$(OBJ_DIR)/point2d.o: point2d.cpp	\
fgw_text.h	\
point2d.h
	$(compile_source)

$(OBJ_DIR)/point2dx.o: point2dx.cpp	\
point2dx.h
	$(compile_source)

$(OBJ_DIR)/shape.o: shape.cpp	\
flood_fill.h	\
line_drawing.h	\
point2dx.h	\
shape.h
	$(compile_source)

$(OBJ_DIR)/trees.o: trees.c	\
deflate.h	\
trees.h
	$(compile_source)

$(OBJ_DIR)/zutil.o: zutil.c	\
zutil.h
	$(compile_source)

