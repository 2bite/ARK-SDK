// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beam_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Beam_Metal.Beam_Metal_C.UserConstructionScript
// ()

void ABeam_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Metal.Beam_Metal_C.UserConstructionScript");

	ABeam_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beam_Metal.Beam_Metal_C.ExecuteUbergraph_Beam_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeam_Metal_C::ExecuteUbergraph_Beam_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Metal.Beam_Metal_C.ExecuteUbergraph_Beam_Metal");

	ABeam_Metal_C_ExecuteUbergraph_Beam_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
