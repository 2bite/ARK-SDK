#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_CakeSlice_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_CakeSlice.PrimalItemResource_CakeSlice_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemResource_CakeSlice_C : public UPrimalItemResource_PeltOrHair_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_CakeSlice.PrimalItemResource_CakeSlice_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_CakeSlice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
