CXX := g++

BIN := bin
INC := include
SRC := src
OBJ := obj

VPATH := $(SRC)

TARGET := $(BIN)/ATM.exe

OBJS := $(patsubst %.cpp, $(OBJ)/%.o, $(notdir $(wildcard $(SRC)/*.cpp)))

$(OBJ)/%.o: %.cpp
	@echo Generating the objects:
	mkdir -p obj
	$(CXX) -c -I $(INC) -o $@ $<

$(TARGET): $(OBJS)
	@echo Generating executable:
	mkdir -p $(BIN)
	$(CXX) -o $@ $(OBJS)

.PHONY: clean
clean:
	@rm -rf $(BIN)/*.exe
	@rm -rf $(OBJ)/*.o

.PHONY:	delete
delete:
	@rm -rf $(BIN)
	@rm -rf $(OBJ)