#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Gallimimus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_Gallimimus.PrimalItemArmor_Gallimimus_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemArmor_Gallimimus_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_Gallimimus.PrimalItemArmor_Gallimimus_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_Gallimimus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
