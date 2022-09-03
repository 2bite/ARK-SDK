// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDart_Tranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDart_Tranq.ProjDart_Tranq_C.UserConstructionScript
// ()

void AProjDart_Tranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDart_Tranq.ProjDart_Tranq_C.UserConstructionScript");

	AProjDart_Tranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDart_Tranq.ProjDart_Tranq_C.ExecuteUbergraph_ProjDart_Tranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDart_Tranq_C::ExecuteUbergraph_ProjDart_Tranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDart_Tranq.ProjDart_Tranq_C.ExecuteUbergraph_ProjDart_Tranq");

	AProjDart_Tranq_C_ExecuteUbergraph_ProjDart_Tranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
