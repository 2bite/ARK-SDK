#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Ambergris_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Ambergris.PrimalItemResource_Ambergris_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemResource_Ambergris_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Ambergris.PrimalItemResource_Ambergris_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Ambergris(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif