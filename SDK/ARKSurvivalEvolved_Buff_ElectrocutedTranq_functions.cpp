// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ElectrocutedTranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ElectrocutedTranq.Buff_ElectrocutedTranq_C.UserConstructionScript
// ()

void ABuff_ElectrocutedTranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ElectrocutedTranq.Buff_ElectrocutedTranq_C.UserConstructionScript");

	ABuff_ElectrocutedTranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ElectrocutedTranq.Buff_ElectrocutedTranq_C.ExecuteUbergraph_Buff_ElectrocutedTranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ElectrocutedTranq_C::ExecuteUbergraph_Buff_ElectrocutedTranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ElectrocutedTranq.Buff_ElectrocutedTranq_C.ExecuteUbergraph_Buff_ElectrocutedTranq");

	ABuff_ElectrocutedTranq_C_ExecuteUbergraph_Buff_ElectrocutedTranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
