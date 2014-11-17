#!/bin/bash
if [ "$#" -lt 1 ]
then
	echo "No input file specified, reading form default (input) file.."
	cat input | ./parser > setup_scene.cpp
else
	cat $1 | ./parser > setup_scene.cpp
fi

echo "Created file setup_scene.cpp"
