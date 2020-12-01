#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EmoteRadialSelectorBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmoteRadialSelectorBP.EmoteRadialSelectorBP_C
// 0x0000 (0x0130 - 0x0130)
class UEmoteRadialSelectorBP_C : public URadialSelectorHUD_PlayerAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmoteRadialSelectorBP.EmoteRadialSelectorBP_C");
		return ptr;
	}


	void ExecuteUbergraph_EmoteRadialSelectorBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
