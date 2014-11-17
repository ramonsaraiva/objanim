cd parser

if [ "$#" -lt 1 ]
then
	echo "No input file specified, reading form default (input) file.."
	./run.sh
else
	./run.sh $1
fi
cd ..
make -B
./build/bin/objanim
