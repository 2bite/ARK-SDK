#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossDragon_Character_BP_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBossDragon_Character_BP_Hard.EndBossDragon_Character_BP_Hard_C
// 0x0008 (0x23D0 - 0x23C8)
class AEndBossDragon_Character_BP_Hard_C : public AEndBossDragon_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_EndBoss_Dragon_Hard_C* DinoCharacterStatus_BP_EndBoss_Dragon_Hard_C1;            // 0x23C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBossDragon_Character_BP_Hard.EndBossDragon_Character_BP_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndBossDragon_Character_BP_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
