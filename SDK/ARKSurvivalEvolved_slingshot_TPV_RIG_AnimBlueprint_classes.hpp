#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_slingshot_TPV_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C
// 0x0360 (0x06A0 - 0x0340)
class Uslingshot_TPV_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_71F7E537414148F5DE49D3A448CE788F;      // 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_443B71C84C86601ECFEB21AB10B0E85D;// 0x0368(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2F53E764A3F2C241F66ABA5198D1BD1;// 0x0380(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA08BC0244042421C6DDE18BB9667F0C;// 0x0398(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_315D9E3A411092D0265E0EB3ED1771CB;// 0x03B0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCFF8BCD4185A3EC68EB7CA5B271A0FD;// 0x03C8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_430DD7FE4247F693810B31BC7B2B2170;// 0x03F8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E905746546C261E649FA1DBCD36244E9;// 0x0420(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_232E8A264E1DD53A6C10D2A3A012A062;// 0x0450(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF81805A4178A6B48F8DC8855F1A288A;// 0x0478(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_915A80264BDB1AAF5DB574A994FA5033;// 0x04A8(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F053F5345D5CDE7A767A781521B305B;// 0x04D0(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5AFCCB294FC132E7CA9E10874715BC60;// 0x0530(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1B9695164BD5D00863F77DA396766396;// 0x05E0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_01EAD0404CCDE8F61CE0E39D4D0E7B15;// 0x0608(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_91E080E74B125429D576FCB955D005F9;      // 0x0630(0x0038)
	bool                                               IsPullingString;                                          // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0681(0x0007) MISSED OFFSET
	class APrimalWeaponBow*                            K2Node_DynamicCast_AsPrimalWeaponBow;                     // 0x0688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0690(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0691(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0692(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x0694(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0699(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x069A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x069B(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x069C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass slingshot_TPV_RIG_AnimBlueprint.slingshot_TPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1788();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1787();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1786();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint_AnimGraphNode_TransitionResult_1785();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_slingshot_TPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
