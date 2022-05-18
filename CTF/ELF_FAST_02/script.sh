#!/bin/bash
rm test.txt
rm ELF_02
wget reverse.blackfoot.io:8080/ELF_02
strings ELF_02 > test.txt
sed -i -z 's/\n/ /g' test.txt
mystrings="$(cat test.txt | grep -o -P 'correct!.{0,22}')"
mystrings="${mystrings:9}"
mymdp="$(./a.out $mystrings)"
myurl="reverse.blackfoot.io:8080/validate/ELF_02/"
wget $myurl$mymdp