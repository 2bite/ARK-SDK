#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Turkey_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Turkey_Character_BP.Turkey_Character_BP_C
// 0x0008 (0x2198 - 0x2190)
class ATurkey_Character_BP_C : public ATurkeyBase_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Turkey_C*   DinoCharacterStatus_BP_Turkey_C1;                         // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Turkey_Character_BP.Turkey_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Turkey_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
