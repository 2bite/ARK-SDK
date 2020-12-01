#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossGorilla_Character_BP_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBossGorilla_Character_BP_Hard.EndBossGorilla_Character_BP_Hard_C
// 0x000F (0x2250 - 0x2241)
class AEndBossGorilla_Character_BP_Hard_C : public AEndBossGorilla_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2241(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_EndBoss_Gorilla_Hard_C* DinoCharacterStatus_BP_EndBoss_Gorilla_Hard_C1;           // 0x2248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBossGorilla_Character_BP_Hard.EndBossGorilla_Character_BP_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndBossGorilla_Character_BP_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
