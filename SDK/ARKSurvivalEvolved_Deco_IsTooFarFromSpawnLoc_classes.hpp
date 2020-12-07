#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_IsTooFarFromSpawnLoc_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C
// 0x00DD (0x016D - 0x0090)
class UDeco_IsTooFarFromSpawnLoc_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      SpawnedLoc;                                               // 0x0090(0x0028) (Edit, BlueprintVisible)
	float                                              TooFarDistanceXY;                                         // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      LeashActor;                                               // 0x00C0(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AIceKaiju_AIController_BP_C*                 K2Node_DynamicCast_AsIceKaiju_AIController_BP_C;          // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetBlackboardValueAsVector_ReturnValue;          // 0x00FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_GetControllerPawn_ReturnValue;                   // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x0110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0114(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0118(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class AIceKaiju_Character_BP_C*                    K2Node_DynamicCast_AsIceKaiju_Character_BP_C;             // 0x0120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x012C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0138(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x0144(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x0148(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x014C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x0150(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x015C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x0168(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x016C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
