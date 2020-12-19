// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_Silencer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponAttachment_Silencer.PrimalItemWeaponAttachment_Silencer_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Silencer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponAttachment_Silencer_C::ExecuteUbergraph_PrimalItemWeaponAttachment_Silencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachment_Silencer.PrimalItemWeaponAttachment_Silencer_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Silencer");

	UPrimalItemWeaponAttachment_Silencer_C_ExecuteUbergraph_PrimalItemWeaponAttachment_Silencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
