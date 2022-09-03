// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leaderboard_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leaderboard_Race.Leaderboard_Race_C.BPFormatLeaderboardRow
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FName*                  MissionTag                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLeaderboardRow         DatabaseRow                    (Parm, OutParm, ReferenceParm)
// struct FLeaderboardDisplayRow  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLeaderboardDisplayRow ULeaderboard_Race_C::BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Race.Leaderboard_Race_C.BPFormatLeaderboardRow");

	ULeaderboard_Race_C_BPFormatLeaderboardRow_Params params;
	params.MissionTag = MissionTag;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DatabaseRow != nullptr)
		*DatabaseRow = params.DatabaseRow;

	return params.ReturnValue;
}


// Function Leaderboard_Race.Leaderboard_Race_C.SelectIcon
// ()
// Parameters:
// int                            Place                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_Race_C::SelectIcon(int Place, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Race.Leaderboard_Race_C.SelectIcon");

	ULeaderboard_Race_C_SelectIcon_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function Leaderboard_Race.Leaderboard_Race_C.ExecuteUbergraph_Leaderboard_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_Race_C::ExecuteUbergraph_Leaderboard_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Race.Leaderboard_Race_C.ExecuteUbergraph_Leaderboard_Race");

	ULeaderboard_Race_C_ExecuteUbergraph_Leaderboard_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
