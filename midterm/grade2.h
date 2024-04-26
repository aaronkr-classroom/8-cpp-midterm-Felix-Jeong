#pragma once
// grade.h

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <list>
#include <vector>
#include "analysis.h"
#include "Student_info.h"
#include "median.h"
#include "util.h"

bool fgrade(const Student_info&);
bool pgrade(const Student_info&);

double grade(double, double, double);
double grade(double, double, vector<double>&);
double grade(const Student_info&);

list<Student_info> extract_fails(list<Student_info>&);

#endif