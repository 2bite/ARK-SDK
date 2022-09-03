// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ViewableIncubatorEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.SetDisplay
// ()

void AViewableIncubatorEgg_C::SetDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.SetDisplay");

	AViewableIncubatorEgg_C_SetDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UpdateDisplay
// ()
// Parameters:
// bool                           FromAdd                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItemConsumable_Egg_C* EggClass                       (Parm, ZeroConstructor, IsPlainOldData)

void AViewableIncubatorEgg_C::UpdateDisplay(bool FromAdd, class UPrimalItemConsumable_Egg_C* EggClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UpdateDisplay");

	AViewableIncubatorEgg_C_UpdateDisplay_Params params;
	params.FromAdd = FromAdd;
	params.EggClass = EggClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.DrawBasicFloatingHUD
// ()
// Parameters:
// class AHUD**                   ForHUD                         (Parm, ZeroConstructor, IsPlainOldData)

void AViewableIncubatorEgg_C::DrawBasicFloatingHUD(class AHUD** ForHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.DrawBasicFloatingHUD");

	AViewableIncubatorEgg_C_DrawBasicFloatingHUD_Params params;
	params.ForHUD = ForHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UserConstructionScript
// ()

void AViewableIncubatorEgg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.UserConstructionScript");

	AViewableIncubatorEgg_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ReceiveBeginPlay
// ()

void AViewableIncubatorEgg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ReceiveBeginPlay");

	AViewableIncubatorEgg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ExecuteUbergraph_ViewableIncubatorEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AViewableIncubatorEgg_C::ExecuteUbergraph_ViewableIncubatorEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ViewableIncubatorEgg.ViewableIncubatorEgg_C.ExecuteUbergraph_ViewableIncubatorEgg");

	AViewableIncubatorEgg_C_ExecuteUbergraph_ViewableIncubatorEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
