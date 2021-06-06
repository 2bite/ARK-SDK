#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SetCurrentAttack_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SetCurrentAttack_TK.SetCurrentAttack_TK_C
// 0x0030 (0x00A8 - 0x0078)
class USetCurrentAttack_TK_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      DesiredAttackIndex;                                       // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseIndexKey;                                              // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      AttackIndexKey;                                           // 0x0080(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SetCurrentAttack_TK.SetCurrentAttack_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_SetCurrentAttack_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
