#pragma once

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1949;
// System.Exception
struct Exception_t151;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1048;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t1952;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1951;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
 void SmallXmlParser__ctor_m10095 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
 Exception_t151 * SmallXmlParser_Error_m10096 (SmallXmlParser_t1949 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
 Exception_t151 * SmallXmlParser_UnexpectedEndError_m10097 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
 bool SmallXmlParser_IsNameChar_m10098 (SmallXmlParser_t1949 * __this, uint16_t ___c, bool ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
 bool SmallXmlParser_IsWhitespace_m10099 (SmallXmlParser_t1949 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
 void SmallXmlParser_SkipWhitespaces_m10100 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
 void SmallXmlParser_HandleWhitespaces_m10101 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
 void SmallXmlParser_SkipWhitespaces_m10102 (SmallXmlParser_t1949 * __this, bool ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
 int32_t SmallXmlParser_Peek_m10103 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
 int32_t SmallXmlParser_Read_m10104 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
 void SmallXmlParser_Expect_m10105 (SmallXmlParser_t1949 * __this, int32_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
 String_t* SmallXmlParser_ReadUntil_m10106 (SmallXmlParser_t1949 * __this, uint16_t ___until, bool ___handleReferences, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
 String_t* SmallXmlParser_ReadName_m10107 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
 void SmallXmlParser_Parse_m10108 (SmallXmlParser_t1949 * __this, TextReader_t1048 * ___input, Object_t * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
 void SmallXmlParser_Cleanup_m10109 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
 void SmallXmlParser_ReadContent_m10110 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
 void SmallXmlParser_HandleBufferedContent_m10111 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
 void SmallXmlParser_ReadCharacters_m10112 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
 void SmallXmlParser_ReadReference_m10113 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
 int32_t SmallXmlParser_ReadCharacterReference_m10114 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
 void SmallXmlParser_ReadAttribute_m10115 (SmallXmlParser_t1949 * __this, AttrListImpl_t1951 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
 void SmallXmlParser_ReadCDATASection_m10116 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
 void SmallXmlParser_ReadComment_m10117 (SmallXmlParser_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
