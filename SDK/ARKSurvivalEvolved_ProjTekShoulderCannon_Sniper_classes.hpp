#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekShoulderCannon_Sniper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C
// 0x0000 (0x07A2 - 0x07A2)
class AProjTekShoulderCannon_Sniper_C : public AProjTekShoulderCannon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjTekShoulderCannon_Sniper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
