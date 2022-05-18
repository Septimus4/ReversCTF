#!/bin/bash
rm test.txt
rm ELF_01
wget reverse.blackfoot.io:8080/ELF_01
strings ELF_01 > test.txt
sed -i -z 's/\n/ /g' test.txt
mystrings="$(cat test.txt | grep -o -P 'argument.{0,22}')"
mystrings="${mystrings:10}"
myurl="reverse.blackfoot.io:8080/validate/ELF_01/"
wget $myurl$mystrings
