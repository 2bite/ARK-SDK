#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantSpeciesR_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C
// 0x0328 (0x0668 - 0x0340)
class UPlantSpeciesR_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_4BF938AE405EF51C1BAFC9B766150880;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F53E3D943D52F53377C2D94C783C4AA;// 0x0368(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CF2136624F49DCA2FD149C8BBA4B7885;      // 0x0398(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3441AA1D4CA36C91190CD5B0DC2AFC4A;      // 0x03D0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EBE47A4B4203332C9147E689A139C380;      // 0x0408(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A6C822C43025BCF30DEB19D9CA04C11;// 0x0440(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FFBB465748AFE40DAFA0CA904A397D2E;// 0x04A0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_07A846384FA285DD788153A81A030690;// 0x04D0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_264E473E4C9AE0384E95AEA3C2223461;// 0x0580(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FC808D2F4162AF23960D4296CBD94424;// 0x05A8(0x0028)
	float                                              HarvestHealth;                                            // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimRateScale;                                            // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RootRotationOffset;                                       // 0x05D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x05E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x05E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x05EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x05F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x05F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AStructure_PlantSpeciesR_C*                  K2Node_DynamicCast_AsStructure_PlantSpeciesR_C;           // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_RotatorRotator_ReturnValue;             // 0x0609(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x060A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x060C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0618(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Multiply_RotatorFloat_ReturnValue;               // 0x061C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x0628(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x0634(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0638(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x063C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0640(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0644(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_SelectRotator_ReturnValue;                       // 0x0650(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RInterpTo_ReturnValue;                           // 0x065C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PlantSpeciesR_AnimBP.PlantSpeciesR_AnimBP_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_BlendListByBool_2910();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PlantSpeciesR_AnimBP_AnimGraphNode_ModifyBone_618();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_PlantSpeciesR_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
