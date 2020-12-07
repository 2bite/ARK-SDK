// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_HoloScope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponAttachment_HoloScope.PrimalItemWeaponAttachment_HoloScope_C.ExecuteUbergraph_PrimalItemWeaponAttachment_HoloScope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponAttachment_HoloScope_C::ExecuteUbergraph_PrimalItemWeaponAttachment_HoloScope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachment_HoloScope.PrimalItemWeaponAttachment_HoloScope_C.ExecuteUbergraph_PrimalItemWeaponAttachment_HoloScope");

	UPrimalItemWeaponAttachment_HoloScope_C_ExecuteUbergraph_PrimalItemWeaponAttachment_HoloScope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
