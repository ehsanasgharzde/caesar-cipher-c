# Caesar Cipher C Program

## Overview

This C program implements a Caesar cipher, a basic encryption technique that shifts characters in the alphabet by a fixed number of positions. It provides a command-line interface for both encryption and decryption of text.

## Usage

To compile the program, use a C compiler of your choice.

### Encryption

To encrypt a text with a key of 3, run the program with the following command:

`./caesar_cipher e 3 "Hello"`

### Decryption

To decrypt an encrypted text with the same key, use the following command:

`./caesar_cipher d 3 "Khoor"`

## Command-Line Arguments

- `e` or `d`: Use `e` for encryption or `d` for decryption.
- Key: Provide a numeric key to shift characters in the alphabet.
- Text: Input text to be encrypted or decrypted (enclose in double quotes if it contains spaces).

## Example

- Encryption: `./caesar_cipher e 3 "Hello"` will output `Khoor`.
- Decryption: `./caesar_cipher d 3 "Khoor"` will output `Hello`.

## Disclaimer

This program demonstrates a basic Caesar cipher for educational purposes. It is not suitable for secure encryption of sensitive data.

Feel free to modify and use the code as needed for your projects.
