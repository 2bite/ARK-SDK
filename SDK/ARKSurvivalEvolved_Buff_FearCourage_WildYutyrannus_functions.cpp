// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FearCourage_WildYutyrannus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_WildYutyrannus_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.DrawBuffFloatingHUD");

	ABuff_FearCourage_WildYutyrannus_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.UserConstructionScript
// ()

void ABuff_FearCourage_WildYutyrannus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.UserConstructionScript");

	ABuff_FearCourage_WildYutyrannus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.ExecuteUbergraph_Buff_FearCourage_WildYutyrannus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_WildYutyrannus_C::ExecuteUbergraph_Buff_FearCourage_WildYutyrannus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage_WildYutyrannus.Buff_FearCourage_WildYutyrannus_C.ExecuteUbergraph_Buff_FearCourage_WildYutyrannus");

	ABuff_FearCourage_WildYutyrannus_C_ExecuteUbergraph_Buff_FearCourage_WildYutyrannus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
