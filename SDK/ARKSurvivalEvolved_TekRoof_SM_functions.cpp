// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekRoof_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekRoof_SM.TekRoof_SM_C.UserConstructionScript
// ()

void ATekRoof_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekRoof_SM.TekRoof_SM_C.UserConstructionScript");

	ATekRoof_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekRoof_SM.TekRoof_SM_C.ExecuteUbergraph_TekRoof_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekRoof_SM_C::ExecuteUbergraph_TekRoof_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekRoof_SM.TekRoof_SM_C.ExecuteUbergraph_TekRoof_SM");

	ATekRoof_SM_C_ExecuteUbergraph_TekRoof_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
