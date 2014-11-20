DIR=$(pwd)
cd parser
if [ "$#" -lt 1 ]
then
	echo "No input file specified, reading form default (input) file.."
	./run.sh
else
	./run.sh "$DIR/$1"
fi
if [ $? -ne 0 ]; then
	exit 1
fi

cd ..
make -B
./build/bin/objanim
