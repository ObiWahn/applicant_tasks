CXX?=clang++
CXXFLAGS?=-std=c++20

run: sync_even_odd
	./sync_even_odd

sync_even_odd: even_odd.cpp task.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
