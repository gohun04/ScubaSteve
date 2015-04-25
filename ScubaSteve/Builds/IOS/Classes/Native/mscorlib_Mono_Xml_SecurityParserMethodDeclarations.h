#pragma once

// Mono.Xml.SecurityParser
struct SecurityParser_t1948;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1947;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1949;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1950;

// System.Void Mono.Xml.SecurityParser::.ctor()
 void SecurityParser__ctor_m10079 (SecurityParser_t1948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
 void SecurityParser_LoadXml_m10080 (SecurityParser_t1948 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
 SecurityElement_t1947 * SecurityParser_ToXml_m10081 (SecurityParser_t1948 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnStartParsing_m10082 (SecurityParser_t1948 * __this, SmallXmlParser_t1949 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
 void SecurityParser_OnProcessingInstruction_m10083 (SecurityParser_t1948 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
 void SecurityParser_OnIgnorableWhitespace_m10084 (SecurityParser_t1948 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
 void SecurityParser_OnStartElement_m10085 (SecurityParser_t1948 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
 void SecurityParser_OnEndElement_m10086 (SecurityParser_t1948 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
 void SecurityParser_OnChars_m10087 (SecurityParser_t1948 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnEndParsing_m10088 (SecurityParser_t1948 * __this, SmallXmlParser_t1949 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
