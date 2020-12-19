// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HoverSkiff_Deathsplosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.InitDeathsplosion
// ()
// Parameters:
// class ATekHoverSkiff_Character_BP_C* FromSkiff                      (Parm, ZeroConstructor, IsPlainOldData)

void AHoverSkiff_Deathsplosion_C::InitDeathsplosion(class ATekHoverSkiff_Character_BP_C* FromSkiff)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.InitDeathsplosion");

	AHoverSkiff_Deathsplosion_C_InitDeathsplosion_Params params;
	params.FromSkiff = FromSkiff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ReceiveDestroyed
// ()

void AHoverSkiff_Deathsplosion_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ReceiveDestroyed");

	AHoverSkiff_Deathsplosion_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.UserConstructionScript
// ()

void AHoverSkiff_Deathsplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.UserConstructionScript");

	AHoverSkiff_Deathsplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ExecuteUbergraph_HoverSkiff_Deathsplosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHoverSkiff_Deathsplosion_C::ExecuteUbergraph_HoverSkiff_Deathsplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C.ExecuteUbergraph_HoverSkiff_Deathsplosion");

	AHoverSkiff_Deathsplosion_C_ExecuteUbergraph_HoverSkiff_Deathsplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
