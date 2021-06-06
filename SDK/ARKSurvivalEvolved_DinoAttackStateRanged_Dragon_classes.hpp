#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_Dragon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateRanged_Dragon.DinoAttackStateRanged_Dragon_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackStateRanged_Dragon_C : public UDinoAttackStateRanged_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged_Dragon.DinoAttackStateRanged_Dragon_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateRanged_Dragon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
