#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeginLand_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C
// 0x0075 (0x00ED - 0x0078)
class UBeginLand_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      OnLandKey;                                                // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NavigationPointKey;                                       // 0x00A0(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADino_AIController_BP_C*                     K2Node_DynamicCast_AsDino_AIController_BP_C;              // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetLandingLocation_ReturnValue;                  // 0x00DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x00E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x00EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BeginLand_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
