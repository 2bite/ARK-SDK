#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_FindAttachPointForZipline_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C
// 0x00B8 (0x0130 - 0x0078)
class UZipline_FindAttachPointForZipline_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetAnchor;                                             // 0x0078(0x0028) (Edit, BlueprintVisible)
	float                                              FindGroundLocationStepDistance;                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachDistance;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NavigationPointKey;                                       // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      AttachTargetPointKey;                                     // 0x00D0(0x0028) (Edit, BlueprintVisible)
	float                                              MinDistanceToGround;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0100(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x0110(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x0120(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_FindAttachPointForZipline_TK.Zipline_FindAttachPointForZipline_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Zipline_FindAttachPointForZipline_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
