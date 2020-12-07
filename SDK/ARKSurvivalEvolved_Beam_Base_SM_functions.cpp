// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beam_Base_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Beam_Base_SM.Beam_Base_SM_C.UserConstructionScript
// ()

void ABeam_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Base_SM.Beam_Base_SM_C.UserConstructionScript");

	ABeam_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beam_Base_SM.Beam_Base_SM_C.ExecuteUbergraph_Beam_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeam_Base_SM_C::ExecuteUbergraph_Beam_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Base_SM.Beam_Base_SM_C.ExecuteUbergraph_Beam_Base_SM");

	ABeam_Base_SM_C_ExecuteUbergraph_Beam_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
