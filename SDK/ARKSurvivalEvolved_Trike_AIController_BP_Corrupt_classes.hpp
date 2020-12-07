#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trike_AIController_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trike_AIController_BP_Corrupt.Trike_AIController_BP_Corrupt_C
// 0x0027 (0x0940 - 0x0919)
class ATrike_AIController_BP_Corrupt_C : public ATrike_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0920(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0928(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0929(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x092C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWithinAttackRange_ReturnValue;                 // 0x0930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_FindNewTarget_ReturnValue;                       // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trike_AIController_BP_Corrupt.Trike_AIController_BP_Corrupt_C");
		return ptr;
	}


	bool BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor);
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	bool BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor);
	void BPNotifyTargetSet();
	void UserConstructionScript();
	void CheckIfFlyerIsOutOfRange();
	void ExecuteUbergraph_Trike_AIController_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
