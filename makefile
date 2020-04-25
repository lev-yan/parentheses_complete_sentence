all:brackets.cpp
	@echo ===========================
	@g++ -g -pthread brackets.cpp -o brack
	@./brack
clean:
	rm brack
