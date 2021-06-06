#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_GetOffZipline_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C
// 0x00A8 (0x0120 - 0x0078)
class UCaveWolf_GetOffZipline_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      LastZiplineLocation;                                      // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      DetachTimeKey;                                            // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLocationOverride;                                   // 0x00F0(0x0028) (Edit, BlueprintVisible)
	float                                              MaxForwardImpulse;                                        // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpImpulse;                                                // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_GetOffZipline_TK.CaveWolf_GetOffZipline_TK_C");
		return ptr;
	}


	void ReceiveAbort(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_CaveWolf_GetOffZipline_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
