.PHONY: clean All

All:
	@echo "----------Building project:[ 500A-New-Year-Transportation - Debug ]----------"
	@cd "500A-New-Year-Transportation" && "$(MAKE)" -f  "500A-New-Year-Transportation.mk"
clean:
	@echo "----------Cleaning project:[ 500A-New-Year-Transportation - Debug ]----------"
	@cd "500A-New-Year-Transportation" && "$(MAKE)" -f  "500A-New-Year-Transportation.mk" clean
