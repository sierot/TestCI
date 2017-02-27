#!/bin/bash
ZMIENNA=$(mpirun -n 3 ./binaries/mpi)
echo $ZMIENNA
if [ $ZMIENNA = 0 ]
then
	echo "Correct"
	exit 0
else
	echo "Incorrect"
	exit 2
fi
