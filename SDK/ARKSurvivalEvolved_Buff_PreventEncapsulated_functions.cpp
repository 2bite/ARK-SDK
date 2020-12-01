// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventEncapsulated_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventEncapsulated.Buff_PreventEncapsulated_C.UserConstructionScript
// ()

void ABuff_PreventEncapsulated_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventEncapsulated.Buff_PreventEncapsulated_C.UserConstructionScript");

	ABuff_PreventEncapsulated_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventEncapsulated.Buff_PreventEncapsulated_C.ExecuteUbergraph_Buff_PreventEncapsulated
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventEncapsulated_C::ExecuteUbergraph_Buff_PreventEncapsulated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventEncapsulated.Buff_PreventEncapsulated_C.ExecuteUbergraph_Buff_PreventEncapsulated");

	ABuff_PreventEncapsulated_C_ExecuteUbergraph_Buff_PreventEncapsulated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
