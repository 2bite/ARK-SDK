#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SetShouldGlide_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SetShouldGlide.SetShouldGlide_C
// 0x0050 (0x00C8 - 0x0078)
class USetShouldGlide_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      GlideTargetKey;                                           // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ShouldGlideKey;                                           // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SetShouldGlide.SetShouldGlide_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_SetShouldGlide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
