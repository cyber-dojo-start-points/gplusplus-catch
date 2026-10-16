CXXFLAGS += -I.
CXXFLAGS += -std=c++2a 
CXXFLAGS += -Wall -Wextra
COVERAGE_FLAGS += -fprofile-arcs -ftest-coverage
CXXFLAGS += $(COVERAGE_FLAGS)

# Files are found at any depth, so a test you put in a sub-directory is
# compiled and run like any other. A shallow glob would leave it out of the
# build entirely, where neither its tests nor its mistakes could be seen.
# The leading ./ that find prints is dropped so a compiler message names
# your file the way you wrote it, as hiker.cpp rather than ./hiker.cpp.
HPP_FILES = $(patsubst ./%,%,$(shell find . -name '*.hpp'))
COMPILED_HPP_FILES = $(patsubst %.hpp,%.compiled_hpp,$(HPP_FILES))
CPP_FILES = $(patsubst ./%,%,$(shell find . -name '*.cpp'))
OBJ_FILES = $(patsubst %.cpp,%.o,$(CPP_FILES))
# Catch2Main holds main(), so a kata's files hold only its tests.
LDLIBS = -lCatch2Main -lCatch2

%.o: %.cpp
	@$(CXX) -c -o $@ $< $(CXXFLAGS)

# Catch2 runs tests in a random order unless told otherwise. Declaration
# order is what lets a test that ends the process leave the earlier ones
# reported.
.PHONY: test.output
test.output: test makefile
	@./$< --order decl

test: $(OBJ_FILES) $(COMPILED_HPP_FILES)
	@$(CXX) $(CXXFLAGS) -O $(OBJ_FILES) -o $@ $(LDLIBS)

# This rule ensures header files build in their own right.
# The quality of header files is important because header files
# are #included from other files and thus have a large span
# of influence (unlike .cpp files which are not #included)

# Coverage files are named after the output file's basename, so hiker.hpp
# compiled here and hiker.cpp compiled above both claim hiker.gcno. The
# header holds no code to measure, so leaving coverage out of this compile
# is what keeps the real coverage data intact.
%.compiled_hpp: %.hpp
	@$(CXX) -x c++ $(filter-out $(COVERAGE_FLAGS),$(CXXFLAGS)) -c -o $@ $<
