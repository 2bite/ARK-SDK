#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_MegaRex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_MegaRex.DinoCharacterStatusComponent_BP_MegaRex_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_MegaRex_C : public UDinoCharacterStatusComponent_BP_Rex_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_MegaRex.DinoCharacterStatusComponent_BP_MegaRex_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_MegaRex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
