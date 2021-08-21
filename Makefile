PROJ_NAME = Converter
TEST_PROJ_NAME = Test_$(PROJ_NAME)


SRC = src/decoder.c\
src/encoder.c

conv_SRC = test_converter.c

TEST_SRC = test/test_converter.c\
unity/unity.c\
main_p.c

INC_H = Inc
INC_T = unity
INC_TE = test

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) -I $(INC_TE) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test_converter.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) -I $(INC_TE) unity/unity.c test/test_converter.c main_p.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(conv_SRC)
	$(RM) *.$(EXEC)
	
	
	$(RM) test_converter.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	
	$(RM) *.$(EXEC)
