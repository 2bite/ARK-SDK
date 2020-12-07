#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeaverDam_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BeaverDam.BeaverDam_C
// 0x0048 (0x0E20 - 0x0DD8)
class ABeaverDam_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_BeaverDam_C*              PrimalInventoryBP_BeaverDam_C2;                           // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpikeDamage;                                              // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeDamageImpulse;                                       // 0x0DE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      SpikeDamageType;                                          // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyingDamage;                                          // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E01(0x0003) MISSED OFFSET
	float                                              SpikeDamageInterval;                                      // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitResult>                          HitInfo;                                                  // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DamageCount;                                              // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                index;                                                    // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeaverDam.BeaverDam_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BeaverDam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
