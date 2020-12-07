#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Explosion_TropeFlakCannonProj_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Explosion_TropeFlakCannonProj.DmgType_Explosion_TropeFlakCannonProj_C
// 0x0013 (0x0144 - 0x0131)
class UDmgType_Explosion_TropeFlakCannonProj_C : public UDmgType_Explosion_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class UCurveFloat*                                 SaddleQualityIndexToDamageMultCurve;                      // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyerDamageMultiplier;                                    // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Explosion_TropeFlakCannonProj.DmgType_Explosion_TropeFlakCannonProj_C");
		return ptr;
	}


	float BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
