#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aggressive_DragonBoss_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dimorph_Character_BP_Aggressive_DragonBoss_Hard.Dimorph_Character_BP_Aggressive_DragonBoss_Hard_C
// 0x0008 (0x21B0 - 0x21A8)
class ADimorph_Character_BP_Aggressive_DragonBoss_Hard_C : public ADimorph_Character_BP_Aggressive_C
{
public:
	class UDinoCharacterStatusComponent_BP_Dimorph_Aggressive_Hard_C* DinoCharacterStatus_BP_Dimorph_Aggressive_Hard_C1;        // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dimorph_Character_BP_Aggressive_DragonBoss_Hard.Dimorph_Character_BP_Aggressive_DragonBoss_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
