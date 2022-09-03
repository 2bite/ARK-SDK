#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP.DinoCharacterStatusComponent_BP_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_C : public UPrimalDinoStatusComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP.DinoCharacterStatusComponent_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
