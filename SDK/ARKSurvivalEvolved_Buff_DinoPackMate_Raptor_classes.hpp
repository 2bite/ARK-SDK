#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackMate_Raptor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoPackMate_Raptor.Buff_DinoPackMate_Raptor_C
// 0x001B (0x0993 - 0x0978)
class ABuff_DinoPackMate_Raptor_C : public ABuff_DinoPackMate_C
{
public:
	float                                              DamageResistancePct;                                      // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0980(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADino_Character_BP_Pack_C*                   K2Node_DynamicCast_AsDino_Character_BP_Pack_C;            // 0x0988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0990(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0991(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0992(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoPackMate_Raptor.Buff_DinoPackMate_Raptor_C");
		return ptr;
	}


	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_DinoPackMate_Raptor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
