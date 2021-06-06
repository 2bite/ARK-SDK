// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTaxidermyTool_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTaxidermyTool.WeapTaxidermyTool_C.BPGetSelectedMeleeAttackAnim
// ()
// Parameters:
// struct FWeaponAnim             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FWeaponAnim AWeapTaxidermyTool_C::BPGetSelectedMeleeAttackAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTaxidermyTool.WeapTaxidermyTool_C.BPGetSelectedMeleeAttackAnim");

	AWeapTaxidermyTool_C_BPGetSelectedMeleeAttackAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapTaxidermyTool.WeapTaxidermyTool_C.UserConstructionScript
// ()

void AWeapTaxidermyTool_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTaxidermyTool.WeapTaxidermyTool_C.UserConstructionScript");

	AWeapTaxidermyTool_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTaxidermyTool.WeapTaxidermyTool_C.ExecuteUbergraph_WeapTaxidermyTool
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTaxidermyTool_C::ExecuteUbergraph_WeapTaxidermyTool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTaxidermyTool.WeapTaxidermyTool_C.ExecuteUbergraph_WeapTaxidermyTool");

	AWeapTaxidermyTool_C_ExecuteUbergraph_WeapTaxidermyTool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
