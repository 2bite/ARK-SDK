// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChangeTransponderWeaponFreaquancyEntryUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChangeTransponderWeaponFreaquancyEntryUI.ChangeTransponderWeaponFreaquancyEntryUI_C.ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChangeTransponderWeaponFreaquancyEntryUI_C::ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeTransponderWeaponFreaquancyEntryUI.ChangeTransponderWeaponFreaquancyEntryUI_C.ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI");

	UChangeTransponderWeaponFreaquancyEntryUI_C_ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
