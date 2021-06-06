// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TentacleToss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TentacleToss.Buff_TentacleToss_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TentacleToss_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleToss.Buff_TentacleToss_C.AllowPostProcessEffect");

	ABuff_TentacleToss_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TentacleToss.Buff_TentacleToss_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TentacleToss_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleToss.Buff_TentacleToss_C.BPDeactivated");

	ABuff_TentacleToss_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TentacleToss.Buff_TentacleToss_C.UserConstructionScript
// ()

void ABuff_TentacleToss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleToss.Buff_TentacleToss_C.UserConstructionScript");

	ABuff_TentacleToss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TentacleToss.Buff_TentacleToss_C.ExecuteUbergraph_Buff_TentacleToss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TentacleToss_C::ExecuteUbergraph_Buff_TentacleToss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleToss.Buff_TentacleToss_C.ExecuteUbergraph_Buff_TentacleToss");

	ABuff_TentacleToss_C_ExecuteUbergraph_Buff_TentacleToss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
