# Makefile for C++ project using clang++

# Compiler and flags
CXX = /usr/bin/clang++
CXXFLAGS = -std=gnu++14 -stdlib=libc++ -fcolor-diagnostics -fansi-escape-codes -g

# Directories
LAB1 = Labs/lab_1_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
LAB2 = Labs/lab_2_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
LAB3 = Labs/lab_3_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
LAB4 = Labs/lab_4_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
ASSIGN = Assign_1_2_Oscar_Stommendal_N2402294F@e.ntu.edu.sg
BUILD_DIR = build

# Ensure the build directory exists
$(shell mkdir -p $(BUILD_DIR))

# Targets for building all lab executables
all: lab1_q1 lab1_q2 lab2_q1 lab2_q2 lab3_q1 lab3_q2

# Build lab1_q1
lab1_q1: $(BUILD_DIR)/lab_1_q1

$(BUILD_DIR)/lab_1_q1: $(LAB1)/lab_1_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab1_q2
lab1_q2: $(BUILD_DIR)/lab_1_q2

$(BUILD_DIR)/lab_1_q2: $(LAB1)/lab_1_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab2_q1
lab2_q1: $(BUILD_DIR)/lab_2_q1

$(BUILD_DIR)/lab_2_q1: $(LAB2)/lab_2_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab2_q2
lab2_q2: $(BUILD_DIR)/lab_2_q2

$(BUILD_DIR)/lab_2_q2: $(LAB2)/lab_2_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab3_q1
lab3_q1: $(BUILD_DIR)/lab_3_q1

$(BUILD_DIR)/lab_3_q1: $(LAB3)/lab_3_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab3_q2
lab3_q2: $(BUILD_DIR)/lab_3_q2

$(BUILD_DIR)/lab_3_q2: $(LAB3)/lab_3_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab4_q1
lab4_q1: $(BUILD_DIR)/lab_4_q1

$(BUILD_DIR)/lab_4_q1: $(LAB4)/lab_4_q1.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build lab4_q2
lab4_q2: $(BUILD_DIR)/lab_4_q2

$(BUILD_DIR)/lab_4_q2: $(LAB4)/lab_4_q2.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build assign1_q1
assign1_q1: $(BUILD_DIR)/q1_mergeArrays

$(BUILD_DIR)/q1_mergeArrays: $(ASSIGN)/q1_mergeArrays.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build assign1_q2
assign1_q2: $(BUILD_DIR)/q2_removeDuplicateName

$(BUILD_DIR)/q2_removeDuplicateName: $(ASSIGN)/q2_removeDuplicateName.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build assign2_q1
assign2_q1: $(BUILD_DIR)/q1_shape

$(BUILD_DIR)/q1_shape: $(ASSIGN)/q1_shape.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build assign2_q2
assign2_q2: $(BUILD_DIR)/q2_phonebook

$(BUILD_DIR)/q2_phonebook: $(ASSIGN)/q2_phonebook.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

# Clean the build directory
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
