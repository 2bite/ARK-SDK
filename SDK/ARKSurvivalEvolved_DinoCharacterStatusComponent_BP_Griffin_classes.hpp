#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Griffin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Griffin.DinoCharacterStatusComponent_BP_Griffin_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_Griffin_C : public UDinoCharacterStatusComponent_BP_FlyerRide_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Griffin.DinoCharacterStatusComponent_BP_Griffin_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Griffin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
