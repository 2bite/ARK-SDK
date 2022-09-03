// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Tranq_TekBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Tranq_TekBow.ProjArrow_Tranq_TekBow_C.UserConstructionScript
// ()

void AProjArrow_Tranq_TekBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq_TekBow.ProjArrow_Tranq_TekBow_C.UserConstructionScript");

	AProjArrow_Tranq_TekBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Tranq_TekBow.ProjArrow_Tranq_TekBow_C.ExecuteUbergraph_ProjArrow_Tranq_TekBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Tranq_TekBow_C::ExecuteUbergraph_ProjArrow_Tranq_TekBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq_TekBow.ProjArrow_Tranq_TekBow_C.ExecuteUbergraph_ProjArrow_Tranq_TekBow");

	AProjArrow_Tranq_TekBow_C_ExecuteUbergraph_ProjArrow_Tranq_TekBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
