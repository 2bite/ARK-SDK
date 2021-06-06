// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Flame_TekBow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Flame_TekBow.ProjArrow_Flame_TekBow_C.ReceiveBeginPlay
// ()

void AProjArrow_Flame_TekBow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_TekBow.ProjArrow_Flame_TekBow_C.ReceiveBeginPlay");

	AProjArrow_Flame_TekBow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Flame_TekBow.ProjArrow_Flame_TekBow_C.UserConstructionScript
// ()

void AProjArrow_Flame_TekBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_TekBow.ProjArrow_Flame_TekBow_C.UserConstructionScript");

	AProjArrow_Flame_TekBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Flame_TekBow.ProjArrow_Flame_TekBow_C.ExecuteUbergraph_ProjArrow_Flame_TekBow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Flame_TekBow_C::ExecuteUbergraph_ProjArrow_Flame_TekBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_TekBow.ProjArrow_Flame_TekBow_C.ExecuteUbergraph_ProjArrow_Flame_TekBow");

	AProjArrow_Flame_TekBow_C_ExecuteUbergraph_ProjArrow_Flame_TekBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
