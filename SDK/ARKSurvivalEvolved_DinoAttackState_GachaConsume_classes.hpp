#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GachaConsume_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_GachaConsume.DinoAttackState_GachaConsume_C
// 0x0000 (0x0090 - 0x0090)
class UDinoAttackState_GachaConsume_C : public UDinoAttackStateMelee_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_GachaConsume.DinoAttackState_GachaConsume_C");
		return ptr;
	}


	void OnEndEvent();
	void ExecuteUbergraph_DinoAttackState_GachaConsume(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
