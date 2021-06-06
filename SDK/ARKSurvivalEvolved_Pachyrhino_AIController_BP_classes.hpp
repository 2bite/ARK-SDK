#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pachyrhino_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C
// 0x0028 (0x0941 - 0x0919)
class APachyrhino_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x0920(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APachyrhino_Character_BP_C*                  K2Node_DynamicCast_AsPachyrhino_Character_BP_C;           // 0x0928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0931(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Time;                                  // 0x0934(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_targetWhenCalled;                      // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0940(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C");
		return ptr;
	}


	void BPOnFleeEvent();
	void UserConstructionScript();
	void ClearAggroAfterTime(float Time, class AActor* targetWhenCalled);
	void ExecuteUbergraph_Pachyrhino_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
