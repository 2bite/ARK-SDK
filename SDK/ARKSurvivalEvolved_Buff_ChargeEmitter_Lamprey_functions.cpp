// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Lamprey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitter_Lamprey.Buff_ChargeEmitter_Lamprey_C.UserConstructionScript
// ()

void ABuff_ChargeEmitter_Lamprey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Lamprey.Buff_ChargeEmitter_Lamprey_C.UserConstructionScript");

	ABuff_ChargeEmitter_Lamprey_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeEmitter_Lamprey.Buff_ChargeEmitter_Lamprey_C.ExecuteUbergraph_Buff_ChargeEmitter_Lamprey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeEmitter_Lamprey_C::ExecuteUbergraph_Buff_ChargeEmitter_Lamprey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeEmitter_Lamprey.Buff_ChargeEmitter_Lamprey_C.ExecuteUbergraph_Buff_ChargeEmitter_Lamprey");

	ABuff_ChargeEmitter_Lamprey_C_ExecuteUbergraph_Buff_ChargeEmitter_Lamprey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
