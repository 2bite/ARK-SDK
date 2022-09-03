#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_ProtectedByShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C
// 0x0001 (0x0979 - 0x0978)
class ABuff_TekStrider_ProtectedByShield_C : public APrimalBuff
{
public:
	bool                                               bDebug;                                                   // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	float BPAdjustRadialDamage(float* currentDamage, struct FVector* Origin, struct FRadialDamageEvent* DamageEvent);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekStrider_ProtectedByShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
