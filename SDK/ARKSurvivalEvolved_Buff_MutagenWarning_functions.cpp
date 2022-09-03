// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MutagenWarning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MutagenWarning.Buff_MutagenWarning_C.UserConstructionScript
// ()

void ABuff_MutagenWarning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutagenWarning.Buff_MutagenWarning_C.UserConstructionScript");

	ABuff_MutagenWarning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutagenWarning.Buff_MutagenWarning_C.ExecuteUbergraph_Buff_MutagenWarning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutagenWarning_C::ExecuteUbergraph_Buff_MutagenWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutagenWarning.Buff_MutagenWarning_C.ExecuteUbergraph_Buff_MutagenWarning");

	ABuff_MutagenWarning_C_ExecuteUbergraph_Buff_MutagenWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
