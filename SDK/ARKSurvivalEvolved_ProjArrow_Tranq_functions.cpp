// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Tranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Tranq.ProjArrow_Tranq_C.UserConstructionScript
// ()

void AProjArrow_Tranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq.ProjArrow_Tranq_C.UserConstructionScript");

	AProjArrow_Tranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Tranq.ProjArrow_Tranq_C.ExecuteUbergraph_ProjArrow_Tranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Tranq_C::ExecuteUbergraph_ProjArrow_Tranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq.ProjArrow_Tranq_C.ExecuteUbergraph_ProjArrow_Tranq");

	AProjArrow_Tranq_C_ExecuteUbergraph_ProjArrow_Tranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
