.PHONY: all

all: cedec_coverity
clean:
	rm -rf cedec_coverity
cedec_coverity:
	$(CXX) -o $@ main.cpp coverity_day1.cpp coverity_day3.cpp
