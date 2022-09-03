#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RootedAOE_ForestKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C
// 0x0048 (0x09C8 - 0x0980)
class ABuff_RootedAOE_ForestKaiju_C : public ABuff_Base_AoE_C
{
public:
	class UBoxComponent*                               Box1;                                                     // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriedRoot;                                                // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0989(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x098C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0998(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	double                                             CallFunc_Add_DoubleFloat_ReturnValue;                     // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x09B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x09B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x09B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x09B6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x09B7(0x0001) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_BoxOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x09B8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RootedAOE_ForestKaiju.Buff_RootedAOE_ForestKaiju_C");
		return ptr;
	}


	void BPActivated(class AActor** ForInstigator);
	void RootEnemiesInside(class AActor* ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_RootedAOE_ForestKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
