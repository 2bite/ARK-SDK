#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_BeginLand_Fjordhawk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C
// 0x00E9 (0x0161 - 0x0078)
class UBTT_BeginLand_Fjordhawk_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      OnLandKey;                                                // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NavigationPointKey;                                       // 0x00A0(0x0028) (Edit, BlueprintVisible)
	bool                                               CallFunc_GetBlackboardValueAsBool_ReturnValue;            // 0x00C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x00D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class AFjordhawk_AIController_BP_C*                K2Node_DynamicCast_AsFjordhawk_AIController_BP_C;         // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AFjordhawk_Character_BP_C*                   K2Node_CustomEvent_Dino;                                  // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AFjordhawk_AIController_BP_C*                K2Node_CustomEvent_Controller;                            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AFjordhawk_Character_BP_C*                   K2Node_DynamicCast_AsFjordhawk_Character_BP_C;            // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_FindLandingLocation_DesiredLOocation;            // 0x0114(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0121(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0122(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0123(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0124(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0125(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0128(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0134(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x0135(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0136(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0137(0x0001) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor2;                                 // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AFjordhawk_AIController_BP_C*                K2Node_DynamicCast_AsFjordhawk_AIController_BP_C2;        // 0x0140(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue2;                  // 0x0150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AFjordhawk_Character_BP_C*                   K2Node_DynamicCast_AsFjordhawk_Character_BP_C2;           // 0x0158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void StartLanding(class AFjordhawk_Character_BP_C* Dino, class AFjordhawk_AIController_BP_C* Controller);
	void ExecuteUbergraph_BTT_BeginLand_Fjordhawk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
