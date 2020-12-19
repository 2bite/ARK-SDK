// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NoPoison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NoPoison.Buff_NoPoison_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoPoison_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoPoison.Buff_NoPoison_C.BPPreSetupForInstigator");

	ABuff_NoPoison_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoPoison.Buff_NoPoison_C.UserConstructionScript
// ()

void ABuff_NoPoison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoPoison.Buff_NoPoison_C.UserConstructionScript");

	ABuff_NoPoison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NoPoison.Buff_NoPoison_C.ExecuteUbergraph_Buff_NoPoison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NoPoison_C::ExecuteUbergraph_Buff_NoPoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NoPoison.Buff_NoPoison_C.ExecuteUbergraph_Buff_NoPoison");

	ABuff_NoPoison_C_ExecuteUbergraph_Buff_NoPoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
