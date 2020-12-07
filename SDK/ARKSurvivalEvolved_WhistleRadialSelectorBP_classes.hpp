#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WhistleRadialSelectorBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WhistleRadialSelectorBP.WhistleRadialSelectorBP_C
// 0x0000 (0x0140 - 0x0140)
class UWhistleRadialSelectorBP_C : public URadialSelectorHUD_PlayerAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WhistleRadialSelectorBP.WhistleRadialSelectorBP_C");
		return ptr;
	}


	void ExecuteUbergraph_WhistleRadialSelectorBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
