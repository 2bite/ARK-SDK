#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Wool_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Wool.PrimalItemResource_Wool_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemResource_Wool_C : public UPrimalItemResource_PeltOrHair_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Wool.PrimalItemResource_Wool_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Wool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
