#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSetGenericFemale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSetGenericFemale.DinoColorSetGenericFemale_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSetGenericFemale_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSetGenericFemale.DinoColorSetGenericFemale_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSetGenericFemale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
