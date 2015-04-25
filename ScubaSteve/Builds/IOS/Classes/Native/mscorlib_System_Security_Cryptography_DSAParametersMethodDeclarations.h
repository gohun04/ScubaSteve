#pragma once

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1673;
struct DSAParameters_t1673_marshaled;

void DSAParameters_t1673_marshal(const DSAParameters_t1673& unmarshaled, DSAParameters_t1673_marshaled& marshaled);
void DSAParameters_t1673_marshal_back(const DSAParameters_t1673_marshaled& marshaled, DSAParameters_t1673& unmarshaled);
void DSAParameters_t1673_marshal_cleanup(DSAParameters_t1673_marshaled& marshaled);
