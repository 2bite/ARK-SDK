#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0000 (0x0140 - 0x0140)
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
