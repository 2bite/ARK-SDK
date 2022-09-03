#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_WS_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C
// 0x0070 (0x2640 - 0x25D0)
class ACrystalWyvern_Character_BP_WS_C : public ACrystalWyvern_Character_BP_Base_C
{
public:
	class UClass*                                      AquaticBuffClass;                                         // 0x25D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      K2Node_Event_OtherActor;                                  // 0x25D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APhysicsVolume*                              K2Node_DynamicCast_AsPhysicsVolume;                       // 0x25E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x25E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue;                             // 0x25E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x25EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bIsActive;                             // 0x25EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x25EC(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x25F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_SpinoAqua_C*                           K2Node_DynamicCast_AsBuff_SpinoAqua_C;                    // 0x25F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2600(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2601(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2608(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ResetBuffStart_ReturnValue;                      // 0x2610(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2611(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OtherActor2;                                 // 0x2618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APhysicsVolume*                              K2Node_DynamicCast_AsPhysicsVolume2;                      // 0x2620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2628(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue2;                            // 0x2629(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x262A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x262B(0x0005) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x2630(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C");
		return ptr;
	}


	void SpawnWaterOverlapVFX(class AActor* WaterActor);
	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void Multi_UpdateBuffTime(bool bIsActive);
	void ExecuteUbergraph_CrystalWyvern_Character_BP_WS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
