#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Paracer_Saddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C
// 0x0000 (0x09F8 - 0x09F8)
class UPrimalItemArmor_Paracer_Saddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_Paracer_Saddle.PrimalItemArmor_Paracer_Saddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_Paracer_Saddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
