CXX=g++

IDIR=include
BDIR=build
SDIR=src

CXXFLAGS=-g -std=c++11 -I$(IDIR) -Wall

SRCS=$(shell ls $(SDIR)/*.cpp)
OBJS=$(patsubst $(SDIR)/%.cpp,$(BDIR)/%.o,$(SRCS))
DEPS=$(shell ls $(IDIR)/*.h)

.PHONY: clean
.PHONY: all

all: main
	@echo "\n** OUTPUT **"
	@./main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BDIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(BDIR)/*.o main
