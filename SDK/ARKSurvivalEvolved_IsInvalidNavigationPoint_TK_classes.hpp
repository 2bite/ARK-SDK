#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsInvalidNavigationPoint_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C
// 0x0045 (0x00BD - 0x0078)
class UIsInvalidNavigationPoint_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      NavigationTargetKey;                                      // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     CallFunc_GetBlackboardValueAsVector_ReturnValue;          // 0x00A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x00B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x00BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_IsInvalidNavigationPoint_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
