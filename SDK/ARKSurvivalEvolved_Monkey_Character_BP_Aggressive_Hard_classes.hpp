#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Monkey_Character_BP_Aggressive_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Monkey_Character_BP_Aggressive_Hard.Monkey_Character_BP_Aggressive_Hard_C
// 0x0008 (0x2278 - 0x2270)
class AMonkey_Character_BP_Aggressive_Hard_C : public AMonkey_Character_BP_Aggressive_C
{
public:
	class UDinoCharacterStatusComponent_BP_Monkey_Hard_C* DinoCharacterStatus_BP_Monkey_Hard_C1;                    // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Monkey_Character_BP_Aggressive_Hard.Monkey_Character_BP_Aggressive_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Monkey_Character_BP_Aggressive_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
