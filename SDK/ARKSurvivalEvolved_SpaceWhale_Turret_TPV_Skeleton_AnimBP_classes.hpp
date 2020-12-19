#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_Turret_TPV_Skeleton_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SpaceWhale_Turret_TPV_Skeleton_AnimBP.SpaceWhale_Turret_TPV_Skeleton_AnimBP_C
// 0x0298 (0x05D8 - 0x0340)
class USpaceWhale_Turret_TPV_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_8A6FE82841703C23133012A94AF287AC;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E39747346F6BF7B870A9B97AABCAF0F;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B6315C5444C8D8E9CC011948FD73ED5;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C2126E64594AC77C744FE9A59C66156;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A85D90F242C88D57FD86318D30228AF1;// 0x03B0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B04564AF4BFEC93994E097B35A006E44;// 0x03C8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_14ABE0024B57A81633FD60AA7C4583DE;// 0x03F8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C066193F4A1B2747A76140B868E3FEE3;// 0x0420(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_67D2C86A48DA42C2DCD60899FA43B83F;// 0x0450(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39879890497547F041DE04824198A2DF;// 0x0478(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_136892954E112CB7D3AFA596C513064F;// 0x04A8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBAD69D94D1C897616C25EA0F3136CD4;// 0x04D0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_12EDD19343BF4FBA2C21DFAA42BD2DF9;// 0x0500(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B065C5264C23B6310E53089227E74B55;// 0x0528(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BFA4B6424E142B3C4693ACA81A322614;      // 0x0588(0x0038)
	bool                                               Active;                                                   // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x05C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05C2(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x05C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x05C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEndFraction_ReturnValue;// 0x05CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x05D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05D1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x05D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpaceWhale_Turret_TPV_Skeleton_AnimBP.SpaceWhale_Turret_TPV_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceWhale_Turret_TPV_Skeleton_AnimBP_AnimGraphNode_TransitionResult_1722();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceWhale_Turret_TPV_Skeleton_AnimBP_AnimGraphNode_TransitionResult_1721();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceWhale_Turret_TPV_Skeleton_AnimBP_AnimGraphNode_TransitionResult_1720();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceWhale_Turret_TPV_Skeleton_AnimBP_AnimGraphNode_TransitionResult_1719();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SpaceWhale_Turret_TPV_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
