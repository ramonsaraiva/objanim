#!/bin/bash
if [ "$#" -lt 1 ]
then
	echo "No input file specified, reading form default (input) file.."
	FILE="input"
else
	FILE="$1"
fi

RESULT=$(cat "$FILE" | ./parser)

if [ $? -ne 0 ]; then
    echo "$RESULT"
else
    echo "$RESULT" > setup_scene.cpp
    echo "Created file setup_scene.cpp"
fi

