#pragma once
// System.IO.TextWriter
struct TextWriter_t1688;
// System.IO.TextReader
struct TextReader_t1048;
// System.Text.Encoding
struct Encoding_t1047;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct Console_t1057  : public Object_t
{
};
struct Console_t1057_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1688 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1688 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1048 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1047 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1047 * ___outputEncoding_4;
};
