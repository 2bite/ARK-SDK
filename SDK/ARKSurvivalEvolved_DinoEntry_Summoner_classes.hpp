#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Summoner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Summoner.DinoEntry_Summoner_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Summoner_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Summoner.DinoEntry_Summoner_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Summoner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
