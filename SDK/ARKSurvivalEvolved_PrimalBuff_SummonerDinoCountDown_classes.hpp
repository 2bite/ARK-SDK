#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalBuff_SummonerDinoCountDown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C
// 0x001C (0x0A50 - 0x0A34)
class APrimalBuff_SummonerDinoCountDown_C : public APrimalBuff_ChangeMaterialScalarParamOverTime_C
{
public:
	float                                              ImmobilizeTime;                                           // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      SummonedSkelMeshComp;                                     // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSummonedSkelMesh;                                     // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A41(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_Character;                             // 0x0A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalBuff_SummonerDinoCountDown.PrimalBuff_SummonerDinoCountDown_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void ClearImmobilization();
	void SetSuicideTimer(float Duration);
	void Suicide();
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void OnInstigatorDied(class APrimalCharacter* Character);
	void ExecuteUbergraph_PrimalBuff_SummonerDinoCountDown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
