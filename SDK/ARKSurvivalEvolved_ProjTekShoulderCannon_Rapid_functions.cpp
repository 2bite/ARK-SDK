// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekShoulderCannon_Rapid_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.UserConstructionScript
// ()

void AProjTekShoulderCannon_Rapid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.UserConstructionScript");

	AProjTekShoulderCannon_Rapid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.ExecuteUbergraph_ProjTekShoulderCannon_Rapid
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekShoulderCannon_Rapid_C::ExecuteUbergraph_ProjTekShoulderCannon_Rapid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.ExecuteUbergraph_ProjTekShoulderCannon_Rapid");

	AProjTekShoulderCannon_Rapid_C_ExecuteUbergraph_ProjTekShoulderCannon_Rapid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
