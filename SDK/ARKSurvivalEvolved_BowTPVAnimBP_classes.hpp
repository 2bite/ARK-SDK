#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BowTPVAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BowTPVAnimBP.BowTPVAnimBP_C
// 0x0228 (0x0568 - 0x0340)
class UBowTPVAnimBP_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_139D72C44E1A7C46DFCBE9BAD2073DC5;      // 0x0340(0x0028)
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
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D64E12AA49500622BD29C6B38A684F93;// 0x04D0(0x0060)
	bool                                               IsPullingString;                                          // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0548(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	class APrimalWeaponBow*                            K2Node_DynamicCast_AsPrimalWeaponBow;                     // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0558(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0559(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x055A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetAnimAssetPlayerTimeFromEnd_ReturnValue;       // 0x055C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0561(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0562(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0563(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0564(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BowTPVAnimBP.BowTPVAnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1280();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1279();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1278();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowTPVAnimBP_AnimGraphNode_TransitionResult_1277();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BowTPVAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
