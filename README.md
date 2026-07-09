# tm4c-flash-driver
bare-metal flash driver that supports erasing, flashing, and verification
## features
### flashAddress(address, data)
writes a specified word (eg. 0x1) to address (eg. 0x35008)
### eraseAddress(address)
erases page
### verifyAddress(address, data)
checks if the content of the address matches the data argument
### flashBufferAddress(address, buffer, words)
writes words in a array to addresses, using the address variable as the starting variable and buffer as the array name, and words as to how many words in the array
### verifyBufferAddress(address, buffer, words)
checks words in an array against their corresponding address
## requirements
### hardware
-TM4C123GXL
### applications
-any cortex-m development environment
