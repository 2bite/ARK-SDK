#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Character_BP_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KingKaiju_Character_BP_Beta.KingKaiju_Character_BP_Beta_C
// 0x0008 (0x2D60 - 0x2D58)
class AKingKaiju_Character_BP_Beta_C : public AKingKaiju_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_KingKaiju_Beta_C* DinoCharacterStatus_BP_KingKaiju_Beta_C1;                 // 0x2D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_Character_BP_Beta.KingKaiju_Character_BP_Beta_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_KingKaiju_Character_BP_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
