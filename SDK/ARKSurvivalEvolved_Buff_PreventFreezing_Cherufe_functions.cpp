// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventFreezing_Cherufe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventFreezing_Cherufe.Buff_PreventFreezing_Cherufe_C.UserConstructionScript
// ()

void ABuff_PreventFreezing_Cherufe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Cherufe.Buff_PreventFreezing_Cherufe_C.UserConstructionScript");

	ABuff_PreventFreezing_Cherufe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventFreezing_Cherufe.Buff_PreventFreezing_Cherufe_C.ExecuteUbergraph_Buff_PreventFreezing_Cherufe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventFreezing_Cherufe_C::ExecuteUbergraph_Buff_PreventFreezing_Cherufe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventFreezing_Cherufe.Buff_PreventFreezing_Cherufe_C.ExecuteUbergraph_Buff_PreventFreezing_Cherufe");

	ABuff_PreventFreezing_Cherufe_C_ExecuteUbergraph_Buff_PreventFreezing_Cherufe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
