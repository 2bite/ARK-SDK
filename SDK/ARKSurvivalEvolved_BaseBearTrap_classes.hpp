#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseBearTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseBearTrap.BaseBearTrap_C
// 0x0008 (0x0B68 - 0x0B60)
class ABaseBearTrap_C : public APrimalStructureBearTrap
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseBearTrap.BaseBearTrap_C");
		return ptr;
	}


	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_BaseBearTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
