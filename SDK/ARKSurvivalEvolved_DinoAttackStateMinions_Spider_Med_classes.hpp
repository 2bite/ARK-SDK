#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinions_Spider_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinions_Spider_Med.DinoAttackStateMinions_Spider_Med_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinions_Spider_Med_C : public UDinoAttackStateMinions_Spider_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinions_Spider_Med.DinoAttackStateMinions_Spider_Med_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinions_Spider_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
