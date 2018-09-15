.PHONY: clean All

All:
	@echo "----------Building project:[ 379A-New-Year-Candles - Debug ]----------"
	@cd "379A-New-Year-Candles" && "$(MAKE)" -f  "379A-New-Year-Candles.mk"
clean:
	@echo "----------Cleaning project:[ 379A-New-Year-Candles - Debug ]----------"
	@cd "379A-New-Year-Candles" && "$(MAKE)" -f  "379A-New-Year-Candles.mk" clean
