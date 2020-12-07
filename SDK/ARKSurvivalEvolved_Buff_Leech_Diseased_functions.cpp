// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Leech_Diseased_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Leech_Diseased.Buff_Leech_Diseased_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Leech_Diseased_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech_Diseased.Buff_Leech_Diseased_C.BPSetupForInstigator");

	ABuff_Leech_Diseased_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Leech_Diseased.Buff_Leech_Diseased_C.UserConstructionScript
// ()

void ABuff_Leech_Diseased_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech_Diseased.Buff_Leech_Diseased_C.UserConstructionScript");

	ABuff_Leech_Diseased_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Leech_Diseased.Buff_Leech_Diseased_C.ExecuteUbergraph_Buff_Leech_Diseased
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Leech_Diseased_C::ExecuteUbergraph_Buff_Leech_Diseased(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Leech_Diseased.Buff_Leech_Diseased_C.ExecuteUbergraph_Buff_Leech_Diseased");

	ABuff_Leech_Diseased_C_ExecuteUbergraph_Buff_Leech_Diseased_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
