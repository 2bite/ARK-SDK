// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrophyWallBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrophyWallBP.TrophyWallBP_C.UserConstructionScript
// ()

void ATrophyWallBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyWallBP.TrophyWallBP_C.UserConstructionScript");

	ATrophyWallBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyWallBP.TrophyWallBP_C.ExecuteUbergraph_TrophyWallBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrophyWallBP_C::ExecuteUbergraph_TrophyWallBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyWallBP.TrophyWallBP_C.ExecuteUbergraph_TrophyWallBP");

	ATrophyWallBP_C_ExecuteUbergraph_TrophyWallBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
