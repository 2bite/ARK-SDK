// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekGravityGrenade_Repel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekGravityGrenade_Repel.ProjTekGravityGrenade_Repel_C.UserConstructionScript
// ()

void AProjTekGravityGrenade_Repel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade_Repel.ProjTekGravityGrenade_Repel_C.UserConstructionScript");

	AProjTekGravityGrenade_Repel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekGravityGrenade_Repel.ProjTekGravityGrenade_Repel_C.ExecuteUbergraph_ProjTekGravityGrenade_Repel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekGravityGrenade_Repel_C::ExecuteUbergraph_ProjTekGravityGrenade_Repel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekGravityGrenade_Repel.ProjTekGravityGrenade_Repel_C.ExecuteUbergraph_ProjTekGravityGrenade_Repel");

	AProjTekGravityGrenade_Repel_C_ExecuteUbergraph_ProjTekGravityGrenade_Repel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
