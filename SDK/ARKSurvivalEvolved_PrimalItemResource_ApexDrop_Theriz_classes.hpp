#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ApexDrop_Theriz_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_ApexDrop_Theriz.PrimalItemResource_ApexDrop_Theriz_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemResource_ApexDrop_Theriz_C : public UPrimalItemResourceGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ApexDrop_Theriz.PrimalItemResource_ApexDrop_Theriz_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_ApexDrop_Theriz(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
