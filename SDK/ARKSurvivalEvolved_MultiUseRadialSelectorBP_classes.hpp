#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MultiUseRadialSelectorBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MultiUseRadialSelectorBP.MultiUseRadialSelectorBP_C
// 0x0000 (0x00F8 - 0x00F8)
class UMultiUseRadialSelectorBP_C : public URadialSelectorHUD_MultiUse
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MultiUseRadialSelectorBP.MultiUseRadialSelectorBP_C");
		return ptr;
	}


	void ExecuteUbergraph_MultiUseRadialSelectorBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
