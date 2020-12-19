// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponSprayPaint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponSprayPaint.PrimalItem_WeaponSprayPaint_C.ExecuteUbergraph_PrimalItem_WeaponSprayPaint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponSprayPaint_C::ExecuteUbergraph_PrimalItem_WeaponSprayPaint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSprayPaint.PrimalItem_WeaponSprayPaint_C.ExecuteUbergraph_PrimalItem_WeaponSprayPaint");

	UPrimalItem_WeaponSprayPaint_C_ExecuteUbergraph_PrimalItem_WeaponSprayPaint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
