#pragma once
// System.Security.SecurityElement
struct SecurityElement_t1947;
// System.Collections.Stack
struct Stack_t1276;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct SecurityParser_t1948  : public SmallXmlParser_t1949
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1947 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1947 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1276 * ___stack_15;
};
