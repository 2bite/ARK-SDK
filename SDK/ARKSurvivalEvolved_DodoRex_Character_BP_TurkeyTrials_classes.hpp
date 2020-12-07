#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DodoRex_Character_BP_TurkeyTrials_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C
// 0x0174 (0x232C - 0x21B8)
class ADodoRex_Character_BP_TurkeyTrials_C : public ADodoRex_Character_BP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x21C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x21C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x21C5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x21C6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x21C7(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x21C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x21CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x21D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x21D1(0x0003) MISSED OFFSET
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x21D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_FormatAsTime_ReturnValue;                        // 0x21D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x21E8(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2211(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x2218(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x2268(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2278(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x227C(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x2280(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x22A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x22B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x22B9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x22BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x22C8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_OutActors;             // 0x22D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_SphereOverlapActorsSimple_ReturnValue;           // 0x22E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x22E9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x22EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x22F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x22F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x22F9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x2300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2308(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2309(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x230A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x230B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x230C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x230D(0x0003) MISSED OFFSET
	class AShooterHUD*                                 K2Node_Event_HUD;                                         // 0x2310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterX;                                     // 0x2318(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_CenterY;                                     // 0x231C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DrawScale;                                   // 0x2320(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2324(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPDrawTextCentered_ReturnValue;                  // 0x2328(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DodoRex_Character_BP_TurkeyTrials.DodoRex_Character_BP_TurkeyTrials_C");
		return ptr;
	}


	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_DodoRex_Character_BP_TurkeyTrials(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
