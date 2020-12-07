// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToFear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ImmuneToFear.Buff_ImmuneToFear_C.UserConstructionScript
// ()

void ABuff_ImmuneToFear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToFear.Buff_ImmuneToFear_C.UserConstructionScript");

	ABuff_ImmuneToFear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ImmuneToFear.Buff_ImmuneToFear_C.ExecuteUbergraph_Buff_ImmuneToFear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ImmuneToFear_C::ExecuteUbergraph_Buff_ImmuneToFear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ImmuneToFear.Buff_ImmuneToFear_C.ExecuteUbergraph_Buff_ImmuneToFear");

	ABuff_ImmuneToFear_C_ExecuteUbergraph_Buff_ImmuneToFear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
