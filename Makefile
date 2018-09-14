.PHONY: clean All

All:
	@echo "----------Building project:[ 141A-Amusing-Joke - Debug ]----------"
	@cd "141A-Amusing-Joke" && "$(MAKE)" -f  "141A-Amusing-Joke.mk"
clean:
	@echo "----------Cleaning project:[ 141A-Amusing-Joke - Debug ]----------"
	@cd "141A-Amusing-Joke" && "$(MAKE)" -f  "141A-Amusing-Joke.mk" clean
