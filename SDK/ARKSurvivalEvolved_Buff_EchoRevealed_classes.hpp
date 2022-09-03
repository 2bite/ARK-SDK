#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EchoRevealed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EchoRevealed.Buff_EchoRevealed_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_EchoRevealed_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EchoRevealed.Buff_EchoRevealed_C");
		return ptr;
	}


	void DeactiveParticle();
	void BPSetupForInstigator(class AActor** ForInstigator);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	bool BPCustomIsRelevantForClient(class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_EchoRevealed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
