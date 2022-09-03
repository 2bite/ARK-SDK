#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionRace_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionRace_Interface.MissionRace_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UMissionRace_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionRace_Interface.MissionRace_Interface_C");
		return ptr;
	}


	void GetPlayerRanking(int PlayerIndex, int* Ranking);
	void GetRaceData(TArray<struct FRacePlayerData>* RaceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
