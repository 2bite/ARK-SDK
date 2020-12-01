#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CheckIsVectorNonZero_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CheckIsVectorNonZero.CheckIsVectorNonZero_C
// 0x0045 (0x00BD - 0x0078)
class UCheckIsVectorNonZero_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      inVec;                                                    // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     CallFunc_GetBlackboardValueAsVector_ReturnValue;          // 0x00A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x00B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x00BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckIsVectorNonZero.CheckIsVectorNonZero_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_CheckIsVectorNonZero(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
