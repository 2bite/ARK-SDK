#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaRex_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaRex_Character_BP.MegaRex_Character_BP_C
// 0x0008 (0x2140 - 0x2138)
class AMegaRex_Character_BP_C : public ARex_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_MegaRex_C*  DinoCharacterStatus_BP_MegaRex_C1;                        // 0x2138(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaRex_Character_BP.MegaRex_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MegaRex_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
