#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Strider_BodyVFX_Parent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C
// 0x0095 (0x0A0D - 0x0978)
class ABuff_Strider_BodyVFX_Parent_C : public APrimalBuff
{
public:
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8786AD5C442C83509327968DCC50D616;   // 0x0978(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0979(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              uncloak_timeline_play_rate;                               // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamoFadeSpeedDeathMultiplier;                             // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cloak_timeline_play_rate;                                 // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_hidden;                                                // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_starting_to_hide_or_unhide;                            // 0x0995(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_camo_active;                                           // 0x0996(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               first_time_uncloaked;                                     // 0x0997(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             time_when_first_unequipped;                               // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      SpawnedBeamLockMeshComp;                                  // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BeamLockCharMeshMaterialParent;                           // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SpawnedBeamLockCharMeshMID;                               // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamLockCharMeshMID_ParamName_Ratio;                      // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamLockCharMeshMID_ParamName_Color;                      // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SpawnedBeamLockMeshComps;                                 // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     saved_scale;                                              // 0x09D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Deactivate;                                               // 0x09E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09E5(0x0003) MISSED OFFSET
	float                                              mat_invisibility_param_max;                               // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               turning_invisible;                                        // 0x09EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09ED(0x0003) MISSED OFFSET
	float                                              fadeout_lerp_rate;                                        // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fadein_lerp_rate;                                         // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              radius_amount;                                            // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                saved_initial_color;                                      // 0x09FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dont_show_mat;                                            // 0x0A0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void deactivate_cloak_mat();
	void activate_cloak_mat();
	void BuffTickClient(float* DeltaTime);
	void OnRep_is_camo_active();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Play_FadeCamo_LFL();
	void Reverse_FadeCamo_LFL();
	void Multi_PlayFade();
	void Multi_PlayFade_reverse();
	void ExecuteUbergraph_Buff_Strider_BodyVFX_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
