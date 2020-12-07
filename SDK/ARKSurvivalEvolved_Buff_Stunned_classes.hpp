#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Stunned.Buff_Stunned_C
// 0x0018 (0x0968 - 0x0950)
class ABuff_Stunned_C : public ABuff_Base_C
{
public:
	float                                              StunWeightLimit;                                          // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	class UAnimMontage*                                HumanStunAnimWalking;                                     // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HumanStunAnimSwimming;                                    // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Stunned.Buff_Stunned_C");
		return ptr;
	}


	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Stunned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
