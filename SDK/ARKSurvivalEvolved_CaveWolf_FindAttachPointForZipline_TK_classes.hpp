#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_FindAttachPointForZipline_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C
// 0x0090 (0x0108 - 0x0078)
class UCaveWolf_FindAttachPointForZipline_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetAnchor;                                             // 0x0078(0x0028) (Edit, BlueprintVisible)
	float                                              FindGroundLocationStepDistance;                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachDistance;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NavigationPointKey;                                       // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      AttachTargetPointKey;                                     // 0x00D0(0x0028) (Edit, BlueprintVisible)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x00F8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C");
		return ptr;
	}


	void STATIC_ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
