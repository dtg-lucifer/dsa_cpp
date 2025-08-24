CXX = g++
CXXFLAGS = -g -Wall -O2
BIN_DIR = bin

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $(BIN_DIR)/$@
	$(BIN_DIR)/$@

setup:
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)
