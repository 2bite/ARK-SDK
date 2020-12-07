#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gasoline_GasCrafted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Gasoline_GasCrafted.PrimalItemResource_Gasoline_GasCrafted_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemResource_Gasoline_GasCrafted_C : public UPrimalItemResource_Gasoline_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gasoline_GasCrafted.PrimalItemResource_Gasoline_GasCrafted_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Gasoline_GasCrafted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
