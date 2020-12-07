// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Grappled_BAse_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Grappled_BAse.Buff_Grappled_Base_C.UserConstructionScript
// ()

void ABuff_Grappled_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BAse.Buff_Grappled_Base_C.UserConstructionScript");

	ABuff_Grappled_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Grappled_BAse.Buff_Grappled_Base_C.ExecuteUbergraph_Buff_Grappled_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Grappled_Base_C::ExecuteUbergraph_Buff_Grappled_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Grappled_BAse.Buff_Grappled_Base_C.ExecuteUbergraph_Buff_Grappled_Base");

	ABuff_Grappled_Base_C_ExecuteUbergraph_Buff_Grappled_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
