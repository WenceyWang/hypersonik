#ifndef HYPERSONIK_HR_H
#define HYPERSONIK_HR_H

#include <winerror.h>

#define hr_trace(func, hr) hr_trace_(__FILE__, __LINE__, func, hr)

HRESULT hr_from_errno(int r);
HRESULT hr_from_win32(void);
void hr_trace_(const char *file, int line, const char *func, HRESULT hr);

#endif
