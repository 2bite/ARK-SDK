// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_Scope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemWeaponAttachment_Scope.PrimalItemWeaponAttachment_Scope_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Scope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemWeaponAttachment_Scope_C::ExecuteUbergraph_PrimalItemWeaponAttachment_Scope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemWeaponAttachment_Scope.PrimalItemWeaponAttachment_Scope_C.ExecuteUbergraph_PrimalItemWeaponAttachment_Scope");

	UPrimalItemWeaponAttachment_Scope_C_ExecuteUbergraph_PrimalItemWeaponAttachment_Scope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
