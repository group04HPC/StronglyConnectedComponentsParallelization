# Project assigment 2022/2023

General descriptions
=====================

Course: High Performance Computing 2022/2023 
Lecturer: Francesco Moscato    fmoscato@unisa.it 
 
Group: 
Ferrara Grazia   0622701901  g.ferrara75@studenti.unisa.it
Franco Paolo     0622701993  p.franco9@studenti.unisa.it

Requirements of the assignment:
Provide a parallell version of the Tarjan's algorithm to find Strongly Connected Components in a Graph. 
The implementation MUST use a message passing paradigm, and has to be implemented by using MPI. 
Students MUST store and load the input graph FROM FILES. The whole graph MUST be distributed on files 
on each node (i.e.: the whole graph cannot be stored on a single (even replicated) file). Good Graph 
dimensions are greater than 4GB of data. Students have to choose the proper data structure to 
represent the graph in memory.
 
License
========

Copyright (C) 2023 - All Rights Reserved 
 
This program is free software: you can redistribute it and/or modify 
it under the terms of the GNU General Public License as published by 
the Free Software Foundation, either version 3 of the License, or 
(at your option) any later version. 
 
This program is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
GNU General Public License for more details. 
 
You should have received a copy of the GNU General Public License 
along with Project Assignment 2022/2023.  If not, see http://www.gnu.org/licenses/. 
  
Dependencies
=============

* GNU Make 4.3
* MPICH 4.0-3
* gcc 11.3.0
* pipenv

How to run
===========

1. Extract all the files in a directoy and generate the executables with `make`
2. You can run various tests by using `make test` (This can take some time depending on your system)
3. To manually execute the program you can use the script file `run.sh`. Execute `./run.sh -h` to see 
    all the options to execute the program. The output of the command will be the following:
    
    "
    Executes the program on a given number of processes. If the [run serial] parameter is not inserted 
    it will execute it as default

    Usage:  ./run.sh [num of processes]
            ./run.sh [num of processes] [run serial (0/1)]
            ./run.sh -h     -to print this help output
            ./run.sh -t     -to execute a series of tests
    "
4. To further customize the program's execution you have to modify the file `Headers/Constants.h` with your
    desired values and rebuild the whole project using `make -B`
5. You can customize compilation options and more by using specific make parameters. Try using `make help`
    to get a list of all the available options. The output of the command will be the following:

    "
    Builds all the binaries required to test the program
    Usage:  make all       -the default way to execute make, builds all the required files
            make test      -runs various tests of the program
            make clean     -cleans the working directory, deleting object files and eventual output files
            make cleanObj  -cleans the working directory, deleting the object files
            make cleanBin  -cleans the working directory, deleting the binary output files
            make cleanTxt  -cleans the working directory, deleting the textual output files
            make optimizeX -builds all the required files allpying the specified level of optimization X=[1-3]
            make help      -prints this output
    "
6. To make the measures run './measures.sh'
7. To extract the measures in the Measure folder first run 'pipenv install' and then run 'pipenv run python Measures/extract.py'
