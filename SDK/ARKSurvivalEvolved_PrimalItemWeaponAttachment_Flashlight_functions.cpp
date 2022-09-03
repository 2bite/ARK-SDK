// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_Flashlight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponAttachment_Flashlight.PrimalItemWeaponAttachment_Flashlight_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponAttachment_Flashlight_C::ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachment_Flashlight.PrimalItemWeaponAttachment_Flashlight_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight");

	UPrimalItemWeaponAttachment_Flashlight_C_ExecuteUbergraph_PrimalItemWeaponAttachment_Flashlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
