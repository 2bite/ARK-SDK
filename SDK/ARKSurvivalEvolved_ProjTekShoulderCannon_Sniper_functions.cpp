// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekShoulderCannon_Sniper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.UserConstructionScript
// ()

void AProjTekShoulderCannon_Sniper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.UserConstructionScript");

	AProjTekShoulderCannon_Sniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.ExecuteUbergraph_ProjTekShoulderCannon_Sniper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekShoulderCannon_Sniper_C::ExecuteUbergraph_ProjTekShoulderCannon_Sniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.ExecuteUbergraph_ProjTekShoulderCannon_Sniper");

	AProjTekShoulderCannon_Sniper_C_ExecuteUbergraph_ProjTekShoulderCannon_Sniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
