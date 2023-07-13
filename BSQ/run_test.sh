#!/bin/bash
echo -e "BSQ Test Script\n"
echo -e "Build BSQ executable..."
make re

test_files=$(find ./maps -iname "test*" | sort)
for i in $test_files
do
    echo -e "\n=============================\nTesting map -> $i\n============================="
    if ! ./bsq "$i"; then
        echo "bsq failed on $i"
    fi
done
