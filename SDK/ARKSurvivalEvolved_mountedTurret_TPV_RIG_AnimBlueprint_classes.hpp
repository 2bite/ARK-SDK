#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_mountedTurret_TPV_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass mountedTurret_TPV_RIG_AnimBlueprint.mountedTurret_TPV_RIG_AnimBlueprint_C
// 0x05C4 (0x0904 - 0x0340)
class UmountedTurret_TPV_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_81E6A3E14B4A726AFA16B5B30B81A850;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B21A7F13456636E29BBDD9AAECC20311;// 0x0368(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D19D9FDF4A2A7FB3AC18839F7A6B5C95;// 0x0398(0x00F8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_54861DC4472A176E9717D1A2E2625E13;      // 0x0490(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C734550C4A35A0C4047B41913800C3FF;// 0x04D0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_05648DF7449C35DFC5279AA255E72D02;// 0x0580(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_409FA96246A538095F9B0595E1BB09D3;// 0x05A8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0D16651946EF059C33BE85B53102D8BA;// 0x05D0(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_398032094CCB53767E3E0D9CA0A492BA;// 0x0680(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2346945F40ACE3449D0A7FAED98D204C;// 0x0730(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24532E0E4365207989CA2CAD0CA3D3FA;// 0x07E0(0x00B0)
	float                                              TurretYaw;                                                // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turret_Pitch;                                             // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureTurretBallista*              K2Node_DynamicCast_AsPrimalStructureTurretBallista;       // 0x08A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x08AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x08B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x08B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x08B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x08C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x08D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x08D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue3;                            // 0x08D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x08E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x08E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue4;                            // 0x08EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue5;                            // 0x08F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass mountedTurret_TPV_RIG_AnimBlueprint.mountedTurret_TPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_156();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_570();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_569();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_568();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_567();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_566();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_mountedTurret_TPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
