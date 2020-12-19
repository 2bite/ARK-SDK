#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsDragon_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinionsDragon_Hard.DinoAttackStateMinionsDragon_Hard_C
// 0x0000 (0x00B4 - 0x00B4)
class UDinoAttackStateMinionsDragon_Hard_C : public UDinoAttackStateMinionsDragon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinionsDragon_Hard.DinoAttackStateMinionsDragon_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinionsDragon_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
