SHELL := /bin/bash
.PHONY: run
run: 
	g++ -std=c++17 main.cpp -I/opt/homebrew/Cellar/sfml@2/2.6.2_1/include -L/opt/homebrew/Cellar/sfml@2/2.6.2_1/lib -lsfml-graphics -lsfml-window -lsfml-system -o main && ./main