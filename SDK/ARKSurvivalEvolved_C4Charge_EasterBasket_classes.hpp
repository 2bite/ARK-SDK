#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4Charge_EasterBasket_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass C4Charge_EasterBasket.C4Charge_EasterBasket_C
// 0x0000 (0x0B60 - 0x0B60)
class AC4Charge_EasterBasket_C : public AC4Charge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C4Charge_EasterBasket.C4Charge_EasterBasket_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_C4Charge_EasterBasket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif