// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Explosive_TekBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Explosive_TekBow.ProjArrow_Explosive_TekBow_C.UserConstructionScript
// ()

void AProjArrow_Explosive_TekBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive_TekBow.ProjArrow_Explosive_TekBow_C.UserConstructionScript");

	AProjArrow_Explosive_TekBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Explosive_TekBow.ProjArrow_Explosive_TekBow_C.ExecuteUbergraph_ProjArrow_Explosive_TekBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Explosive_TekBow_C::ExecuteUbergraph_ProjArrow_Explosive_TekBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Explosive_TekBow.ProjArrow_Explosive_TekBow_C.ExecuteUbergraph_ProjArrow_Explosive_TekBow");

	AProjArrow_Explosive_TekBow_C_ExecuteUbergraph_ProjArrow_Explosive_TekBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
