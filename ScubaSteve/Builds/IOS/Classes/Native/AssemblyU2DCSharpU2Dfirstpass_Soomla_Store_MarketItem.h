#pragma once
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Soomla.Store.MarketItem/Consumable
#include "AssemblyU2DCSharpU2Dfirstpass_Soomla_Store_MarketItem_Consum.h"
// Soomla.Store.MarketItem
struct MarketItem_t142  : public Object_t
{
	// System.String Soomla.Store.MarketItem::ProductId
	String_t* ___ProductId_0;
	// Soomla.Store.MarketItem/Consumable Soomla.Store.MarketItem::consumable
	int32_t ___consumable_1;
	// System.Double Soomla.Store.MarketItem::Price
	double ___Price_2;
	// System.String Soomla.Store.MarketItem::MarketPriceAndCurrency
	String_t* ___MarketPriceAndCurrency_3;
	// System.String Soomla.Store.MarketItem::MarketTitle
	String_t* ___MarketTitle_4;
	// System.String Soomla.Store.MarketItem::MarketDescription
	String_t* ___MarketDescription_5;
	// System.String Soomla.Store.MarketItem::MarketCurrencyCode
	String_t* ___MarketCurrencyCode_6;
	// System.Int64 Soomla.Store.MarketItem::MarketPriceMicros
	int64_t ___MarketPriceMicros_7;
};
