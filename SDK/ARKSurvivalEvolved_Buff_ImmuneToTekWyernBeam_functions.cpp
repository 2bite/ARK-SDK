// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToTekWyernBeam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ImmuneToTekWyernBeam.Buff_ImmuneToTekWyernBeam_C.UserConstructionScript
// ()

void ABuff_ImmuneToTekWyernBeam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToTekWyernBeam.Buff_ImmuneToTekWyernBeam_C.UserConstructionScript");

	ABuff_ImmuneToTekWyernBeam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToTekWyernBeam.Buff_ImmuneToTekWyernBeam_C.ExecuteUbergraph_Buff_ImmuneToTekWyernBeam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImmuneToTekWyernBeam_C::ExecuteUbergraph_Buff_ImmuneToTekWyernBeam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToTekWyernBeam.Buff_ImmuneToTekWyernBeam_C.ExecuteUbergraph_Buff_ImmuneToTekWyernBeam");

	ABuff_ImmuneToTekWyernBeam_C_ExecuteUbergraph_Buff_ImmuneToTekWyernBeam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
