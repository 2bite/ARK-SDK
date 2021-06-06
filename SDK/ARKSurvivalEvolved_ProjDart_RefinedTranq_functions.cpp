// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDart_RefinedTranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.UserConstructionScript
// ()

void AProjDart_RefinedTranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.UserConstructionScript");

	AProjDart_RefinedTranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.ExecuteUbergraph_ProjDart_RefinedTranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDart_RefinedTranq_C::ExecuteUbergraph_ProjDart_RefinedTranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDart_RefinedTranq.ProjDart_RefinedTranq_C.ExecuteUbergraph_ProjDart_RefinedTranq");

	AProjDart_RefinedTranq_C_ExecuteUbergraph_ProjDart_RefinedTranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
