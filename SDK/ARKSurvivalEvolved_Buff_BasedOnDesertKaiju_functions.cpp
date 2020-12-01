// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BasedOnDesertKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BasedOnDesertKaiju_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPDeactivated");

	ABuff_BasedOnDesertKaiju_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BasedOnDesertKaiju_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPSetupForInstigator");

	ABuff_BasedOnDesertKaiju_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.UserConstructionScript
// ()

void ABuff_BasedOnDesertKaiju_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.UserConstructionScript");

	ABuff_BasedOnDesertKaiju_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.ExecuteUbergraph_Buff_BasedOnDesertKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BasedOnDesertKaiju_C::ExecuteUbergraph_Buff_BasedOnDesertKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.ExecuteUbergraph_Buff_BasedOnDesertKaiju");

	ABuff_BasedOnDesertKaiju_C_ExecuteUbergraph_Buff_BasedOnDesertKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
