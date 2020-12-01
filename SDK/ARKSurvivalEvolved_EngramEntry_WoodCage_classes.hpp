#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodCage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_WoodCage.EngramEntry_WoodCage_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_WoodCage_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_WoodCage.EngramEntry_WoodCage_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_WoodCage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
