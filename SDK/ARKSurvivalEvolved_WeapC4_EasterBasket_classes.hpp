#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapC4_EasterBasket_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapC4_EasterBasket.WeapC4_EasterBasket_C
// 0x0000 (0x0DC8 - 0x0DC8)
class AWeapC4_EasterBasket_C : public AWeapC4_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapC4_EasterBasket.WeapC4_EasterBasket_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapC4_EasterBasket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
