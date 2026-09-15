#!/bin/bash

echo "=========================================="
echo "       SKILL 5: QUOTING IN BASH"
echo "=========================================="

echo
echo "1. SINGLE QUOTES - PRESERVE LITERAL CONTENT"
echo "--------------------------------------------"

echo 'Hello $USER'
echo 'Hello $HOME'
echo 'This is a literal $variable'

echo
echo "2. SINGLE QUOTES - IGNORE VARIABLE EXPANSION"
echo "--------------------------------------------"

name="Ubuntu"

echo 'Operating system: $name'
echo 'User: $USER'
echo 'Home directory: $HOME'

echo
echo "3. STORE QUOTED STRINGS"
echo "-----------------------"

single_string='Hello $USER from Ubuntu'
echo "$single_string"

echo
echo "4. DOUBLE QUOTES - ALLOW VARIABLE EXPANSION"
echo "-------------------------------------------"

echo "Hello $USER"
echo "Home directory: $HOME"
echo "Operating system: $name"

echo
echo "5. DOUBLE QUOTES - PRESERVE SPACES"
echo "----------------------------------"

message="Hello Ubuntu Linux"
echo "$message"

message="This string contains multiple words"
echo "$message"

echo
echo "6. COMPARE SINGLE AND DOUBLE QUOTES"
echo "-----------------------------------"

name="Ubuntu"

echo 'Single quotes: $name'
echo "Double quotes: $name"

echo
echo "7. QUOTED COMMANDS"
echo "------------------"

mkdir -p "My Ubuntu Folder"

echo "Directory created:"
ls -ld "My Ubuntu Folder"

cd "My Ubuntu Folder"

echo "Current directory:"
pwd

cd ..

echo
echo "8. TEST SPACES IN FILE NAMES"
echo "----------------------------"

touch "file with spaces.txt"

echo "Created file:"
ls -l "file with spaces.txt"

echo
echo "9. EDGE CASES"
echo "-------------"

echo '$USER'
echo "$USER"

echo '$HOME'
echo "$HOME"

echo 'This is $PATH'
echo "This is $PATH"

echo 'Price: $100'
echo "Price: $100"

echo
echo "10. VALIDATE PARSING RESULTS"
echo "----------------------------"

test_string="Ubuntu Linux"

if [ "$test_string" = "Ubuntu Linux" ]; then
    echo "Double-quoted string parsed correctly."
else
    echo "Parsing error."
fi

echo
echo "11. TEST QUOTED COMMANDS"
echo "-----------------------"

command="echo Hello Ubuntu"

echo "Command stored as:"
echo "$command"

echo
echo "Executing command:"
eval "$command"

echo
echo "=========================================="
echo "       SKILL 5 COMPLETED"
echo "=========================================="
