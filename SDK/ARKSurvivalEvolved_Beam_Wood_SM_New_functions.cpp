// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beam_Wood_SM_New_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Beam_Wood_SM_New.Beam_Wood_SM_New_C.UserConstructionScript
// ()

void ABeam_Wood_SM_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Wood_SM_New.Beam_Wood_SM_New_C.UserConstructionScript");

	ABeam_Wood_SM_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beam_Wood_SM_New.Beam_Wood_SM_New_C.ExecuteUbergraph_Beam_Wood_SM_New
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeam_Wood_SM_New_C::ExecuteUbergraph_Beam_Wood_SM_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Wood_SM_New.Beam_Wood_SM_New_C.ExecuteUbergraph_Beam_Wood_SM_New");

	ABeam_Wood_SM_New_C_ExecuteUbergraph_Beam_Wood_SM_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
