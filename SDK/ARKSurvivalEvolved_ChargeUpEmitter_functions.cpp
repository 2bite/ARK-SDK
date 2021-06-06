// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargeUpEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChargeUpEmitter.ChargeUpEmitter_C.UserConstructionScript
// ()

void AChargeUpEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeUpEmitter.ChargeUpEmitter_C.UserConstructionScript");

	AChargeUpEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChargeUpEmitter.ChargeUpEmitter_C.ExecuteUbergraph_ChargeUpEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChargeUpEmitter_C::ExecuteUbergraph_ChargeUpEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargeUpEmitter.ChargeUpEmitter_C.ExecuteUbergraph_ChargeUpEmitter");

	AChargeUpEmitter_C_ExecuteUbergraph_ChargeUpEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
