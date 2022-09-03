// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifleTracerRound_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapRifleTracerRound.WeapRifleTracerRound_C.UserConstructionScript
// ()

void AWeapRifleTracerRound_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifleTracerRound.WeapRifleTracerRound_C.UserConstructionScript");

	AWeapRifleTracerRound_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapRifleTracerRound.WeapRifleTracerRound_C.ExecuteUbergraph_WeapRifleTracerRound
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapRifleTracerRound_C::ExecuteUbergraph_WeapRifleTracerRound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapRifleTracerRound.WeapRifleTracerRound_C.ExecuteUbergraph_WeapRifleTracerRound");

	AWeapRifleTracerRound_C_ExecuteUbergraph_WeapRifleTracerRound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
