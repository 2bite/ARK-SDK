// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LeaderboardRow_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeaderboardRow_Race.LeaderboardRow_Race_C.ExecuteUbergraph_LeaderboardRow_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardRow_Race_C::ExecuteUbergraph_LeaderboardRow_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRow_Race.LeaderboardRow_Race_C.ExecuteUbergraph_LeaderboardRow_Race");

	ULeaderboardRow_Race_C_ExecuteUbergraph_LeaderboardRow_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
