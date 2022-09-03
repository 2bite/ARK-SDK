// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SanguineElixirUsed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SanguineElixirUsed.Buff_SanguineElixirUsed_C.UserConstructionScript
// ()

void ABuff_SanguineElixirUsed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SanguineElixirUsed.Buff_SanguineElixirUsed_C.UserConstructionScript");

	ABuff_SanguineElixirUsed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SanguineElixirUsed.Buff_SanguineElixirUsed_C.ExecuteUbergraph_Buff_SanguineElixirUsed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SanguineElixirUsed_C::ExecuteUbergraph_Buff_SanguineElixirUsed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SanguineElixirUsed.Buff_SanguineElixirUsed_C.ExecuteUbergraph_Buff_SanguineElixirUsed");

	ABuff_SanguineElixirUsed_C_ExecuteUbergraph_Buff_SanguineElixirUsed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
