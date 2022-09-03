// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beam_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Beam_Tek.Beam_Tek_C.UserConstructionScript
// ()

void ABeam_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Tek.Beam_Tek_C.UserConstructionScript");

	ABeam_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beam_Tek.Beam_Tek_C.ExecuteUbergraph_Beam_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeam_Tek_C::ExecuteUbergraph_Beam_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Tek.Beam_Tek_C.ExecuteUbergraph_Beam_Tek");

	ABeam_Tek_C_ExecuteUbergraph_Beam_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
