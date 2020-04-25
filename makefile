all:brackets.cpp
	@echo ===========================
	@g++ -g -pthread brackets.cpp -o breck
	@./breck
clean:
	rm breck
