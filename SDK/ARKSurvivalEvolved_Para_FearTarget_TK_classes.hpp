#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Para_FearTarget_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Para_FearTarget_TK.Para_FearTarget_TK_C
// 0x0028 (0x00A0 - 0x0078)
class UPara_FearTarget_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0078(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Para_FearTarget_TK.Para_FearTarget_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Para_FearTarget_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
