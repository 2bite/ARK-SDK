#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylaco_PounceOnTargetFromTree_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thylaco_PounceOnTargetFromTree_TK.Thylaco_PounceOnTargetFromTree_TK_C
// 0x0028 (0x00A0 - 0x0078)
class UThylaco_PounceOnTargetFromTree_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      IsAttachedToTreeKey;                                      // 0x0078(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thylaco_PounceOnTargetFromTree_TK.Thylaco_PounceOnTargetFromTree_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Thylaco_PounceOnTargetFromTree_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
