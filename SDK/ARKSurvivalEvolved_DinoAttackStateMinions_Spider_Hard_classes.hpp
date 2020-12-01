#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinions_Spider_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinions_Spider_Hard.DinoAttackStateMinions_Spider_Hard_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinions_Spider_Hard_C : public UDinoAttackStateMinions_Spider_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinions_Spider_Hard.DinoAttackStateMinions_Spider_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinions_Spider_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
