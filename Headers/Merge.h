/*
 * Course: High Performance Computing 2022/2023
 *
 * Lecturer: Francesco Moscato    fmoscato@unisa.it
 *
 * Group:
 * Ferrara Grazia   0622701901  g.ferrara75@studenti.unisa.it
 * Franco Paolo     0622701993  p.franco9@studenti.unisa.it
 *
 * Copyright (C) 2023 - All Rights Reserved
 *
 * This file is part of Project Assignment 2022/2023.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Project Assignment 2022/2023.  If not, see http://www.gnu.org/licenses/.
 *
 * Requirements of the assignment:
 * Provide a parallell version of the Tarjan's algorithm to find Strongly Connected Components in a Graph.
 * The implementation MUST use a message passing paradigm, and has to be implemented by using MPI.
 * Students MUST store and load the input graph FROM FILES. The whole graph MUST be distributed on files
 * on each node (i.e.: the whole graph cannot be stored on a single (even replicated) file). Good Graph
 * dimensions are greater than 4GB of data. Students have to choose the proper data structure to
 * represent the graph in memory.
 *
 * Purpose of the file:
 * This file contains the implementation of the functions required to merge the structures recived from another
 * process with the ones made by the current process.
 * The provided functions are:
 *      ListGraph *mergeGraphs(ListGraph *g1, ListGraph *g2, int shrink1, int shrink2, SCCResult *merged);
 *      SCCResult *mergeResults(SCCResult *r1, SCCResult *r2);
 */

#ifndef MERGE_H
#define MERGE_H

#include "SubGraph.h"
#include "SCCResult.h"
#include "ListGraph.h"

ListGraph *mergeGraphs(ListGraph *g1, ListGraph *g2, int shrink1, int shrink2, SCCResult *merged); /* Merges two SCCResults in one structure */
SCCResult *mergeResults(SCCResult *r1, SCCResult *r2);                                             /* Merges two ListGraphs in one ListGraph */

#endif