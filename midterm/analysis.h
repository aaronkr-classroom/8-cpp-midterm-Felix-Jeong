#pragma once

// analysis.h

#ifndef GUARD_analysis_h
#define GUARD_analysis_h

#include <algorithm>
#include <stdexcept>
#include <vector>
#include <numeric>

#include "Student_info.h"


bool did_all_hw(const Student_info& s);
double grade_aux(const Student_info& s);
double median_analysis(const vector<Student_info>& students);
double optimistic_median(const Student_info& s);
double optimistic_median_analysis(const vector<Student_info>& students);
double average(const vector<double>& v);
double average_grade(const Student_info& s);
double average_analysis(const vector<Student_info>& students);
void write_analysis(ostream& out, const string& name, double analysis(const vector<Student_info>&),
	const vector<Student_info>& did, const vector<Student_info>& didnt);

#endif