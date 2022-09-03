#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_TryAttachToZipline_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zipline_TryAttachToZipline_TK.Zipline_TryAttachToZipline_TK_C
// 0x0058 (0x00D0 - 0x0078)
class UZipline_TryAttachToZipline_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetAnchor;                                             // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00A0(0x0028) (Edit, BlueprintVisible)
	class UActorComponent*                             ZiplineComponent;                                         // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_TryAttachToZipline_TK.Zipline_TryAttachToZipline_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Zipline_TryAttachToZipline_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
