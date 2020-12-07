#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_tek_mosa_helmet_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C
// 0x017B (0x04BB - 0x0340)
class Utek_mosa_helmet_RIG_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_67F1DFB94FDB14A9303DB9B468CDAB53;      // 0x0340(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9205D2D54D76335A72C6C18BA9464505;// 0x0368(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F700D6714D656E8CF2DB4F80CE8FF248;// 0x03C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46C864224A187316FBEF0DA3FB03771C;// 0x03F8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F94E42624C5703A3068544BD043F750D;      // 0x0428(0x0038)
	bool                                               bHelmetActive;                                            // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0461(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0462(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0463(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x046C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0488(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	TArray<class APrimalBuff*>                         CallFunc_GetBuffs_TheBuffs;                               // 0x0490(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalBuff*                                 CallFunc_Array_Get_Item;                                  // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x04A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class ABuff_DinoTekHelmet_Base_C*                  K2Node_DynamicCast_AsBuff_DinoTekHelmet_Base_C;           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x04B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x04B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x04BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2616();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
