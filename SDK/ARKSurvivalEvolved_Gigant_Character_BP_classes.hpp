#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gigant_Character_BP.Gigant_Character_BP_C
// 0x0008 (0x2198 - 0x2190)
class AGigant_Character_BP_C : public AGigant_Character_BP_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Gigant_C*   DinoCharacterStatus_BP_Gigant_C1_1;                       // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gigant_Character_BP.Gigant_Character_BP_C");
		return ptr;
	}


	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	void UserConstructionScript();
	void ExecuteUbergraph_Gigant_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
