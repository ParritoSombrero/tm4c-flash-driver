# tm4c-flash-driver
bare-metal flash driver that supports erasing, flashing, and verification
## features
### flashAddress(address, data)
writes a specified word (eg. 0x1) to address (eg. 0x35008)
### eraseAddress(address)
erases word in an address
### verifyAddress(address, data)
checks if the content of the address matches the data argument
## requirements
### hardware
-TM4C123GXL
### applications
-any cortex-m development environment
