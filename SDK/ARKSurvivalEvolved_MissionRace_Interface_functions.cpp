// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionRace_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionRace_Interface.MissionRace_Interface_C.GetPlayerRanking
// ()
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Ranking                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionRace_Interface_C::GetPlayerRanking(int PlayerIndex, int* Ranking)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRace_Interface.MissionRace_Interface_C.GetPlayerRanking");

	UMissionRace_Interface_C_GetPlayerRanking_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ranking != nullptr)
		*Ranking = params.Ranking;
}


// Function MissionRace_Interface.MissionRace_Interface_C.GetRaceData
// ()
// Parameters:
// TArray<struct FRacePlayerData> RaceData                       (Parm, OutParm, ZeroConstructor)

void UMissionRace_Interface_C::GetRaceData(TArray<struct FRacePlayerData>* RaceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRace_Interface.MissionRace_Interface_C.GetRaceData");

	UMissionRace_Interface_C_GetRaceData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RaceData != nullptr)
		*RaceData = params.RaceData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
