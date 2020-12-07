#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bat_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bat_Character_BP.Bat_Character_BP_C
// 0x000D (0x2195 - 0x2188)
class ABat_Character_BP_C : public ADino_Character_BP_RepelType_C
{
public:
	class UDinoCharacterStatusComponent_BP_Bat_C*      DinoCharacterStatus_BP_Bat_C1;                            // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceForMegaRabies;                                      // 0x2190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanTryGiveRabies;                                        // 0x2194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bat_Character_BP.Bat_Character_BP_C");
		return ptr;
	}


	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void UserConstructionScript();
	void ExecuteUbergraph_Bat_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
