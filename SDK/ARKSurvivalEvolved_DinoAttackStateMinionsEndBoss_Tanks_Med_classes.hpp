#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Tanks_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Tanks_Med.DinoAttackStateMinionsEndBoss_Tanks_Med_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinionsEndBoss_Tanks_Med_C : public UDinoAttackStateMinionsEndBoss_Tanks_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinionsEndBoss_Tanks_Med.DinoAttackStateMinionsEndBoss_Tanks_Med_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
