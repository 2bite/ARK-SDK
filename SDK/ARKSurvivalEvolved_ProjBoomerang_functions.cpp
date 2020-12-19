// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBoomerang_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBoomerang.ProjBoomerang_C.UserConstructionScript
// ()

void AProjBoomerang_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBoomerang.ProjBoomerang_C.UserConstructionScript");

	AProjBoomerang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBoomerang.ProjBoomerang_C.BndEvt__Projectile SFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature
// ()

void AProjBoomerang_C::BndEvt__Projectile_SFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBoomerang.ProjBoomerang_C.BndEvt__Projectile SFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature");

	AProjBoomerang_C_BndEvt__Projectile_SFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBoomerang.ProjBoomerang_C.ExecuteUbergraph_ProjBoomerang
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBoomerang_C::ExecuteUbergraph_ProjBoomerang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBoomerang.ProjBoomerang_C.ExecuteUbergraph_ProjBoomerang");

	AProjBoomerang_C_ExecuteUbergraph_ProjBoomerang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
